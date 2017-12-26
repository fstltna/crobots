#!/usr/bin/perl
use strict;
#use warnings;
use Storable;           # For loading & saving variables
use Digest::MD5::File qw(dir_md5_hex file_md5_hex url_md5_hex);
use Date::Parse;

my $StatsFileOutput = "/tmp/foo";
my $StatsDatabaseFile = "/tmp/foo";
my $MD5StatsDatabaseFile = "/tmp/foomd5.db";

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
print "'$digest'\n";	# ZZZ
print "'$player{$digest}'\n";
print "'$botname{$digest}'\n";
print "'$botversion{$digest}'\n";
print "'$gamedate{$digest}'\n";
print "'$numwins{$digest}'\n";
print "'$numbattles{$digest}'\n";
	if ($player{$digest} ne "")
	{
		print("Already added $digest - skipping\n");
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
        print("Read in $StatsDatabaseFile.player\n");
}
else
{
        print("\"$StatsDatabaseFile.player\" not found\n");
}

# Load in botname data hash
if (-f "$StatsDatabaseFile.botname")
{
	%botname = %{retrieve("$StatsDatabaseFile.botname")};
        print("Read in $StatsDatabaseFile.botname\n");
}
else
{
        print("\"$StatsDatabaseFile.botname\" not found\n");
}

# Load in botversion data hash
if (-f "$StatsDatabaseFile.botversion")
{
	%botversion = %{retrieve("$StatsDatabaseFile.botversion")};
        print("Read in $StatsDatabaseFile.botversion\n");
}
else
{
        print("\"$StatsDatabaseFile.botversion\" not found\n");
}

# Load in gamedate data hash
if (-f "$StatsDatabaseFile.gamedate")
{
	%gamedate = %{retrieve("$StatsDatabaseFile.gamedate")};
        print("Read in $StatsDatabaseFile.gamedate\n");
}
else
{
        print("\"$StatsDatabaseFile.gamedate\" not found\n");
}

# Load in numwins data hash
if (-f "$StatsDatabaseFile.numwins")
{
	%numwins = %{retrieve("$StatsDatabaseFile.numwins")};
        print("Read in $StatsDatabaseFile.numwins\n");
}
else
{
        print("\"$StatsDatabaseFile.numwins\" not found\n");
}

# Load in numbattles data hash
if (-f "$StatsDatabaseFile.numbattles")
{
	%numbattles = %{retrieve("$StatsDatabaseFile.numbattles")};
        print("Read in $StatsDatabaseFile.numbattles\n");
}
else
{
        print("\"$StatsDatabaseFile.numbattles\" not found\n");
}

# Load in a data hash
if (-f $MD5StatsDatabaseFile)
{
	@SeenMD5 = @{retrieve($MD5StatsDatabaseFile)};
        print("Read in $MD5StatsDatabaseFile\n");
}
else
{
        print("$MD5StatsDatabaseFile not found\n");
}

# Look for files waiting to be processed
opendir(my $dh, $TempDir) || die "Can't open $TempDir: $!";
while (readdir $dh)
{
	if (substr($_, 0, 7) eq "crobots")
	{
		$SawNew++;
		push (@NewFiles, "$TempDir/$_");
	}
}
closedir $dh;

# Did we see any new games?
if ($SawNew == 0)
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
	print "unlink($CurFile)\n";
	#unlink($CurFile);
}

# Save seen file hash
store (\%player, "$StatsDatabaseFile.player");
store (\%botname, "$StatsDatabaseFile.botname");
store (\%botversion, "$StatsDatabaseFile.botversion");
store (\%gamedate, "$StatsDatabaseFile.gamedate");
store (\%numwins, "$StatsDatabaseFile.numwins");
store (\%numbattles, "$StatsDatabaseFile.numbattles");
store (\@SeenMD5, $MD5StatsDatabaseFile);
print("Saved file hash\n");

# Create the top info



# Now create output files
open(my $output_fh, ">", $StatsFileOutput ) || die "Can't write to $StatsFileOutput: $!";
printf $output_fh <<"EOT";
    Welcome to the MCG Carpark.

    There are currently $Player parking spaces available.
    Please drive up to booth and collect a ticket.
EOT
close($output_fh);

exit 0;
