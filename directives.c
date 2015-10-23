/*
 * This file is generated from directives.dat
 * by directives.pl; do not edit.
 */

#include "compiler.h"
#include <string.h>
#include "nasm.h"
#include "hashtbl.h"
#include "directives.h"

const char * const directives[24] = {
    NULL,
    "absolute",
    "bits",
    "common",
    "cpu",
    "debug",
    "default",
    "extern",
    "float",
    "global",
    "list",
    "section",
    "segment",
    "warning",
    "export",
    "group",
    "import",
    "library",
    "map",
    "module",
    "org",
    "osabi",
    "safeseh",
    "uppercase"
};

enum directives find_directive(const char *token)
{
#define UNUSED 16383
    static const int16_t hash1[32] = {
        0,
        UNUSED,
        UNUSED,
        UNUSED,
        UNUSED,
        0,
        0,
        10,
        0,
        9,
        UNUSED,
        UNUSED,
        UNUSED,
        0,
        0,
        UNUSED,
        UNUSED,
        UNUSED,
        UNUSED,
        0,
        UNUSED,
        22,
        16,
        UNUSED,
        -14,
        13,
        UNUSED,
        UNUSED,
        20,
        -17,
        13,
        3,
    };
    static const int16_t hash2[32] = {
        0,
        UNUSED,
        UNUSED,
        UNUSED,
        0,
        UNUSED,
        6,
        0,
        19,
        2,
        0,
        28,
        0,
        0,
        3,
        UNUSED,
        UNUSED,
        UNUSED,
        8,
        21,
        9,
        1,
        UNUSED,
        UNUSED,
        UNUSED,
        UNUSED,
        1,
        5,
        UNUSED,
        UNUSED,
        -4,
        UNUSED,
    };
    uint32_t k1, k2;
    uint64_t crc;
    uint16_t ix;

    crc = crc64i(UINT64_C(0x076259c3e291c26c), token);
    k1 = (uint32_t)crc;
    k2 = (uint32_t)(crc >> 32);

    ix = hash1[k1 & 0x1f] + hash2[k2 & 0x1f];
    if (ix >= 23)
        return D_NONE;

    ix++;
    if (nasm_stricmp(token, directives[ix]))
        return D_NONE;

    return ix;
}
