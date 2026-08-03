#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00223350
 * Original: 0x00223350 - 0x00223386 (54 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223350(void)
{

loc_00223350:
    eax = esp + -84;
    esp = esp - 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_0022335D:
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_00223371:
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_00223382:
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}
