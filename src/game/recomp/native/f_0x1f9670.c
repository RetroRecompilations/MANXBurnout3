#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9670
 * Original: 0x001F9670 - 0x001F968F (31 bytes, 10 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9670(void)
{

loc_001F9670:
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = eax + 0x154;
    PUSH32(esp, ecx);
    eax = eax + 0xEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00200CD0(); /* call 0x00200CD0 */

loc_001F968B:
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
