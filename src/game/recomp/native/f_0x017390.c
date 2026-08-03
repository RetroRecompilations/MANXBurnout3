#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017390
 * Original: 0x00017390 - 0x000173A7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017390(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017390:
    eax = MEM32(eax + 0x2E1D0);
    if (TEST_Z(eax, eax)) goto loc_000173A4; /* je: equal / zero */

loc_0001739A:
    if (CMP_NE(eax, 0x4D4798)) goto loc_000173A4; /* jne: not equal / not zero */

loc_000173A1:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000173A4:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
