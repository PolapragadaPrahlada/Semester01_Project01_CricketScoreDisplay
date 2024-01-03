#include <stdio.h>
#include <stdlib.h>
#include "ScoreDisplay.h"

int main(void)
{
	char KeyPress;
	
	
	// Clear the screen.
	system("clear");

	// Function call to initialize the data structures of Batsman.
	InitData();
	
	// Function call to display the scorecard of the Batsman.
	for (int TeamCount = 0; TeamCount <= 1; TeamCount++)
	{
		// Clear the screen.
		system("clear");

		// Function call to display the scorecard of the Batsman.
		DispScorecardBatsman(TeamCount);

		printf("Press any key to continue...");
		scanf("%c", &KeyPress);
				
		// Clear the screen.
		system("clear");

		// Function call to display the scorecard of the Bowler.
		DispScorecardBowler(!TeamCount);
				
		printf("Press any key to continue...");
		scanf("%c", &KeyPress);
	}

			
	return 0;
}
