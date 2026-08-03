#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D192B
 * Original: 0x001D192B - 0x001D1953 (40 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D192B(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D192B:
    eax = ZX8(MEM8(0x24));
    if (CMP_AE(LO8(eax), 2)) goto loc_001D193D; /* jae: above or equal (unsigned >=) */

loc_001D1937:
    eax = MEM32(0x28);

loc_001D193D:
    eax = MEM32(0x41A7D4);
    ecx = MEM32(4);
    eax = MEM32(ecx + eax * 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}
