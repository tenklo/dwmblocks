//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"wetterstatus",	60,	0},
	{"",	"orphans",	60,	0},
	{" ",	"lockerstatus",	2,	69},
	{"",	"~/.local/src/dwm/dwmblocks/scripts/wifi",	    5,	21},
	{"",	"~/.local/src/dwm/dwmblocks/scripts/ssid",	    5,	20},
	{"",	"vpnconnected",	2,	69},
	{" 🎶 ",	"~/.local/src/dwm/dwmblocks/scripts/volume",	1,	19},
	{"  ",   "xbacklight | sed 's/\\..*//'",				1,	11},
	{"  ",	"~/.local/src/dwm/dwmblocks/scripts/rootspace",	60,	18},
	{"  ",	"~/.local/src/dwm/dwmblocks/scripts/homespace",	60,	17},
	{"  ",	"~/.local/src/dwm/dwmblocks/scripts/battery",	30,	16},
	{"",	"mousebattery",	30,	16},
	{"  ",	"LANG=de_DE.utf8 date '+%a %d.%m.'",	                        60,	0},
	{"  ",	"date '+%H:%M'",	                                60,	0},
	//{"",	"date '+%d.%m.%Y (%a) %H %M %S'",	5,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
