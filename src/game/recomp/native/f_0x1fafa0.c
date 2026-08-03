#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FAFA0
 * Original: 0x001FAFA0 - 0x001FAFC7 (39 bytes, 14 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFA0(void)
{

loc_001FAFA0:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41B7B8);
    PUSH32(esp, 0); sub_001F6050(); /* call 0x001F6050 */

loc_001FAFC3:
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
