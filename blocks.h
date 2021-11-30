//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",      "newmail",  60,     0},
	{"",	    "vpnconnected",	2,	69},
  {"",      "emacsclient -e \"org-mode-line-string\" | head -n 1 | cut -d'\"' -f2 | sed 's/^\s//'",     2,      69},
	{"; ",	    "lockerstatus",	2,	69},
	{"",	    "orphans -s",	60,	0},
	{" 🎶 ",    "volume",	1,	19},
	{"",        "sbrightness",				1,	11},
	/* {"",	    "wetterstatus",	60,	0}, */
	/* {"",	    "dbtitle dwb",	1,	19}, */
	{"",	    "internetinfo",	    2,	21},
	/* {"",	    "ssid",	    5,	20}, */
	/* {"   ",	    "~/.local/src/dwmblocks/scripts/rootspace",	60,	18}, */
	/* {" ",	    "~/.local/src/dwmblocks/scripts/homespace",	60,	17}, */
	/* {"",	    "mousebattery",	30,	16}, */
	{"",	    "battery",	30,	16},
	{"  ",	    "LANG=de_DE date '+%a %d.%m.'",	                        60,	0},
	{"  ",	    "date '+%H:%M'",	                                15,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
