#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BDDD
 * Original: 0x0024BDDD - 0x0024BE1E (65 bytes, 19 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BDDD(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024BDDD:
    eax = MEM32(esp + 4);
    if (CMP_AE(eax, MEM32(0x76B800))) goto loc_0024BE07; /* jae: above or equal (unsigned >=) */

loc_0024BDE9:
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    if (TEST_Z(MEM8(eax + 4), 1)) goto loc_0024BE07; /* je: equal / zero */

loc_0024BE04:
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0024BE07:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024BE0C:
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

loc_0024BE17:
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}
