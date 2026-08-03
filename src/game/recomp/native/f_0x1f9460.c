#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9460
 * Original: 0x001F9460 - 0x001F949B (59 bytes, 19 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9460(void)
{

loc_001F9460:
    eax = MEM32(0x76411C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F946D:
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = eax + 0x154;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + 0x15C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00201F00(); /* call 0x00201F00 */

loc_001F9488:
    eax = MEM32(0x76411C);
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F949A:
    esp += 4; return; /* ret */

}
