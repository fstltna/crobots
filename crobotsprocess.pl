#!/usr/bin/perl
use strict;
#use warnings;
use Storable;           # For loading & saving variables
use Digest::MD5::File qw(dir_md5_hex file_md5_hex url_md5_hex);

my $StatsFileOutput = "/sbbs/doors/crobots/stats.txt";
my $StatsHTMLFileOutput = "/var/www/html/stats.html";
my $StatsDatabaseFile = "/sbbs/doors/crobots/data";
my $MD5StatsDatabaseFile = "/sbbs/doors/crobots/md5.db";

###################################################
# No changes below here
###################################################

my $CR_ver = "1.0";
my $TempDir = "/tmp";
my $SawNew = 0;
my @NewFiles = ();
my $CurFile = "";
my $Player = "";
my $BotName = "";
my $BotVersion = "";
my $GameDate = "";
my $NumWins = 0;
my $NumBattles = 0;
my @SeenMD5 = ();
my %player;
my %botname;
my %botversion;
my %gamedate;
my %numwins;
my %numbattles;

# Summary variables
my $NumPlayers = 0;

print "crobotsprocess utility version $CR_ver\n";

sub ProcessData
{
	my $CurFile = shift;
	my $md5 = Digest::MD5->new;
	$md5->addpath($CurFile);
	my $digest = file_md5_hex($CurFile) or die "$CurFile failed: $!";

	open(my $input_fh, "<", $CurFile ) || die "Can't open $CurFile: $!";
	while(<$input_fh>)
	{
		chop();	# Remove trailing eol
		print "Line was '$_'\n";
		# Split the lines
		(my $field, my $curval) = split('=', $_);
		# Parse the current line
		if ($field eq "Player")
		{
			$Player = $curval;
		}
		elsif ($field eq "BotName")
		{
			$BotName = $curval;
		}
		elsif ($field eq "GameDate")
		{
			$GameDate = $curval;
		}
		elsif ($field eq "BotVersion")
		{
			$BotVersion = $curval;
		}
		elsif ($field eq "NumWins")
		{
			$NumWins = $curval;
		}
		elsif ($field eq "NumBattles")
		{
			$NumBattles = $curval;
		}
		else
		{
			print "*** Saw unknown field '$field'\n";
		}
	}
	#print "'$digest'\n";
	#print "'$player{$digest}'\n";
	#print "'$botname{$digest}'\n";
	#print "'$botversion{$digest}'\n";
	#print "'$gamedate{$digest}'\n";
	#print "'$numwins{$digest}'\n";
	#print "'$numbattles{$digest}'\n";
	if ($player{$digest} ne "")
	{
		print("Already added $digest - adding to counts\n");
		$numbattles{$digest} += $NumBattles;
		$numwins{$digest} += $NumWins;
		$gamedate{$digest} = $GameDate;
	}
	else
	{
		print("File $digest not seen, adding to hash\n");
		$player{$digest} = $Player;
		$botname{$digest} = $BotName;
		$botversion{$digest} = $BotVersion;
		$gamedate{$digest} = $GameDate;
		$numwins{$digest} = $NumWins;
		$numbattles{$digest} = $NumBattles;
		push(@SeenMD5, $digest);
	} 
	close($input_fh);
}

# Load in player data hash
if (-f "$StatsDatabaseFile.player")
{
	%player = %{retrieve("$StatsDatabaseFile.player")};
        #print("Read in $StatsDatabaseFile.player\n");
}

# Load in botname data hash
if (-f "$StatsDatabaseFile.botname")
{
	%botname = %{retrieve("$StatsDatabaseFile.botname")};
        #print("Read in $StatsDatabaseFile.botname\n");
}

# Load in botversion data hash
if (-f "$StatsDatabaseFile.botversion")
{
	%botversion = %{retrieve("$StatsDatabaseFile.botversion")};
        # print("Read in $StatsDatabaseFile.botversion\n");
}

# Load in gamedate data hash
if (-f "$StatsDatabaseFile.gamedate")
{
	%gamedate = %{retrieve("$StatsDatabaseFile.gamedate")};
        #print("Read in $StatsDatabaseFile.gamedate\n");
}

# Load in numwins data hash
if (-f "$StatsDatabaseFile.numwins")
{
	%numwins = %{retrieve("$StatsDatabaseFile.numwins")};
        #print("Read in $StatsDatabaseFile.numwins\n");
}

# Load in numbattles data hash
if (-f "$StatsDatabaseFile.numbattles")
{
	%numbattles = %{retrieve("$StatsDatabaseFile.numbattles")};
        #print("Read in $StatsDatabaseFile.numbattles\n");
}

# Load in a data hash
if (-f $MD5StatsDatabaseFile)
{
	@SeenMD5 = @{retrieve($MD5StatsDatabaseFile)};
        #print("Read in $MD5StatsDatabaseFile\n");
}

