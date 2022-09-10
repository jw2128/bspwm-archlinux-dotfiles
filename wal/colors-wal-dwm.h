static const char norm_fg[] = "#cadeec";
static const char norm_bg[] = "#11100d";
static const char norm_border[] = "#8d9ba5";

static const char sel_fg[] = "#cadeec";
static const char sel_bg[] = "#FED421";
static const char sel_border[] = "#cadeec";

static const char urg_fg[] = "#cadeec";
static const char urg_bg[] = "#7B8670";
static const char urg_border[] = "#7B8670";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
