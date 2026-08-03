#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018BB0
 * Original: 0x00018BB0 - 0x00018BCD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018BB0:
    eax = MEM32(ecx + 4);
    if (TEST_S(eax, eax)) goto loc_00018BBB; /* jl: less (signed <) */

loc_00018BB7:
    if (CMP_NE(eax, edx)) goto loc_00018BC0; /* jne: not equal / not zero */

loc_00018BBB:
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_00018BC3; /* je: equal / zero */

loc_00018BC0:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00018BC3:
    eax = MEM32(ecx + 0xC);
    MEM32(ecx) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}
