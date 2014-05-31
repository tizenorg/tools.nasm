/*
 * This	 file is generated from directives.dat
 * by directives.pl; do not edit.
 */

#ifndef NASM_DIRECTIVES_H
#define NASM_DIRECTIVES_H

enum directives {
    D_NONE,
    D_ABSOLUTE,
    D_BITS,
    D_COMMON,
    D_CPU,
    D_DEBUG,
    D_DEFAULT,
    D_EXTERN,
    D_FLOAT,
    D_GLOBAL,
    D_LIST,
    D_SECTION,
    D_SEGMENT,
    D_WARNING,
    D_EXPORT,
    D_GROUP,
    D_IMPORT,
    D_LIBRARY,
    D_MAP,
    D_MODULE,
    D_ORG,
    D_OSABI,
    D_SAFESEH,
    D_UPPERCASE
};

extern const char * const directives[24];
enum directives find_directive(const char *token);

#endif /* NASM_DIRECTIVES_H */
