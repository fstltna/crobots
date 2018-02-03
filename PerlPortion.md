The perl portion assumes you have a script running in cron to import the temporary datafiles from running the game into the database. It reads this in and creates the text file that the "stats" menu option displays.

Steps to set up:
1. Edit crobots.pl and edit the line:
 **my $StatsFileOutput = "/tmp/foo";**
point it where you want your stats txt file saved
2. Edit crobotsprocess.pl and edit that same line to point to the same location
3. Create a cron job to run this however often you want to poll for new game data, maybe a couple times a day or less...
4. Copy RobotTemplate to /sbbs/doors/crobots
