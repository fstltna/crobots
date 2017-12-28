#!/usr/bin/perl
use strict;
use warnings;

use UI::Dialog;
use Term::ReadKey;
use Term::ANSIScreen qw(cls);

my $StatsFileOutput = "/sbbs/doors/crobots/stats.txt";
my $FileEditor = "/bin/nano -R";
my $CrobotsExe = "/sbbs/doors/crobots/crobots -d";

###################################################
# No changes below here
###################################################

my $CR_ver = "1.0";
my $Record = "false";	# Are results saved?
my $TempDir = "/tmp";
my $RobotName = "";
my $BotVersion = "";

# Set UserName from command line
my $UserName = $ARGV[0];
if (!$UserName)
{
	print "You must supply the username!\n";
	exit 0;
}

# Create the users dir if non existing
system("mkdir -p /sbbs/doors/crobots/robots/users/$UserName");

my $d = new UI::Dialog ( backtitle => "CRobots Version v$CR_ver", height => 20, width => 65, listheight => 5,
	order => [ 'ascii', 'cdialog', 'xdialog' ]);

my $windowtitle = "Welcome to CRobots!";
my $enjoyedtitle = "We hope you enjoyed CRobots!";
my $introtext =
"Welcome to the classic programming game!
CROBOTS (\"see-robots\") is a game based on computer programming.
Unlike arcade type games which require human inputs controlling
some object, all strategy in CROBOTS must be complete before the
actual game begins.  Game strategy is condensed into a C language
program that you design and write.  Your program controls a robot
whose mission is to seek out, track, and destroy other robots,
each running different programs.  Each robot is equally equipped,
and up to four robots may compete at once.  CROBOTS is best
played among several people, each refining their own robot
program, then matching program against program.";

$d->msgbox( title => $windowtitle, text => $introtext );

if (($d->state() eq "ESC") || ($d->state() eq "CANCEL"))
{
	exit 0;
}

my $menuselection = "";

sub MainMenu
{
	$menuselection = $d->menu( title => 'Main Menu', text => 'Select one:',
                            list => [ '1', 'Manage Your Bots',
                                      '2', 'Debug Your Bots',
                                      '3', 'Battle Arena',
                                      '4', 'Test Bench',
                                      '5', 'Battle Stats' ] );
}

sub GetBotVersion
{
	my $SourceString = shift;
	my $SourcePos = rindex($SourceString, ':');
	my $SourceName = substr($SourceString, $SourcePos + 2);
	$SourceName = substr($SourceName, 0, length($SourceName) - 3);
	$BotVersion = $SourceName;
	$d->msgbox( title => "ZZZ Testing in GetBotVersion", text => "BotVersion is '$BotVersion'" );
}
sub GetBotName
{
	my $SourceString = shift;
	my $SourcePos = rindex($SourceString, ':');
	my $SourceName = substr($SourceString, $SourcePos + 2);
	$SourceName = substr($SourceName, 0, length($SourceName) - 3);
	$RobotName = $SourceName;
	$d->msgbox( title => "ZZZ Testing in GetBotName:", text => "RobotName is '$RobotName'" );
}

# Reads and parses header in robot file
sub ReadBot
{
	my $RobotFile = shift;
	$RobotName = "UnknownRobot";
	$BotVersion = "???";
	open(ROBOTFH, '<', $RobotFile) or die "Unable to read robot file $RobotFile: $!";
	while(<ROBOTFH>)
	{
		chop;
		if (substr($_, 0, 11) eq "/* Version:")
		{
			GetBotVersion($_)
		}
		elsif (substr($_, 0, 11) eq "/* BotName:")
		{
			GetBotName($_)
		}
	}
	close(ROBOTFH);
}

sub ManageBots
{
	my $selectbot = $d->fselect( title => "Select Your Bot To Manage", path => "/sbbs/doors/crobots/robots/users/$UserName" );

	if ($d->state() ne "OK")
	{
		$d->msgbox( title => "Selected Robot:", text => "No robot selected, aborting..." );
		return;
	}

	if (substr($selectbot, -2) ne ".r")
	{
		$d->msgbox( title => "Selected Robot:", text => "File is not a robot, aborting... To create a bot end the name with \".r\"" );
		return;
	}

	my $PathString = "/sbbs/doors/crobots/robots/users/$UserName";
	if (substr($selectbot, 0, length($PathString)) ne $PathString)
	{
		$d->msgbox( title => "Selected Robot:", text => "Can only manage robots you own, aborting..." );
		return;
	}
	# Does selection exist?
	if (! -f "$selectbot")
	{
		# no
		my $BotNamePos = rindex($selectbot, '/');
		my $BotName = substr($selectbot, $BotNamePos + 1);
		$d->msgbox( title => "Selected Robot:", text => "Robot \"$selectbot\" will be created..." );
		open(MYFH, '>', $selectbot) or die $!;
		print MYFH "/* Version: 1.0 */\n";
		print MYFH "/* BotName: $BotName */\n";
		print MYFH "/* Owner: $UserName */\n";
		close(MYFH);
	}
	system ("$FileEditor \"$selectbot\"");
}

sub DebugBot
{
	$d->msgbox( title => "Not Done Yet", text => "This feature is not done yet..." );
}

sub BattleArena
{
	my $Mode = shift;
	if ($Mode eq "Battle")
	{
		#$d->msgbox( title => "Chose battle mode", text => "battle on" );
		$Record = "true";
	}
	else
	{
		#$d->msgbox( title => "Chose practice mode", text => "testing on" );
		$Record = "false";
	}
	my @selection1 = $d->checklist( title => "Select Testing Robots", text => 'Select up to 3: (If you choose more than 3 only first 3 will be used)',
                                 list => [ '1', [ 'counter.r', 0 ],
                                           '2', [ 'rabbit.r', 0 ],
                                           '3', [ 'rook.r', 1 ],
                                           '4', [ 'sniper.r', 1 ],
                                           '5', [ 'target.r', 1 ] ]
                               );

	my @ActiveRobots = ();
	my $AddedBots = 0;
	foreach my $CurBot (@selection1)
	{
		if ($AddedBots < 3)
		{
			if ($CurBot == 1)
			{
				push (@ActiveRobots, "counter.r");
			}
			elsif ($CurBot == 2)
			{
				push (@ActiveRobots, "rabbit.r");
			}
			elsif ($CurBot == 3)
			{
				push (@ActiveRobots, "rook.r");
			}
			elsif ($CurBot == 4)
			{
				push (@ActiveRobots, "sniper.r");
			}
			elsif ($CurBot == 5)
			{
				push (@ActiveRobots, "target.r");
			}
			$AddedBots++;
		}
	}
	if ($AddedBots > 0)
	{
		$d->msgbox( title => "You have selected these robots:", text => "@ActiveRobots" );
	}
	else
	{
		$d->msgbox( title => "You have selected these robots:", text => "No Robots Selected" );
	}
	my $selectbot = $d->fselect( title => "Select Your or Other Player Bots", path => "/sbbs/doors/crobots/robots/users/$UserName" );

	if ($d->state() ne "OK")
	{
		$d->msgbox( title => "Selected Robot:", text => "No robot selected, aborting..." );
		return;
	}

	if (substr($selectbot, -2) ne ".r")
	{
		$d->msgbox( title => "Selected Robot:", text => "File is not a robot, aborting..." );
		return;
	}

	my $PathString = "/sbbs/doors/crobots/robots/users/$UserName";
	if (substr($selectbot, 0, length($PathString)) ne $PathString)
	{
		$d->msgbox( title => "Selected Robot:", text => "Can only run robots you own, aborting..." );
		return;
	}

	# Does selection exist?
	if (! -f "$selectbot")
	{
		# no
		$d->msgbox( title => "Selected Robot:", text => "Robot must exist!" );
		return;
	}
	# Execute the game
	#system("$CrobotsExe $UserName \"$selectbot\"");
	# Check results
	if ($? != 0)
	{
		# Command failed - no saving
		$d->msgbox( title => "Game Progress:", text => "Game Aborted..." );
		return;
	}
	if ($Record eq "false")
	{
		# Not saving results
		$d->msgbox( title => "Game Progress:", text => "Game results not being saved..." );
		return;
	}
	# Read In Bot Details
	ReadBot($selectbot);
	my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime(time);
	$year += 1900;
	$mon += 1;
	my $TempOut = "$TempDir/crobots-$year-$mon-$mday-$hour-$min-$sec";
	my $GameDate = sprintf("%04d%02d%02d", $year, $mon, $mday);
	open(MYFH, '>', $TempOut) or die "Could not create file '$TempOut' $!";
	print MYFH "Player=$UserName
BotName=$RobotName
BotVersion=$BotVersion
NumWins=1
GameDate=$GameDate
NumBattles=1\n";
	close(MYFH);
}

sub BattleStats
{
	my $clear_screen = cls();
	print $clear_screen;
	open(my $fh, '<', $StatsFileOutput) or die "Could not open file '$StatsFileOutput' $!";
	my $NumLine = 0;
	my $key = "";
	while (my $row = <$fh>)
	{
		chomp $row;
		print "$row\n";
		$NumLine++;
		if ($NumLine == 23)
		{
			print "--- Press Any Key For More ---\n";
			ReadMode 4; # Turn off controls keys
			while (not defined ($key = ReadKey(-1)))
			{
				# No key yet
			}
			ReadMode 0; # Reset tty mode before exiting
			$NumLine = 0;
		}
	}
	#$d->msgbox( title => "Output", text => $StatsFileOutput );
	print "--- Press Any Key To End ---\n";
	ReadMode 4; # Turn off controls keys
	while (not defined ($key = ReadKey(-1)))
	{
		# No key yet
	}
	ReadMode 0; # Reset tty mode before exiting
	close ($fh);
}

while (-1)
{
	MainMenu();
	if (($menuselection eq "CANCEL") || ($menuselection eq "ESC") || ($menuselection eq ""))
	{
		$d->msgbox( title => $enjoyedtitle, text => "Thanks for playing..." );
		exit 0;
	}
	if ($menuselection eq "1")
	{
		ManageBots();
	}
	elsif ($menuselection eq "2")
	{
		DebugBot();
	}
	elsif ($menuselection eq "3")
	{
		BattleArena("Battle");
	}
	elsif ($menuselection eq "4")
	{
		BattleArena("Test");
	}
	elsif ($menuselection eq "5")
	{
		BattleStats();
	}
}

exit 0;
