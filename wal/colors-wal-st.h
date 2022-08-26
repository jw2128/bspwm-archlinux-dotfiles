const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c0c0a", /* black   */
  [1] = "#5E675A", /* red     */
  [2] = "#9E1210", /* green   */
  [3] = "#F11706", /* yellow  */
  [4] = "#FE6004", /* blue    */
  [5] = "#FE9E06", /* magenta */
  [6] = "#DAC22C", /* cyan    */
  [7] = "#b2bab7", /* white   */

  /* 8 bright colors */
  [8]  = "#7c8280",  /* black   */
  [9]  = "#5E675A",  /* red     */
  [10] = "#9E1210", /* green   */
  [11] = "#F11706", /* yellow  */
  [12] = "#FE6004", /* blue    */
  [13] = "#FE9E06", /* magenta */
  [14] = "#DAC22C", /* cyan    */
  [15] = "#b2bab7", /* white   */

  /* special colors */
  [256] = "#0c0c0a", /* background */
  [257] = "#b2bab7", /* foreground */
  [258] = "#b2bab7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
