#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE1C0
 * Original: 0x001FE1C0 - 0x001FE1D9 (25 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE1C0:
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_001FE1D8; /* je: equal / zero */

loc_001FE1CD:
    /* nop */

loc_001FE1D0:
    ecx = MEM32(ecx + 4);
    eax++;
    if (CMP_NE(ecx, edx)) goto loc_001FE1D0; /* jne: not equal / not zero */

loc_001FE1D8:
    esp += 4; return; /* ret */

}
