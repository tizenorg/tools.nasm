/* ----------------------------------------------------------------------- *
 *   
 *   Copyright 1996-2009 The NASM Authors - All Rights Reserved
 *   See the file AUTHORS included with the NASM distribution for
 *   the specific copyright holders.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following
 *   conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *     
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *     CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *     INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *     MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *     CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *     SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *     NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *     OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *     EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------------------------------------------------------------- */

/*
 * outform.c	manages a list of output formats, and associates
 *		them with their relevant drivers. Also has a
 *		routine to find the correct driver given a name
 *		for it
 */

#include "compiler.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#define BUILD_DRIVERS_ARRAY
#include "output/outform.h"

struct ofmt *ofmt_find(char *name)
{                               /* find driver */
    struct ofmt **ofp, *of;

    for (ofp = drivers; (of = *ofp); ofp++) {
        if (!nasm_stricmp(name, of->shortname))
            return of;
    }
    return NULL;
}

struct dfmt *dfmt_find(struct ofmt *ofmt, char *name)
{                               /* find driver */
    struct dfmt **dfp, *df;

    for (dfp = ofmt->debug_formats; (df = *dfp); dfp++) {
        if (!nasm_stricmp(name, df->shortname))
            return df;
    }
    return NULL;
}

void ofmt_list(struct ofmt *deffmt, FILE * fp)
{
    struct ofmt **ofp, *of;

    for (ofp = drivers; (of = *ofp); ofp++) {
        fprintf(fp, "  %c %-10s%s\n",
                of == deffmt ? '*' : ' ',
                of->shortname, of->fullname);
    }
}

void dfmt_list(struct ofmt *ofmt, FILE *fp)
{
    struct dfmt **dfp, *df;

    for (dfp = ofmt->debug_formats; (df = *dfp); dfp++) {
        fprintf(fp, "  %c %-10s%s\n",
                df == ofmt->current_dfmt ? '*' : ' ',
                df->shortname, df->fullname);
    }
}
