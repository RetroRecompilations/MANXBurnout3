#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C270
 * Original: 0x0021C270 - 0x0021C298 (40 bytes, 12 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C270(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C270:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0021C282; /* jle: less or equal (signed <=) */

loc_0021C27B:
    MEM32(eax + 8) = 1;

loc_0021C282:
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}
