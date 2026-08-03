#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1953
 * Original: 0x001D1953 - 0x001D1981 (46 bytes, 10 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1953(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D1953:
    eax = ZX8(MEM8(0x24));
    if (CMP_AE(LO8(eax), 2)) goto loc_001D1965; /* jae: above or equal (unsigned >=) */

loc_001D195F:
    eax = MEM32(0x28);

loc_001D1965:
    ecx = MEM32(4);
    eax = MEM32(0x41A7D4);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}
