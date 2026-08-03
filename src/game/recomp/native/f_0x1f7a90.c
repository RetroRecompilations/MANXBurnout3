#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F7A90
 * Original: 0x001F7A90 - 0x001F7AB1 (33 bytes, 12 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7A90(void)
{

loc_001F7A90:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B570);
    PUSH32(esp, 0); sub_001F6050(); /* call 0x001F6050 */

loc_001F7AAD:
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
