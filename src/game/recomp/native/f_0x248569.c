#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00248569
 * Original: 0x00248569 - 0x0024858A (33 bytes, 10 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248569(void)
{
    int _flags = 0; /* fallback flag var */

loc_00248569:
    eax = MEM32(esp + 4);
    ecx = eax + 1;
    if (CMP_A(ecx, 0x100)) goto loc_00248587; /* ja: above (unsigned >) */

loc_00248578:
    ecx = MEM32(0x3C64E8);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & MEM32(esp + 8);
    esp += 4; return; /* ret */

loc_00248587:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
