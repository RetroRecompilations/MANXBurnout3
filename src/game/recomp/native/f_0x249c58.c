#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249C58
 * Original: 0x00249C58 - 0x00249C6E (22 bytes, 7 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249C58(void)
{
    int _flags = 0; /* fallback flag var */

loc_00249C58:
    eax = MEM32(esp + 8);
    eax = eax & 0x7FF00000;
    if (CMP_EQ(eax, 0x7FF00000)) goto loc_00249C69; /* je: equal / zero */

loc_00249C68:
    esp += 4; return; /* ret */

loc_00249C69:
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}
