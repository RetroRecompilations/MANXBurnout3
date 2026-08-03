#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D20BD
 * Original: 0x001D20BD - 0x001D20D1 (20 bytes, 6 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20BD(void)
{

loc_001D20BD:
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax) = 0x2BB5C755;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}
