#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0950
 * Original: 0x001E0950 - 0x001E096D (29 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0950(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E0950:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_001E096C; /* je: equal / zero */

loc_001E095B:
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;

loc_001E096C:
    esp += 4; return; /* ret */

}
