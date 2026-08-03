#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C9A0
 * Original: 0x0021C9A0 - 0x0021C9D0 (48 bytes, 15 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C9A0(void)
{

loc_0021C9A0:
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B1444);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021C9B1:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DF0(); /* call 0x00213DF0 */

loc_0021C9BA:
    ecx = eax;
    eax = eax & 0x100000;
    eax = eax << 4;
    ecx = ecx & 0xC0000;
    esp = esp + 8;
    eax = eax | ecx;
    esp += 4; return; /* ret */

}
