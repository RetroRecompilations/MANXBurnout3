#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C240
 * Original: 0x0021C240 - 0x0021C261 (33 bytes, 14 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C240(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C240:
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0021C25E; /* je: equal / zero */

loc_0021C248:
    eax = MEM32(esp + 8);
    if (TEST_S(eax, eax)) goto loc_0021C25E; /* jl: less (signed <) */

loc_0021C250:
    if (CMP_GE(eax, MEM32(ecx + 0x18))) goto loc_0021C25E; /* jge: greater or equal (signed >=) */

loc_0021C255:
    ecx = MEM32(ecx + 0x40);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edx);
    esp += 4; return; /* ret */

loc_0021C25E:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
