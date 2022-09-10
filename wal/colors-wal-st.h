const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#11100d", /* black   */
  [1] = "#7B8670", /* red     */
  [2] = "#FED421", /* green   */
  [3] = "#AFA558", /* yellow  */
  [4] = "#3173A9", /* blue    */
  [5] = "#67A7C9", /* magenta */
  [6] = "#909DA1", /* cyan    */
  [7] = "#cadeec", /* white   */

  /* 8 bright colors */
  [8]  = "#8d9ba5",  /* black   */
  [9]  = "#7B8670",  /* red     */
  [10] = "#FED421", /* green   */
  [11] = "#AFA558", /* yellow  */
  [12] = "#3173A9", /* blue    */
  [13] = "#67A7C9", /* magenta */
  [14] = "#909DA1", /* cyan    */
  [15] = "#cadeec", /* white   */

  /* special colors */
  [256] = "#11100d", /* background */
  [257] = "#cadeec", /* foreground */
  [258] = "#cadeec",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
