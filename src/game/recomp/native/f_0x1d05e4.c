#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D05E4
 * Original: 0x001D05E4 - 0x001D05F8 (20 bytes, 7 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D05E4(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D05E4:
    eax = MEM32(esp + 4);
    if (CMP_G(eax, 9)) goto loc_001D05F2; /* jg: greater (signed >) */

loc_001D05ED:
    eax = eax + 0x30;
    goto loc_001D05F5;

loc_001D05F2:
    eax = eax + 0x37;

loc_001D05F5:
    esp += 8; return; /* ret 4 */

}
