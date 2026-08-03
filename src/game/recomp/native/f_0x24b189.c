#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B189
 * Original: 0x0024B189 - 0x0024B1B3 (42 bytes, 13 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B189(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B189:
    eax = MEM32(esp + 4);
    if (CMP_B(eax, MEM32(0x76B800))) goto loc_0024B198; /* jb: below (unsigned <) */

loc_0024B195:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0024B198:
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 4);
    eax = eax & 0x40;
    esp += 4; return; /* ret */

}
