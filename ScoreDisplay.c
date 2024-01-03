#include <stdio.h>
#include <string.h>
#include "ScoreDisplay.h"

// Structure variable for the Batsmen.
struct Cricket Team[2];

// Function to initialize the data structures.
void InitData()
{	/* TeamA - Batsman */
	strcpy(Team[0].TeamName, "India");
	
	// Batsman #01.
	strcpy(Team[0].Batsman[0].Name, "Gavaskar");
	Team[0].Batsman[0].Runs = 2;
	Team[0].Batsman[0].Balls = 12;
	Team[0].Batsman[0].Fours = 0;
	Team[0].Batsman[0].Sixes = 0;
	Team[0].Batsman[0].OutInfo.OutType = 'C';
	strcpy(Team[0].Batsman[0].OutInfo.OutByBowler, "Roberts");
	strcpy(Team[0].Batsman[0].OutInfo.OutByFielder, "Dujon");
	
	// Batsman #02.
	strcpy(Team[0].Batsman[1].Name, "Srikkanth");
	Team[0].Batsman[1].Runs = 38;
	Team[0].Batsman[1].Balls = 57;
	Team[0].Batsman[1].Fours = 7;
	Team[0].Batsman[1].Sixes = 1;
	Team[0].Batsman[1].OutInfo.OutType = 'L';
	strcpy(Team[0].Batsman[1].OutInfo.OutByBowler, "Marshall");
	strcpy(Team[0].Batsman[1].OutInfo.OutByFielder, "");
	
	// Batsman #03.
	strcpy(Team[0].Batsman[2].Name, "Amarnath");
	Team[0].Batsman[2].Runs = 26;
	Team[0].Batsman[2].Balls = 80;
	Team[0].Batsman[2].Fours = 3;
	Team[0].Batsman[2].Sixes = 0;
	Team[0].Batsman[2].OutInfo.OutType = 'B';
	strcpy(Team[0].Batsman[2].OutInfo.OutByBowler, "Holding");
	strcpy(Team[0].Batsman[2].OutInfo.OutByFielder, "");
	
	// Batsman #04.
	strcpy(Team[0].Batsman[3].Name, "Yashpal");
	Team[0].Batsman[3].Runs = 11;
	Team[0].Batsman[3].Balls = 32;
	Team[0].Batsman[3].Fours = 1;
	Team[0].Batsman[3].Sixes = 0;
	Team[0].Batsman[3].OutInfo.OutType = 'C';
	strcpy(Team[0].Batsman[3].OutInfo.OutByBowler, "Gomes");
	strcpy(Team[0].Batsman[3].OutInfo.OutByFielder, "Sub");
	
	// Batsman #05.
	strcpy(Team[0].Batsman[4].Name, "Sandeep");
	Team[0].Batsman[4].Runs = 27;
	Team[0].Batsman[4].Balls = 29;
	Team[0].Batsman[4].Fours = 0;
	Team[0].Batsman[4].Sixes = 1;
	Team[0].Batsman[4].OutInfo.OutType = 'C';
	strcpy(Team[0].Batsman[4].OutInfo.OutByBowler, "Garner");
	strcpy(Team[0].Batsman[4].OutInfo.OutByFielder, "Gomes");
	
	// Batsman #06.
	strcpy(Team[0].Batsman[5].Name, "Kapil Dev");
	Team[0].Batsman[5].Runs = 15;
	Team[0].Batsman[5].Balls = 8;
	Team[0].Batsman[5].Fours = 3;
	Team[0].Batsman[5].Sixes = 0;
	Team[0].Batsman[5].OutInfo.OutType = 'C';
	strcpy(Team[0].Batsman[5].OutInfo.OutByBowler, "Gomes");
	strcpy(Team[0].Batsman[5].OutInfo.OutByFielder, "Holding");
	
	// Batsman #07.
	strcpy(Team[0].Batsman[6].Name, "Kirti Azad");
	Team[0].Batsman[6].Runs = 0;
	Team[0].Batsman[6].Balls = 3;
	Team[0].Batsman[6].Fours = 0;
	Team[0].Batsman[6].Sixes = 0;
	Team[0].Batsman[6].OutInfo.OutType = 'C';
	strcpy(Team[0].Batsman[6].OutInfo.OutByBowler, "Roberts");
	strcpy(Team[0].Batsman[6].OutInfo.OutByFielder, "Garner");
	
	// Batsman #08.
	strcpy(Team[0].Batsman[7].Name, "Binny");
	Team[0].Batsman[7].Runs = 2;
	Team[0].Batsman[7].Balls = 8;
	Team[0].Batsman[7].Fours = 0;
	Team[0].Batsman[7].Sixes = 0;
	Team[0].Batsman[7].OutInfo.OutType = 'C';
	strcpy(Team[0].Batsman[7].OutInfo.OutByBowler, "Roberts");
	strcpy(Team[0].Batsman[7].OutInfo.OutByFielder, "Garner");
	
	// Batsman #09.
	strcpy(Team[0].Batsman[8].Name, "Madan Lal");
	Team[0].Batsman[8].Runs = 17;
	Team[0].Batsman[8].Balls = 27;
	Team[0].Batsman[8].Fours = 0;
	Team[0].Batsman[8].Sixes = 1;
	Team[0].Batsman[8].OutInfo.OutType = 'B';
	strcpy(Team[0].Batsman[8].OutInfo.OutByBowler, "Marshall");
	strcpy(Team[0].Batsman[8].OutInfo.OutByFielder, "");
	
	// Batsman #10.
	strcpy(Team[0].Batsman[9].Name, "Kirmani");
	Team[0].Batsman[9].Runs = 14;
	Team[0].Batsman[9].Balls = 43;
	Team[0].Batsman[9].Fours = 0;
	Team[0].Batsman[9].Sixes = 0;
	Team[0].Batsman[9].OutInfo.OutType = 'B';
	strcpy(Team[0].Batsman[9].OutInfo.OutByBowler, "Holding");
	strcpy(Team[0].Batsman[9].OutInfo.OutByFielder, "");
	
	// Batsman #11.
	strcpy(Team[0].Batsman[10].Name, "Sandhu");
	Team[0].Batsman[10].Runs = 11;
	Team[0].Batsman[10].Balls = 30;
	Team[0].Batsman[10].Fours = 1;
	Team[0].Batsman[10].Sixes = 0;
	Team[0].Batsman[10].OutInfo.OutType = 'N';
	strcpy(Team[0].Batsman[10].OutInfo.OutByBowler, "");
	strcpy(Team[0].Batsman[10].OutInfo.OutByFielder, "");
	
	
	/* TeamB - Batsman */
	strcpy(Team[1].TeamName, "West Indies");
	
	// Batsman #01.
	strcpy(Team[1].Batsman[0].Name, "Greenidge");
	Team[1].Batsman[0].Runs = 1;
	Team[1].Batsman[0].Balls = 12;
	Team[1].Batsman[0].Fours = 0;
	Team[1].Batsman[0].Sixes = 0;
	Team[1].Batsman[0].OutInfo.OutType = 'B';
	strcpy(Team[1].Batsman[0].OutInfo.OutByBowler, "Sandhu");
	strcpy(Team[1].Batsman[0].OutInfo.OutByFielder, "");
	
	// Batsman #02.
	strcpy(Team[1].Batsman[1].Name, "Haynes");
	Team[1].Batsman[1].Runs = 13;
	Team[1].Batsman[1].Balls = 33;
	Team[1].Batsman[1].Fours = 2;
	Team[1].Batsman[1].Sixes = 0;
	Team[1].Batsman[1].OutInfo.OutType = 'C';
	strcpy(Team[1].Batsman[1].OutInfo.OutByBowler, "Madan Lal");
	strcpy(Team[1].Batsman[1].OutInfo.OutByFielder, "Binny");
	
	// Batsman #03.
	strcpy(Team[1].Batsman[2].Name, "Richards");
	Team[1].Batsman[2].Runs = 33;
	Team[1].Batsman[2].Balls = 28;
	Team[1].Batsman[2].Fours = 7;
	Team[1].Batsman[2].Sixes = 0;
	Team[1].Batsman[2].OutInfo.OutType = 'C';
	strcpy(Team[1].Batsman[2].OutInfo.OutByBowler, "Madan Lal");
	strcpy(Team[1].Batsman[2].OutInfo.OutByFielder, "Kapil Dev");
	
	// Batsman #04.
	strcpy(Team[1].Batsman[3].Name, "Lloyd");
	Team[1].Batsman[3].Runs = 8;
	Team[1].Batsman[3].Balls = 17;
	Team[1].Batsman[3].Fours = 1;
	Team[1].Batsman[3].Sixes = 0;
	Team[1].Batsman[3].OutInfo.OutType = 'C';
	strcpy(Team[1].Batsman[3].OutInfo.OutByBowler, "Binny");
	strcpy(Team[1].Batsman[3].OutInfo.OutByFielder, "Kapil Dev");
	
	// Batsman #05.
	strcpy(Team[1].Batsman[4].Name, "Gomes");
	Team[1].Batsman[4].Runs = 5;
	Team[1].Batsman[4].Balls = 16;
	Team[1].Batsman[4].Fours = 0;
	Team[1].Batsman[4].Sixes = 0;
	Team[1].Batsman[4].OutInfo.OutType = 'C';
	strcpy(Team[1].Batsman[4].OutInfo.OutByBowler, "Madan Lal");
	strcpy(Team[1].Batsman[4].OutInfo.OutByFielder, "Gavaskar");
	
	// Batsman #06.
	strcpy(Team[1].Batsman[5].Name, "Bacchus");
	Team[1].Batsman[5].Runs = 8;
	Team[1].Batsman[5].Balls = 25;
	Team[1].Batsman[5].Fours = 0;
	Team[1].Batsman[5].Sixes = 0;
	Team[1].Batsman[5].OutInfo.OutType = 'C';
	strcpy(Team[1].Batsman[5].OutInfo.OutByBowler, "Sandhu");
	strcpy(Team[1].Batsman[5].OutInfo.OutByFielder, "Kirmani");
	
	// Batsman #07.
	strcpy(Team[1].Batsman[6].Name, "Dujon");
	Team[1].Batsman[6].Runs = 25;
	Team[1].Batsman[6].Balls = 73;
	Team[1].Batsman[6].Fours = 0;
	Team[1].Batsman[6].Sixes = 1;
	Team[1].Batsman[6].OutInfo.OutType = 'B';
	strcpy(Team[1].Batsman[6].OutInfo.OutByBowler, "Amarnath");
	strcpy(Team[1].Batsman[6].OutInfo.OutByFielder, "");
	
	// Batsman #08.
	strcpy(Team[1].Batsman[7].Name, "Marshall");
	Team[1].Batsman[7].Runs = 18;
	Team[1].Batsman[7].Balls = 51;
	Team[1].Batsman[7].Fours = 0;
	Team[1].Batsman[7].Sixes = 0;
	Team[1].Batsman[7].OutInfo.OutType = 'C';
	strcpy(Team[1].Batsman[7].OutInfo.OutByBowler, "Amarnath");
	strcpy(Team[1].Batsman[7].OutInfo.OutByFielder, "Gavaskar");
	
	// Batsman #09.
	strcpy(Team[1].Batsman[8].Name, "Roberts");
	Team[1].Batsman[8].Runs = 17;
	Team[1].Batsman[8].Balls = 27;
	Team[1].Batsman[8].Fours = 0;
	Team[1].Batsman[8].Sixes = 1;
	Team[1].Batsman[8].OutInfo.OutType = 'L';
	strcpy(Team[1].Batsman[8].OutInfo.OutByBowler, "Kapil Dev");
	strcpy(Team[1].Batsman[8].OutInfo.OutByFielder, "");
	
	// Batsman #10.
	strcpy(Team[1].Batsman[9].Name, "Garner");
	Team[1].Batsman[9].Runs = 5;
	Team[1].Batsman[9].Balls = 19;
	Team[1].Batsman[9].Fours = 0;
	Team[1].Batsman[9].Sixes = 0;
	Team[1].Batsman[9].OutInfo.OutType = 'N';
	strcpy(Team[1].Batsman[9].OutInfo.OutByBowler, "");
	strcpy(Team[1].Batsman[9].OutInfo.OutByFielder, "");
	
	// Batsman #11.
	strcpy(Team[1].Batsman[10].Name, "Holding");
	Team[1].Batsman[10].Runs = 6;
	Team[1].Batsman[10].Balls = 24;
	Team[1].Batsman[10].Fours = 0;
	Team[1].Batsman[10].Sixes = 0;
	Team[1].Batsman[10].OutInfo.OutType = 'N';
	strcpy(Team[1].Batsman[10].OutInfo.OutByBowler, "Amarnath");
	strcpy(Team[1].Batsman[10].OutInfo.OutByFielder, "");


	/* TeamA - Bowler */
	// Bowler #01.
	strcpy(Team[0].Bowler[0].Name, "Kapil Dev");
	Team[0].Bowler[0].Overs = 11;
	Team[0].Bowler[0].Mdns = 4;
	Team[0].Bowler[0].Runs = 21;
	Team[0].Bowler[0].Wickets = 1;
	Team[0].Bowler[0].WD = 0;
	Team[0].Bowler[0].NB = 0;
	
	// Bowler #02.
	strcpy(Team[0].Bowler[1].Name, "Sandhu");
	Team[0].Bowler[1].Overs = 9;
	Team[0].Bowler[1].Mdns = 1;
	Team[0].Bowler[1].Runs = 32;
	Team[0].Bowler[1].Wickets = 2;
	Team[0].Bowler[1].WD = 0;
	Team[0].Bowler[1].NB = 0;
	
	// Bowler #03.
	strcpy(Team[0].Bowler[2].Name, "Madan Lal");
	Team[0].Bowler[2].Overs = 12;
	Team[0].Bowler[2].Mdns = 2;
	Team[0].Bowler[2].Runs = 31;
	Team[0].Bowler[2].Wickets = 3;
	Team[0].Bowler[2].WD = 0;
	Team[0].Bowler[2].NB = 0;
	
	// Bowler #04.
	strcpy(Team[0].Bowler[3].Name, "Binny");
	Team[0].Bowler[3].Overs = 10;
	Team[0].Bowler[3].Mdns = 1;
	Team[0].Bowler[3].Runs = 23;
	Team[0].Bowler[3].Wickets = 1;
	Team[0].Bowler[3].WD = 0;
	Team[0].Bowler[3].NB = 0;
	
	// Bowler #05.
	strcpy(Team[0].Bowler[4].Name, "Amarnath");
	Team[0].Bowler[4].Overs = 7;
	Team[0].Bowler[4].Mdns = 0;
	Team[0].Bowler[4].Runs = 12;
	Team[0].Bowler[4].Wickets = 3;
	Team[0].Bowler[4].WD = 0;
	Team[0].Bowler[4].NB = 0;
	
	// Bowler #06.
	strcpy(Team[0].Bowler[5].Name, "Kirti Azad");
	Team[0].Bowler[5].Overs = 3;
	Team[0].Bowler[5].Mdns = 0;
	Team[0].Bowler[5].Runs = 7;
	Team[0].Bowler[5].Wickets = 0;
	Team[0].Bowler[5].WD = 0;
	Team[0].Bowler[5].NB = 0;
	
	// Bowler #07.
	strcpy(Team[0].Bowler[6].Name, "Gavaskar");
	Team[0].Bowler[6].Overs = 0;
	Team[0].Bowler[6].Mdns = 0;
	Team[0].Bowler[6].Runs = 0;
	Team[0].Bowler[6].Wickets = 0;
	Team[0].Bowler[6].WD = 0;
	Team[0].Bowler[6].NB = 0;
	
	// Bowler #08.
	strcpy(Team[0].Bowler[7].Name, "Srikkanth");
	Team[0].Bowler[7].Overs = 0;
	Team[0].Bowler[7].Mdns = 0;
	Team[0].Bowler[7].Runs = 0;
	Team[0].Bowler[7].Wickets = 0;
	Team[0].Bowler[7].WD = 0;
	Team[0].Bowler[7].NB = 0;
	
	// Bowler #09.
	strcpy(Team[0].Bowler[8].Name, "Yashpal");
	Team[0].Bowler[8].Overs = 0;
	Team[0].Bowler[8].Mdns = 0;
	Team[0].Bowler[8].Runs = 0;
	Team[0].Bowler[8].Wickets = 0;
	Team[0].Bowler[8].WD = 0;
	Team[0].Bowler[8].NB = 0;
	
	// Bowler #10.
	strcpy(Team[0].Bowler[9].Name, "Sandeep Patil");
	Team[0].Bowler[9].Overs = 0;
	Team[0].Bowler[9].Mdns = 0;
	Team[0].Bowler[9].Runs = 0;
	Team[0].Bowler[9].Wickets = 0;
	Team[0].Bowler[9].WD = 0;
	Team[0].Bowler[9].NB = 0;
	
	// Bowler #11.
	strcpy(Team[0].Bowler[10].Name, "Kirmani");
	Team[0].Bowler[10].Overs = 0;
	Team[0].Bowler[10].Mdns = 0;
	Team[0].Bowler[10].Runs = 0;
	Team[0].Bowler[10].Wickets = 0;
	Team[0].Bowler[10].WD = 0;
	Team[0].Bowler[10].NB = 0;


	/* TeamB - Bowler */
	// Bowler #01.
	strcpy(Team[1].Bowler[0].Name, "Roberts");
	Team[1].Bowler[0].Overs = 10;
	Team[1].Bowler[0].Mdns = 3;
	Team[1].Bowler[0].Runs = 32;
	Team[1].Bowler[0].Wickets = 3;
	Team[1].Bowler[0].WD = 0;
	Team[1].Bowler[0].NB = 0;
	
	// Bowler #02.
	strcpy(Team[1].Bowler[1].Name, "Garner");
	Team[1].Bowler[1].Overs = 12;
	Team[1].Bowler[1].Mdns = 4;
	Team[1].Bowler[1].Runs = 24;
	Team[1].Bowler[1].Wickets = 1;
	Team[1].Bowler[1].WD = 0;
	Team[1].Bowler[1].NB = 0;
	
	// Bowler #03.
	strcpy(Team[1].Bowler[2].Name, "Marshall");
	Team[1].Bowler[2].Overs = 11;
	Team[1].Bowler[2].Mdns = 1;
	Team[1].Bowler[2].Runs = 24;
	Team[1].Bowler[2].Wickets = 2;
	Team[1].Bowler[2].WD = 0;
	Team[1].Bowler[2].NB = 0;
	
	// Bowler #04.
	strcpy(Team[1].Bowler[3].Name, "Holding");
	Team[1].Bowler[3].Overs = 9.4;
	Team[1].Bowler[3].Mdns = 2;
	Team[1].Bowler[3].Runs = 26;
	Team[1].Bowler[3].Wickets = 2;
	Team[1].Bowler[3].WD = 0;
	Team[1].Bowler[3].NB = 0;
	
	// Bowler #05.
	strcpy(Team[1].Bowler[4].Name, "Gomes");
	Team[1].Bowler[4].Overs = 11;
	Team[1].Bowler[4].Mdns = 1;
	Team[1].Bowler[4].Runs = 49;
	Team[1].Bowler[4].Wickets = 2;
	Team[1].Bowler[4].WD = 0;
	Team[1].Bowler[4].NB = 0;
	
	// Bowler #06.
	strcpy(Team[1].Bowler[5].Name, "Richards");
	Team[1].Bowler[5].Overs = 1;
	Team[1].Bowler[5].Mdns = 0;
	Team[1].Bowler[5].Runs = 8;
	Team[1].Bowler[5].Wickets = 0;
	Team[1].Bowler[5].WD = 0;
	Team[1].Bowler[5].NB = 0;
	
	// Bowler #07.
	strcpy(Team[1].Bowler[6].Name, "Greenidge");
	Team[1].Bowler[6].Overs = 0;
	Team[1].Bowler[6].Mdns = 0;
	Team[1].Bowler[6].Runs = 0;
	Team[1].Bowler[6].Wickets = 0;
	Team[1].Bowler[6].WD = 0;
	Team[1].Bowler[6].NB = 0;
	
	// Bowler #08.
	strcpy(Team[1].Bowler[7].Name, "Haynes");
	Team[1].Bowler[7].Overs = 0;
	Team[1].Bowler[7].Mdns = 0;
	Team[1].Bowler[7].Runs = 0;
	Team[1].Bowler[7].Wickets = 0;
	Team[1].Bowler[7].WD = 0;
	Team[1].Bowler[7].NB = 0;
	
	// Bowler #09.
	strcpy(Team[1].Bowler[8].Name, "Lloyd");
	Team[1].Bowler[8].Overs = 0;
	Team[1].Bowler[8].Mdns = 0;
	Team[1].Bowler[8].Runs = 0;
	Team[1].Bowler[8].Wickets = 0;
	Team[1].Bowler[8].WD = 0;
	Team[1].Bowler[8].NB = 0;
	
	// Bowler #10.
	strcpy(Team[1].Bowler[9].Name, "Bacchus");
	Team[1].Bowler[9].Overs = 0;
	Team[1].Bowler[9].Mdns = 0;
	Team[1].Bowler[9].Runs = 0;
	Team[1].Bowler[9].Wickets = 0;
	Team[1].Bowler[9].WD = 0;
	Team[1].Bowler[9].NB = 0;
	
	// Bowler #11.
	strcpy(Team[1].Bowler[10].Name, "Dujon");
	Team[1].Bowler[10].Overs = 0;
	Team[1].Bowler[10].Mdns = 0;
	Team[1].Bowler[10].Runs = 0;
	Team[1].Bowler[10].Wickets = 0;
	Team[1].Bowler[10].WD = 0;
	Team[1].Bowler[10].NB = 0;
}

