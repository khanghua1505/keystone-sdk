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

#include <keystone/glibc/stdint.h>
#include <keystone/glibc/stddef.h>
#include <keystone/glibc/string.h>

int memcmp(const void *vl, const void *vr, size_t n)
{
    if (n != 0) {
        register const unsigned char *p1 = vl, *p2 = vr;
        while (n-- > 0) {
            if (*p1 != *p2) {
                return (*p1 - *p2);
            }
            p1++; p2++;
        }
    }
    
    return 0;
}

void* memcpy(void *dest, const void *src, size_t len)
{
    char *d = dest;
    const char *s = src;
    
    while (len--)
        *d++ = *s++;
    
    return dest;
}

void* memset(void *dest, int c, size_t len)
{
    unsigned char *ptr = dest;
    while (len-- > 0)
        *ptr++ = c;
    return dest;
}

void* memmove(void *dest, const void *src, size_t len)
{
    char *d = dest;
    const char *s = src;

    if (d < s) {
        while (len--)
            *d++ = *s++;
    } else {
        const char *lasts = s + (len-1);
        char *lastd = d + (len-1);
        while (len--)
            *lastd-- = *lasts--;
    }
    
    return dest;
}

size_t strlen(const char *str)
{
    size_t len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    
    return len;
}


