#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225FB0
 * Original: 0x00225FB0 - 0x00225FC9 (25 bytes, 6 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225FB0(void)
{

loc_00225FB0:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x463C) = ecx;
    MEM32(eax + 0x4640) = edx;
    esp += 4; return; /* ret */

}
