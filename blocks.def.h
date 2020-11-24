//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",	    "lockerstatus",	2,	69},
	{" 🎶 ",    "~/.local/src/dwm/dwmblocks/scripts/volume",	1,	19},
	{"  ",     "xbacklight | sed 's/\\..*//'",				1,	11},
	{"  ",	    "LANG=de_DE date '+%a %d.%m.'",	                        60,	0},
	{"  ",	    "date '+%H:%M'",	                                15,	0},
	{"",        "echo ';'",				1,	11},
	{"",	    "wetterstatus",	60,	0},
	{"",	    " orphans",	60,	0},
	{"",	    "dbtitle dwb",	1,	19},
	{"",	    " ~/.local/src/dwm/dwmblocks/scripts/wifi",	    5,	21},
	{"",	    "~/.local/src/dwm/dwmblocks/scripts/ssid",	    5,	20},
	{"",	    "vpnconnected",	2,	69},
	/* {"   ",	    "~/.local/src/dwm/dwmblocks/scripts/rootspace",	60,	18}, */
	/* {" ",	    "~/.local/src/dwm/dwmblocks/scripts/homespace",	60,	17}, */
	{"",	    "mousebattery",	30,	16},
	{"  ",	    "~/.local/src/dwm/dwmblocks/scripts/battery",	30,	16},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
