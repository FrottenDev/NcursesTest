/****************************************************************************
 * Copyright 2020,2022 Thomas E. Dickey                                     *
 * Copyright 2014 Free Software Foundation, Inc.                            *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *   Author:  Nicolas Boulenguez, 2011                                      *
 ****************************************************************************/

#include "c_threaded_variables.h"

#define WRAP(type, name)        \
  type                          \
  name ## _as_function (void)   \
  {                             \
    return name;                \
  }
/* *INDENT-OFF* */
WRAP(WINDOW *, stdscr)
WRAP(WINDOW *, curscr)

WRAP(int, LINES)
WRAP(int, COLS)
WRAP(int, TABSIZE)
WRAP(int, COLORS)
WRAP(int, COLOR_PAIRS)

chtype
acs_map_as_function(char inx)
{
  return acs_map[(unsigned char) inx];
}
/* *INDENT-ON* */
