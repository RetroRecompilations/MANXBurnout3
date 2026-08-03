#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021BE0
 * Original: 0x00021BE0 - 0x00021C0D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021BE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021BE0:
    ecx = MEM32(eax);
    /* cmp MEM8(ecx), 0 - flags set for next jcc */
    edx = 0x4A1C80;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_00021C03; /* jne: not equal / not zero */

loc_00021BEC:
    eax = MEM32(0x4A1C7C);
    edx = edx - eax;

loc_00021BF3:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00021BF3; /* jne: not equal / not zero */

loc_00021BFD:
    eax = 0x4A1C80;
    esp += 4; return; /* ret */

loc_00021C03:
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    MEM8(edx) = LO8(eax);
    edx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00021C03; /* jne: not equal / not zero */

}
