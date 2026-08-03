#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D161A
 * Original: 0x001D161A - 0x001D1628 (14 bytes, 4 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D161A(void)
{

loc_001D161A:
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_001D15B6(); /* call 0x001D15B6 */

loc_001D1625:
    esp += 8; return; /* ret 4 */

}
