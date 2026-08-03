#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BD20
 * Original: 0x0020BD20 - 0x0020BD2E (14 bytes, 5 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD20(void)
{

loc_0020BD20:
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x28);
    eax = eax >> 0xB;
    eax = eax & 1;
    esp += 4; return; /* ret */

}
