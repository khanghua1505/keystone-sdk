/* Copyright (c) 2017-2018, The Regents of the University of California (Regents).
 * All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Regents nor the
 *    names of its contributors may be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
 * SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
 * HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

#ifndef _KEYSTONE_GLIBC_STDINT_H_
#define _KEYSTONE_GLIBC_STDINT_H_

#if defined(__GNUC__)

typedef long ssize_t;
typedef unsigned long size_t;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long int64t_t;
typedef unsigned long uint64_t;
typedef unsigned long uintptr_t;
typedef long ptrdiff_t;
typedef long time_t;
typedef long suseconds_t;

#define SCHAR_MIN   (-128)
#define SCHAR_MAX   (127)
#define UCHAR_MAX   (255)
#define CHAR_MIN    (-128)
#define CHAR_MAX    (127)
#define CHAR_BIT    (8)

#define SHORT_MIN   (-1 - 0x7fff)
#define SHORT_MAX   (0x7fff)
#define USHORT_MAX  (0xffff)

#define INT_MIN     (-1 - 0x7fffffff)
#define INT_MAX     (0x7fffffff)
#define UINT_MAX    (0xffffffffU)

#define LONG_MAX    (0x7fffffffffffffffL)
#define LONG_MIN    (-1 - LONG_MAX)
#define ULONG_MAX   (2UL * OE_LONG_MAX + 1)

#ifndef __cplusplus
typedef __WCHAR_TYPE__ wchar_t;
#endif  // __cplusplus

#else
#error "currently, only support GNU C Compiler"
#endif  // defined(__GNUC__)

#endif  // _KEYSTONE_GLIBC_STRING_H_
