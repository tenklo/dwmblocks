//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",	    "lockerstatus",	2,	69},
	{" 🎶 ",    "volume",	1,	19},
	{"  ",     "xbacklight | sed 's/\\..*//'",				1,	11},
	{"  ",	    "battery",	30,	16},
	{"",        "echo ';'",				1,	11},
	{"",	    "wetterstatus",	60,	0},
	{"",	    "orphans",	60,	0},
	{"",	    "dbtitle dwb",	1,	19},
	{"",	    "wifibar",	    5,	21},
	{"",	    "ssid",	    5,	20},
	{"",	    "vpnconnected",	2,	69},
	/* {"   ",	    "~/.local/src/dwmblocks/scripts/rootspace",	60,	18}, */
	/* {" ",	    "~/.local/src/dwmblocks/scripts/homespace",	60,	17}, */
	{"",	    "mousebattery",	30,	16},
	{"  ",	    "LANG=de_DE date '+%a %d.%m.'",	                        60,	0},
	{"  ",	    "date '+%H:%M'",	                                15,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