// Function to print number of space characters.
void PrintChars(char Character, int NumSpaces)
{
	for (int Count = 0; Count < NumSpaces; Count++)
	{
		printf("%c", Character);
	}
}

// Function to print number of space characters.
void TrimName(char *CharPtr)
{
	CharPtr += TRIM_SIZE;
	*CharPtr = '\0';
}

// Function to display the scorecard of the Batsman.
void DispScorecardBatsman(int TeamCount)
{	
	char TmpStr[100];
	char temp[400];
	int Extras = 0;
	int TotalRuns = 0;
	int TotalBalls = 0;
	float TotalOvers = 0;

	
	// Row#01
	printf("\n");

	// Row#02
	PrintChars(SPACE_CHAR, 11);
	printf("%s", Team[TeamCount].TeamName);
	
	// Row#03
	printf("\n");
	PrintChars('=', 76);
	printf("\n");
		
	// Row#04
	printf("\n");

	// Row#05 to Row#15
	for (int Count = 0; Count <= 10; Count++)
	{
		PrintChars(SPACE_CHAR, 11);
		strcpy(temp, Team[TeamCount].Batsman[Count].Name);
		TrimName(temp);
		printf("%-10s", temp);
		PrintChars(SPACE_CHAR, 5);
		
		switch (Team[TeamCount].Batsman[Count].OutInfo.OutType)
		{
			// Bowled.
			case 'B': strcpy(TmpStr, "");
			          strcat(TmpStr, "b:");
			       	  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByBowler);
			       	  TrimName(temp);
			       	  strcat(TmpStr, temp);
			       	  printf("%-26s", TmpStr);
			 	  break;
			 	 
			// Catch.
			case 'C': strcpy(TmpStr, "");
				  strcat(TmpStr, "c:");
				  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByFielder);
				  TrimName(temp);
				  strcat(TmpStr, temp);
				  strcat(TmpStr, "  ");
				  strcat(TmpStr, "b:");
			       	  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByBowler);
			       	  TrimName(temp);
			       	  strcat(TmpStr, temp);
			       	  printf("%-26s", TmpStr);
			 	  break;
			 	 
			// Hit Wicket.
			case 'H': strcpy(TmpStr, "");
			          strcat(TmpStr, "b:");
			       	  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByBowler);
			       	  TrimName(temp);
			       	  strcat(TmpStr, temp);
			       	  printf("%-26s", TmpStr);
			 	  break;
			
			// LBW.
			case 'L': strcpy(TmpStr, "");
			          strcat(TmpStr, "b:");
			       	  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByBowler);
			       	  TrimName(temp);
			       	  strcat(TmpStr, temp);
			       	  printf("%-26s", TmpStr);
			 	  break;
			 	 
			// Not Out.
			case 'N': strcpy(TmpStr, "");
			       	  printf("%-26s", TmpStr);
			       	  break;
			 	 
			// Runout
			case 'R': strcpy(TmpStr, "");
			          strcat(TmpStr, "(Runout)");
			       	  TrimName(TmpStr);
			       	  printf("%-26s", TmpStr);
			 	  break;
			 	
			// Stumped. 
			case 'S': strcpy(TmpStr, "");
				  strcat(TmpStr, "(Stumped)");
				  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByFielder);
				  TrimName(temp);
				  strcat(TmpStr, temp);
				  strcat(TmpStr, "  ");
				  strcat(TmpStr, "b:");
			       	  strcpy(temp, Team[TeamCount].Batsman[Count].OutInfo.OutByBowler);
			       	  TrimName(temp);
			       	  strcat(TmpStr, temp);
			       	  printf("%-26s", TmpStr);
			 	  break;
			 	 
		}
		
		PrintChars(SPACE_CHAR, 5);
		printf("%3d", Team[TeamCount].Batsman[Count].Runs);
		printf("(%3d)", Team[TeamCount].Batsman[Count].Balls);
		PrintChars(SPACE_CHAR, 11);
		printf("\n");
	}

	// Row#16
	printf("\n");

	// Row#17
	PrintChars('=', 76);
	printf("\n");

	// Row#18
	PrintChars(SPACE_CHAR, 11);

	for (int Cnt = 0; Cnt <= 10; Cnt++)
	{
		TotalOvers += Team[!TeamCount].Bowler[Cnt].Overs;
	}
	
	printf("Overs %4.1f", TotalOvers);
	PrintChars(SPACE_CHAR, 5);
	
	
	for (int Cnt = 0; Cnt <= 10; Cnt++)
	{
		Extras += Team[!TeamCount].Bowler[Cnt].WD;
		Extras += Team[!TeamCount].Bowler[Cnt].NB;
	}
	
	printf("Extras %2d", Extras);
	PrintChars(SPACE_CHAR, 13);


	for (int Cnt = 0; Cnt <= 10; Cnt++)
	{
		TotalRuns += Team[TeamCount].Batsman[Cnt].Runs;
		TotalBalls += Team[TeamCount].Batsman[Cnt].Balls;
	}
	
	TotalRuns += Extras;
	
	printf("Total %3d for %3d", TotalRuns, TotalBalls);
	printf("\n");
}

