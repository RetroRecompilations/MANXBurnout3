#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6AD0
 * Original: 0x001F6AD0 - 0x001F6AE7 (23 bytes, 8 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6AD0(void)
{

loc_001F6AD0:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1F6AA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F64F0(); /* call 0x001F64F0 */

loc_001F6AE3:
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
