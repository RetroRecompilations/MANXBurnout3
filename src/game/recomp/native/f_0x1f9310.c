#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9310
 * Original: 0x001F9310 - 0x001F9345 (53 bytes, 17 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9310(void)
{

loc_001F9310:
    eax = MEM32(0x76411C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F931D:
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    edx = edx + 0x15C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00201F80(); /* call 0x00201F80 */

loc_001F9332:
    eax = MEM32(0x76411C);
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F9344:
    esp += 4; return; /* ret */

}
