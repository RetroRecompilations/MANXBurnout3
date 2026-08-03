#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103F80
 * Original: 0x00103F80 - 0x00103FAB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00103F80:
    edx = MEM32(0x4A1D84);
    if (CMP_NE(LO16(edx), 0xFFFF)) goto loc_00103F8F; /* jne: not equal / not zero */

loc_00103F8D:
    edx = 0; /* xor self */

loc_00103F8F:
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), 2)) goto loc_00103F9B; /* je: equal / zero */

loc_00103F96:
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    MEM8(eax) = LO8(ecx);

loc_00103F9B:
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 3) = 8;
    MEM16(eax + 0xC) = LO16(edx);
    MEM8(eax) = LO8(ecx);
    esp += 4; return; /* ret */

}
