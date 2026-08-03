#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225550
 * Original: 0x00225550 - 0x00225577 (39 bytes, 7 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225550(void)
{

loc_00225550:
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0x67452301;
    MEM32(eax + 8) = 0xEFCDAB89u;
    MEM32(eax + 0xC) = 0x98BADCFEu;
    MEM32(eax + 0x10) = 0x10325476;
    esp += 4; return; /* ret */

}
