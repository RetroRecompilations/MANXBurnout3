#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153A20
 * Original: 0x00153A20 - 0x00153A34 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153A20:
    SET_LO8(ecx, MEM8(eax + 0x538));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00153A2D; /* jne: not equal / not zero */

loc_00153A2A:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00153A2D:
    SET_LO8(eax, MEM8(eax + 0x566));
    esp += 4; return; /* ret */

}