# Look for files waiting to be processed
opendir(my $dh, $TempDir) || die "Can't open $TempDir: $!";
while (readdir $dh)
{
	if (substr($_, 0, 8) eq "crobots-")
	{
		$SawNew++;
		push (@NewFiles, "$TempDir/$_");
	}
}
closedir $dh;

my $ForceBuild = "";
if ($ARGV[0] eq "force")
{
	# Force rebuild
	$ForceBuild = "force";
}

# Did we see any new games?
if (($SawNew == 0) && ($ForceBuild ne "force"))
{
	# Nope, so exit
	exit 0;
}

print "Saw $SawNew new game data file(s) to process\n";

foreach $CurFile (@NewFiles)
{
	# Process this file
	ProcessData($CurFile);
	# All done, delete the temp file
	unlink($CurFile);
}

# Save seen file hash
store (\%player, "$StatsDatabaseFile.player");
store (\%botname, "$StatsDatabaseFile.botname");
store (\%botversion, "$StatsDatabaseFile.botversion");
store (\%gamedate, "$StatsDatabaseFile.gamedate");
store (\%numwins, "$StatsDatabaseFile.numwins");
store (\%numbattles, "$StatsDatabaseFile.numbattles");
store (\@SeenMD5, $MD5StatsDatabaseFile);
#print("Saved file hash\n");

# Create the top info ZZZ

# First get number of unique users
my %seenplayer;
my $NumBots = 0;
foreach my $curkey (keys %player)
{
	$NumBots++;
	if ($seenplayer{$player{$curkey}} eq "")
	{
		print "Saw player $player{$curkey}\n";
		$seenplayer{$player{$curkey}} = "true";
		$NumPlayers++;
	}
}

# Now create output files
(my $sec,my $min,my $hour,my $mday,my $mon,my $year,my $wday,my $yday,my $isdst) = localtime(time);
my $now = sprintf("%02d-%02d-%04d %02d:%02d:%02d", $mon+1, $mday, $year+1900, $hour, $min, $sec);

open(my $output_fh, ">", $StatsFileOutput ) || die "Can't write to $StatsFileOutput: $!";
printf $output_fh <<"EOT";
              Welcome to the CRobots competition server

       There are currently $NumPlayers players and $NumBots robots in total.
          This data was last updated at $now.

EOT

printf($output_fh "%-15s | %-15s | Vers | Wins | Battles | Game Date\n========================================================================\n", "Player", "Bot Name");

foreach my $sortkey (sort {$gamedate{$a} <=> $gamedate{$b}} keys %gamedate)
{
	my $formatdate = sprintf("%02d/%02d/%04d", substr($gamedate{$sortkey}, 4, 2), substr($gamedate{$sortkey}, 6, 2), substr($gamedate{$sortkey}, 0, 4));
	printf($output_fh "%-15s | %-15s | %-4s | %-4s | %-7s | %s\n", $player{$sortkey}, $botname{$sortkey}, $botversion{$sortkey}, $numwins{$sortkey}, $numbattles{$sortkey}, $formatdate);
}
close($output_fh);

open(my $output_fh, ">", $StatsHTMLFileOutput ) || die "Can't write to $StatsHTMLFileOutput: $!";
printf $output_fh <<"EOT";
<html>
<head>
<title>CRobots Tournaments Status</title>
<script src=\"https://amigacity.xyz/sorttable.js\"></script>
<style>
body {
    background-color: linen;
}
table.sortable th:not(.sorttable_sorted):not(.sorttable_sorted_reverse):not(.sorttable_nosort):after { 
    content: \" \\25B4\\25BE\"
}
</style>
</head>
<body>
<h1 align=center>Welcome to the CRobots competition server</h1>
<br>
<p align=center>There are currently $NumPlayers players and $NumBots robots in total.</p>
<p align=center>This data was last updated at $now.</p>
<center>
<table class="sortable">
 <thead>
   <tr>
     <th>Player Name</th>
     <th>Bot Name</th>
     <th>Bot Version</th>
     <th>Wins</th>
     <th>Battles</th>
     <th>Game Date</th>
  </tr>
 </thead>
 <tbody>
EOT

foreach my $sortkey (sort {$gamedate{$a} <=> $gamedate{$b}} keys %gamedate)
{
	my $formatdate = sprintf("%02d/%02d/%04d", substr($gamedate{$sortkey}, 4, 2), substr($gamedate{$sortkey}, 6, 2), substr($gamedate{$sortkey}, 0, 4));
	printf($output_fh
"<tr><td>$player{$sortkey}</td><td>$botname{$sortkey}</td><td>$botversion{$sortkey}</td><td>$numwins{$sortkey}</td><td>$numbattles{$sortkey}</td><td>$formatdate</td></tr>\n");
}
printf($output_fh "</tbody>\n</table>\n</center>\n</body>\n</html>");
close($output_fh);
exit 0;
