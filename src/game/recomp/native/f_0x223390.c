#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00223390
 * Original: 0x00223390 - 0x002233C6 (54 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223390(void)
{

loc_00223390:
    eax = esp + -92;
    esp = esp - 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226D70(); /* call 0x00226D70 */

loc_0022339D:
    ecx = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226DB0(); /* call 0x00226DB0 */

loc_002233B1:
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226E70(); /* call 0x00226E70 */

loc_002233C2:
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}
