#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242A20
 * Original: 0x00242A20 - 0x00242A47 (39 bytes, 15 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242A20:
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00242A43; /* jle: less or equal (signed <=) */

loc_00242A2D:
    ecx = MEM32(ecx + 0x14);
    ecx = ecx + 0x20;

loc_00242A33:
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_00242A46; /* je: equal / zero */

loc_00242A38:
    eax++;
    ecx = ecx + 0x8C;
    if (CMP_L(eax, edx)) goto loc_00242A33; /* jl: less (signed <) */

loc_00242A43:
    eax = eax | 0xFFFFFFFFu;

loc_00242A46:
    esp += 4; return; /* ret */

}
