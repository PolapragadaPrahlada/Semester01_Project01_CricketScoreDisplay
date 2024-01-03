#define MAX_LEN_NAME 20
#define SPACE_CHAR ' '
#define TRIM_SIZE 10

struct Cricket
{
	char TeamName[20];
	unsigned int Extras;

	// Structure for the Batsman.
	struct BattingStruct
	{
		char Name[MAX_LEN_NAME];
		unsigned int Runs;
		unsigned int Balls;
		unsigned int Fours;
		unsigned int Sixes;
		
		struct Out
		{
			char OutType;
			char OutByBowler[MAX_LEN_NAME];
			char OutByFielder[MAX_LEN_NAME];
		} OutInfo;	
	} Batsman[11];	
	
	// Structure for the Bowler.
	struct BowlingStruct
	{
		char Name[MAX_LEN_NAME];
		float Overs;
		unsigned int Mdns;
		unsigned int Runs;
		unsigned int Wickets;
		unsigned int WD;
		unsigned int NB;
	} Bowler[11];	
};


// Function to initialize the data structures.
void InitData(void);

// Function to print number of space characters.
void PrintChars(char, int);

// Function to trim the string to a specific length i.e. TRIM_SIZE.
void TrimName(char *);

// Function to display the scorecard of the Batsman.
void DispScorecardBatsman(int);

// Function to display the scorecard of the Bowler.
void DispScorecardBowler(int);


