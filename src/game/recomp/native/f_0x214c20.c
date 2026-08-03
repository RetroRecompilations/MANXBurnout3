#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214C20
 * Original: 0x00214C20 - 0x00214C42 (34 bytes, 10 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C20(void)
{

loc_00214C20:
    eax = MEM32(esp + 4);
    MEM8(esp + 7) = LO8(eax);
    eax = eax >> 8;
    MEM8(esp + 6) = LO8(eax);
    eax = eax >> 8;
    MEM8(esp + 5) = LO8(eax);
    eax = eax >> 8;
    MEM8(esp + 4) = LO8(eax);
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}
