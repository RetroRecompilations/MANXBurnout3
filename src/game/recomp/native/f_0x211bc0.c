#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211BC0
 * Original: 0x00211BC0 - 0x00211BE0 (32 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211BC0(void)
{

loc_00211BC0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021E5F0(); /* call 0x0021E5F0 */

loc_00211BCE:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00211800(); /* call 0x00211800 */

loc_00211BD4:
    esp = esp + 8;
    MEM32(esi + 0x3C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
