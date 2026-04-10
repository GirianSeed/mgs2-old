/* SPDX-License-Identifier: MIT */
/*
 * Copyright (C) 2025-2026 Jonathan Ingram
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#ifndef INCLUDED_CMDEFS_H
#define INCLUDED_CMDEFS_H

#include <stddef.h>
#include <limits.h>
#include "gcctest.h"

/* MSVC defines _countof as an extension to stdlib.h */
#ifndef _countof
#define _countof(array) (sizeof(array)/sizeof(array[0]))
#endif
/* alternate names without the leading underscore */
#define countof(array)  _countof(array)
#define COUNTOF(array)  _countof(array)

/******************************************************************************
 * Common Macro #defines
 */

#ifndef MIN
#define MIN(x, y)       (((x) < (y)) ? (x) : (y))
#endif
#ifndef MAX
#define MAX(x, y)       (((x) > (y)) ? (x) : (y))
#endif
#ifndef ABS
#define ABS(x)          (((x) < 0) ? -(x) : (x))
#endif

#ifndef SIGN
#define SIGN(x)         (((x) > 0) - ((x) < 0))
//#define SIGN(x)       (((x) < 0) ? -1 : ((x) > 0) ? 1 : 0)
//#define SIGN(x)       (((x) < 0) ? -1 : !!(x))
#endif

#ifndef CLAMP
#define CLAMP(x, min, max) \
        (((x) < (min)) ? (min) : ((x) > (max)) ? (max) : (x))
#endif
#ifndef CLAMP_MIN
#define CLAMP_MIN(x, min) (((x) < (min)) ? (min) : (x))
#endif
#ifndef CLAMP_MAX
#define CLAMP_MAX(x, max) (((x) > (max)) ? (max) : (x))
#endif

#ifndef MIN3
#define MIN3(a, b, c)   (((a) < (b)) ? (((a) < (c)) ? (a) : (c)) \
                                     : (((b) < (c)) ? (b) : (c)))
#endif
#ifndef MAX3
#define MAX3(a, b, c)   (((a) > (b)) ? (((a) > (c)) ? (a) : (c)) \
                                     : (((b) > (c)) ? (b) : (c)))
#endif

/* Macros for counting and rounding. */
#ifndef HOWMANY
#define HOWMANY(x,y)    (((x) + ((y) - 1)) / (y))
#endif
#ifndef POWEROF2
#define POWEROF2(x)     ((((x) - 1) & (x)) == 0)
#endif
/* rounds to any y */
#ifndef ROUNDUP
#define ROUNDUP(x,y)    ((((x) + ((y) - 1)) / (y)) * (y))
#endif
#ifndef ROUNDDOWN
#define ROUNDDOWN(x,y)  (((x) / (y)) * (y))
#endif
/* if y is a power of two */
#ifndef ROUNDUP2
#define ROUNDUP2(x,y)   (((x) + ((y) - 1)) & ~((y) - 1))
#endif
#ifndef ROUNDDOWN2
#define ROUNDDOWN2(x,y) ((x) & ~((y) - 1))
#endif

#endif // {{{ END OF FILE }}}
