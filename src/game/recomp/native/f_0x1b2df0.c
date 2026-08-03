#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2DF0
 * Original: 0x001B2DF0 - 0x001B2E14 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B2DF0:
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax) = LO16(edx);
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_001B2E13; /* je: equal / zero */

loc_001B2DFC:
    /* nop */

loc_001B2E00:
    SET_LO16(edx, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    MEM16(eax) = LO16(edx);
    if (CMP_NE(MEM16(ecx), 0)) goto loc_001B2E00; /* jne: not equal / not zero */

loc_001B2E13:
    esp += 4; return; /* ret */

}
