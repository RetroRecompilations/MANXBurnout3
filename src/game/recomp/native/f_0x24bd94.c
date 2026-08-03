#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BD94
 * Original: 0x0024BD94 - 0x0024BDDD (73 bytes, 22 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BD94(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024BD94:
    eax = MEM32(esp + 4);
    if (CMP_AE(eax, MEM32(0x76B800))) goto loc_0024BDC6; /* jae: above or equal (unsigned >=) */

loc_0024BDA0:
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    if (TEST_Z(MEM8(eax + 4), 1)) goto loc_0024BDC6; /* je: equal / zero */

loc_0024BDBB:
    if (CMP_EQ(MEM32(eax), 0xFFFFFFFFu)) goto loc_0024BDC6; /* je: equal / zero */

loc_0024BDC0:
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0024BDC6:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024BDCB:
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

loc_0024BDD6:
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}
