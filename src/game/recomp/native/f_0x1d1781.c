#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1781
 * Original: 0x001D1781 - 0x001D1793 (18 bytes, 4 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1781(void)
{

loc_001D1781:
    ecx = MEM32(esp + 4);
    eax = MEM32(0x754DA4);
    MEM32(0x754DA4) = ecx;
    esp += 8; return; /* ret 4 */

}
