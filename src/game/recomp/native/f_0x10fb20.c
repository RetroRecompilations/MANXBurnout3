#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FB20
 * Original: 0x0010FB20 - 0x0010FB43 (35 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010FB20:
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0010FB3D; /* je: equal / zero */

loc_0010FB26:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010FB3D; /* je: equal / zero */

loc_0010FB2A:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0010FB3D; /* je: equal / zero */

loc_0010FB2E:
    if (CMP_EQ(LO8(eax), 4)) goto loc_0010FB3D; /* je: equal / zero */

loc_0010FB32:
    if (CMP_EQ(LO8(eax), 6)) goto loc_0010FB3D; /* je: equal / zero */

loc_0010FB36:
    if (CMP_EQ(LO8(eax), 7)) goto loc_0010FB3D; /* je: equal / zero */

loc_0010FB3A:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0010FB3D:
    eax = 1;
    esp += 4; return; /* ret */

}
