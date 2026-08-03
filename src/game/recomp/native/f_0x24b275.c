#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B275
 * Original: 0x0024B275 - 0x0024B2A1 (44 bytes, 13 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B275(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B275:
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */

loc_0024B27B:
    if (CMP_EQ(ecx, MEM32(eax * 8 + 0x3C69F0))) goto loc_0024B28A; /* je: equal / zero */

loc_0024B284:
    eax++;
    if (CMP_B(eax, 0x13)) goto loc_0024B27B; /* jb: below (unsigned <) */

loc_0024B28A:
    eax = eax << 3;
    if (CMP_NE(ecx, MEM32(eax + 0x3C69F0))) goto loc_0024B2A0; /* jne: not equal / not zero */

loc_0024B295:
    PUSH32(esp, MEM32(eax + 0x3C69F4));
    PUSH32(esp, 0); sub_001D2955(); /* call 0x001D2955 */

loc_0024B2A0:
    esp += 4; return; /* ret */

}
