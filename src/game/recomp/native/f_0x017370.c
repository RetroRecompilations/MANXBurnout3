#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017370
 * Original: 0x00017370 - 0x00017390 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017370(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017370:
    eax = MEM32(ecx + 0x2E1D0);
    if (TEST_Z(eax, eax)) goto loc_0001738D; /* je: equal / zero */

loc_0001737A:
    edx = MEM32(eax + 0x1BC);
    ecx = ecx + 0x2E070;
    if (CMP_NE(edx, ecx)) goto loc_0001738D; /* jne: not equal / not zero */

loc_0001738A:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0001738D:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
