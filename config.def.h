/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#define EMOJI_SUPPORT 0

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	                          /*     fg         bg       */
	[SchemeNorm]            = { "#FF8C00", "#000000" },
	[SchemeSel]             = { "#000000", "#FF8c00" },
	[SchemeOut]             = { "#000000", "#FF8c00" },
	[SchemeSelHighlight]    = { "#FFFFFF", "#FF8c00" },
	[SchemeNormHighlight]   = { "#FFFFFF", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
