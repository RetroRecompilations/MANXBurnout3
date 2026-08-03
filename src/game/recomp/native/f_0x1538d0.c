#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001538D0
 * Original: 0x001538D0 - 0x001538E8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001538D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001538D0:
    SET_LO8(ecx, MEM8(eax + 0x538));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001538E5; /* je: equal / zero */

loc_001538DA:
    /* cmp MEM32(eax + 0x544), 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax + 0x544), 2)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_001538E5:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
