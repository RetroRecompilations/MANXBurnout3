#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D7D50
 * Original: 0x001D7D50 - 0x001D7D6F (31 bytes, 11 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D50(void)
{

loc_001D7D50:
    PUSH32(esp, 0); sub_001D7040(); /* call 0x001D7040 */

loc_001D7D55:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034FD80(); /* call 0x0034FD80 */

loc_001D7D6E:
    esp += 4; return; /* ret */

}
