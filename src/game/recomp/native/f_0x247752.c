#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00247752
 * Original: 0x00247752 - 0x00247782 (48 bytes, 17 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247752(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247752:
    eax = MEM32(esp + 4);
    if (CMP_BE(eax, 0xFF)) goto loc_00247760; /* jbe: below or equal (unsigned <=) */

loc_0024775D:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00247760:
    if (CMP_LE(MEM32(0x3C64F0), 1)) goto loc_00247774; /* jle: less or equal (signed <=) */

loc_00247769:
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00248569(); /* call 0x00248569 */

loc_00247771:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00247774:
    ecx = MEM32(0x3C64E8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    esp += 4; return; /* ret */

}
