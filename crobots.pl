#!/usr/bin/perl
use strict;
use warnings;

use UI::Dialog;
use Term::ReadKey;
use Term::ANSIScreen qw(cls);

my $StatsFileOutput = "/tmp/foo";

###################################################
# No changes below here
###################################################

my $CR_ver = "1.0";

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
program, then matching program against program."; # ZZZ

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

sub ManageBots
{
}

sub DebugBot
{
}

sub BattleArena
{
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