// Function to display the scorecard of the Bowler.
void DispScorecardBowler(int TeamCount)
{
	char TmpStr[100];
	char temp[400];

	
	// Row#01
	printf("\n");

	// Row#02
	PrintChars(SPACE_CHAR, 11);
	printf("%s", Team[TeamCount].TeamName);
	
	// Row#03
	printf("\n");
	PrintChars('=', 76);
	printf("\n");
		
	// Row#04
	PrintChars(SPACE_CHAR, 34);
	printf("Overs");
	PrintChars(SPACE_CHAR, 2);
	printf("Mdns");
	PrintChars(SPACE_CHAR, 2);
	printf("Runs");
	PrintChars(SPACE_CHAR, 2);
	printf("Wkts");
	PrintChars(SPACE_CHAR, 2);
	printf("Wd");
	PrintChars(SPACE_CHAR, 2);
	printf("Nb");
	printf("\n");

	// Row#05 to Row#15
	for (int Count = 0; Count <= 10; Count++)
	{
		PrintChars(SPACE_CHAR, 11);
		strcpy(temp, Team[TeamCount].Bowler[Count].Name);
		TrimName(temp);
		printf("%-10s", temp);
		PrintChars(SPACE_CHAR, 13);
		
		strcpy(TmpStr, "");
		sprintf(temp, "%5.1f", Team[TeamCount].Bowler[Count].Overs);	
		temp[5] = '\0';
		strcat(TmpStr, temp);
		strcat(TmpStr, "  ");
		
		sprintf(temp, "%4d", Team[TeamCount].Bowler[Count].Mdns);	
		temp[4] = '\0';
		strcat(TmpStr, temp);
		strcat(TmpStr, "  ");
				
		sprintf(temp, "%4d", Team[TeamCount].Bowler[Count].Runs);	
		temp[4] = '\0';
		strcat(TmpStr, temp);
		strcat(TmpStr, "  ");
					          
		sprintf(temp, "%4d", Team[TeamCount].Bowler[Count].Wickets);	
		temp[4] = '\0';
		strcat(TmpStr, temp);
		strcat(TmpStr, "  ");

		sprintf(temp, "%2d", Team[TeamCount].Bowler[Count].WD);	
		temp[2] = '\0';
		strcat(TmpStr, temp);
		strcat(TmpStr, "  ");

		sprintf(temp, "%2d", Team[TeamCount].Bowler[Count].NB);	
		temp[2] = '\0';
		strcat(TmpStr, temp);
		strcat(TmpStr, "  ");
		
		printf("%23s", TmpStr);
		printf("\n");
	}
	
	// Row#16
	printf("\n");

	// Row#17
	PrintChars('=', 76);
	printf("\n");	
	
	// Row#18
	printf("\n");
	
	// Row#19
	printf("\n");
}
