#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9410
 * Original: 0x001F9410 - 0x001F9452 (66 bytes, 22 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9410(void)
{

loc_001F9410:
    eax = MEM32(0x76411C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F941D:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + 0x154;
    PUSH32(esp, ecx);
    eax = eax + 0x15C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00201F20(); /* call 0x00201F20 */

loc_001F943E:
    edx = MEM32(0x76411C);
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F9451:
    esp += 4; return; /* ret */

}
