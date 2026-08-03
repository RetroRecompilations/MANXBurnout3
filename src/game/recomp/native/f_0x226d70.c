#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226D70
 * Original: 0x00226D70 - 0x00226DA5 (53 bytes, 9 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226D70(void)
{

loc_00226D70:
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x67452301;
    MEM32(eax + 0xC) = 0xEFCDAB89u;
    MEM32(eax + 0x10) = 0x98BADCFEu;
    MEM32(eax + 0x14) = 0x10325476;
    MEM32(eax + 0x18) = 0xC3D2E1F0u;
    esp += 4; return; /* ret */

}
