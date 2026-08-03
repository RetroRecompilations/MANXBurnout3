#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D407C
 * Original: 0x001D407C - 0x001D4099 (29 bytes, 8 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D407C(void)
{

loc_001D407C:
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    eax = eax >> 3;
    eax = eax & 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x754D94));
    PUSH32(esp, 0); sub_001D5707(); /* call 0x001D5707 */

loc_001D4096:
    esp += 12; return; /* ret 8 */

}
