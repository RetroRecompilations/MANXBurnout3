#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002276C0
 * Original: 0x002276C0 - 0x002276E9 (41 bytes, 12 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002276C0(void)
{

loc_002276C0:
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x400);
    eax = ecx + 0x48C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = ecx + 0x404;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x488);
    PUSH32(esp, 0); sub_002271F0(); /* call 0x002271F0 */

loc_002276E5:
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
