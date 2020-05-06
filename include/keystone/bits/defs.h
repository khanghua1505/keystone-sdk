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

#ifndef _KEYSTONE_GLIBC_DEFS_H_
#define _KEYSTONE_GLIBC_DEFS_H_

#ifdef __SIZEOF_POINTER__
# define SIZEOF_POINTER __SIZEOF_POINTER__
#endif

#ifdef __SIZEOF_LONG_LONG__
# define SIZEOF_LONG_LONG __SIZEOF_LONG_LONG__
#endif

#ifdef __SIZEOF_LONG__
# define SIZEOF_LONG __SIZEOF_LONG__
#endif

#ifdef __SIZEOF_INT__
# define SIZEOF_INT __SIZEOF_INT__
#endif

#ifdef __GNUC__
# define _GCC_NO_INLINE_  __attribute__ ((noinline))
#else
# define _GCC_NO_INLINE_
#endif

#ifdef __GNUC__
# define  _Long  long
# define  _ULong unsigned long
#else
# define _Long  long long
# define _ULong unsigned long long
#endif  // __GNUC__



#endif  // _KEYSTONE_GLIBC_DEFS_H_
