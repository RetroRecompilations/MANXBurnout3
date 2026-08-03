#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D7D10
 * Original: 0x001D7D10 - 0x001D7D2A (26 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D10(void)
{

loc_001D7D10:
    PUSH32(esp, 0); sub_001D7040(); /* call 0x001D7040 */

loc_001D7D15:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00350000(); /* call 0x00350000 */

loc_001D7D29:
    esp += 4; return; /* ret */

}
