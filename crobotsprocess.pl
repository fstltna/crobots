#!/usr/bin/perl
use strict;
#use warnings;
use Storable;           # For loading & saving variables
use Digest::MD5::File qw(dir_md5_hex file_md5_hex url_md5_hex);
use Date::Parse;
#use DBI;

my $StatsFileOutput = "/tmp/foo";
my $StatsDatabaseFile = "/tmp/foo.db";

###################################################
# No changes below here
###################################################

my $CR_ver = "1.0";
my $TempDir = "/tmp";
my $SawNew = 0;
my @NewFiles = ();
my @SeenMD5 = ();	# ZZZ
my $CurFile = "";
my $Player = "";
my $BotName = "";
my $BotVersion = "";
my $GameDate = "";
my $NumWins = 0;
my $NumBattles = 0;
my @DataStore = ([],[]);

print "crobotsprocess utility version $CR_ver\n";

#my $dbh = DBI->connect("dbi:SQLite:dbname=$StatsDatabaseFile","","");

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
print "$DataStore[$digest]\n";
print "'$DataStore[$digest][\"digest\"]'\n";
	if ($DataStore[$digest]["digest"] eq $digest)
	{
		print("Already added $_ - skipping\n");
	}
	else
	{
		print("File $_ not seen, adding to hash\n");
		$DataStore[$digest]["digest"] = $digest;
		$DataStore[$digest]["player"] = $Player;
		$DataStore[$digest]["botname"] = $BotName;
		$DataStore[$digest]["botversion"] = $BotVersion;
		$DataStore[$digest]["gamedate"] = $GameDate;
		push(@SeenMD5, $digest);
	} 
	close($input_fh);
}

# Load in a data hash
if (-f $StatsDatabaseFile)
{
	@DataStore = @{retrieve($StatsDatabaseFile)};
        print("Read in $StatsDatabaseFile\n");
}
else
{
        print("$StatsDatabaseFile not found\n");
        @DataStore = (["foo"], ["bar"]);
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
store (\@DataStore, $StatsDatabaseFile);
print("Saved seen file hash to $StatsDatabaseFile\n");

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
