#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153890
 * Original: 0x00153890 - 0x001538C7 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153890:
    SET_LO8(eax, MEM8(ecx + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001538A3; /* je: equal / zero */

loc_0015389A:
    SET_LO8(eax, MEM8(ecx + 0x564));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

loc_001538A3:
    eax = MEM32(ecx + 0xC8);
    if (CMP_EQ(eax, 4)) goto loc_001538C4; /* je: equal / zero */

loc_001538AE:
    if (CMP_EQ(eax, 2)) goto loc_001538C4; /* je: equal / zero */

loc_001538B3:
    if (CMP_NE(eax, 1)) goto loc_001538C1; /* jne: not equal / not zero */

loc_001538B8:
    if (TEST_NZ(MEM8(ecx + 0xCC), 0x20)) goto loc_001538C4; /* jne: not equal / not zero */

loc_001538C1:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_001538C4:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
