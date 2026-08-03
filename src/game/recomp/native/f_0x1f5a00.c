#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5A00
 * Original: 0x001F5A00 - 0x001F5A0F (15 bytes, 4 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5A00(void)
{

loc_001F5A00:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    eax = ecx * 4 + 8;
    esp += 4; return; /* ret */

}
