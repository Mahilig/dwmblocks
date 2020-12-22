//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",      "dwmcpu",			       		5,		0},
	{"",      "dwmspotify",					1,		0},
	{"",      "dwmdate",			       60,		0},
	{"",      "dwmvol",			       		1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
