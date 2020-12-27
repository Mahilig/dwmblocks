//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",      "dwmspotify",					1,		0},
	{"",      "sb-cpu",	            		5,		0},
	{"",      "sb-battery",            		5,	 	0},
	{"",      "sb-clock",			       60,		0},
	{"",      "sb-volume",		       		1,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
