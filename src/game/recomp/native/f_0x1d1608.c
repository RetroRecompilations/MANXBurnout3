#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1608
 * Original: 0x001D1608 - 0x001D161A (18 bytes, 5 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1608(void)
{

loc_001D1608:
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_001D1572(); /* call 0x001D1572 */

loc_001D1617:
    esp += 12; return; /* ret 8 */

}
