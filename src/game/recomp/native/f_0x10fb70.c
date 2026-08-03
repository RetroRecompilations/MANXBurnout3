#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FB70
 * Original: 0x0010FB70 - 0x0010FBB4 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FB70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010FB70:
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    if (CMP_NE(LO8(ecx), 3)) goto loc_0010FB8D; /* jne: not equal / not zero */

loc_0010FB79:
    ecx = MEM32(edx + 0xC);
    ecx = MEM32(ecx + 0xB0);
    if (TEST_Z(ecx, ecx)) goto loc_0010FBB3; /* je: equal / zero */

loc_0010FB86:
    eax = ecx + 0x1060;
    esp += 4; return; /* ret */

loc_0010FB8D:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0010FBAA; /* je: equal / zero */

loc_0010FB92:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0010FBAA; /* je: equal / zero */

loc_0010FB96:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0010FBAA; /* je: equal / zero */

loc_0010FB9B:
    if (CMP_EQ(LO8(ecx), 4)) goto loc_0010FBAA; /* je: equal / zero */

loc_0010FBA0:
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0010FBAA; /* je: equal / zero */

loc_0010FBA5:
    if (CMP_NE(LO8(ecx), 7)) goto loc_0010FBB3; /* jne: not equal / not zero */

loc_0010FBAA:
    edx = MEM32(edx + 0xC);
    eax = MEM32(edx + 0x208);

loc_0010FBB3:
    esp += 4; return; /* ret */

}
