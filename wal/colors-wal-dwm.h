static const char norm_fg[] = "#b2bab7";
static const char norm_bg[] = "#0c0c0a";
static const char norm_border[] = "#7c8280";

static const char sel_fg[] = "#b2bab7";
static const char sel_bg[] = "#9E1210";
static const char sel_border[] = "#b2bab7";

static const char urg_fg[] = "#b2bab7";
static const char urg_bg[] = "#5E675A";
static const char urg_border[] = "#5E675A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
