/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* include pywal colorscheme */
/* #include "/home/sz/.cache/wal/colors-wal-dmenu.h" */

static int topbar = 1;                        /* -b  option; if 0, dmenu appears at bottom */
static const unsigned int alpha = 0xe0;       /* Amount of opacity. 0xff is opaque */
static int centered = 0;                      /* -c option; centers dmenu on screen */
static int min_width = 500;                   /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
static int draw_input = 1;                    /* -noi option; if 0, the input will not be drawn by default */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"CaskaydiaCove Nerd Font:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#a6adc8", "#11111b" }, /* Subtext 0, Crust    */
	[SchemeSel] = { "#cdd6f4", "#1e1e2e" },  /* Text,      Base     */
	[SchemeOut] = { "#6c7086", "#b4befe" },  /* Overlay 0, Lavender */
};

static const unsigned int alphas[SchemeLast][2] = {
       [SchemeNorm] = { OPAQUE, alpha },
       [SchemeSel] = { OPAQUE, alpha },
       [SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
