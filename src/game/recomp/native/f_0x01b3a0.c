#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001B3A0
 * Original: 0x0001B3A0 - 0x0001B49E (254 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B3A0(void)
{
    recomp_xmm_t xmm0;

loc_0001B3A0:
    PUSH32(esp, 0); sub_0001B2B0(); /* call 0x0001B2B0 */

loc_0001B3A5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx + 0x16C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x174) = xmm0.f[0]; /* movss */
    eax = eax | 0xFFFFFFFFu;
    MEM32(edx + 0x164) = eax;
    MEM32(edx + 0x168) = eax;
    MEM32(edx + 0x170) = eax;
    eax = 0; /* xor self */
    MEM32(edx + 0x178) = eax;
    MEM32(edx + 0x17C) = eax;
    MEM32(edx + 0x1F4) = eax;
    MEM32(edx + 0x180) = eax;
    MEM32(edx + 0x184) = eax;
    MEM32(edx + 0x188) = eax;
    MEM32(edx + 0x18C) = eax;
    MEM32(edx + 0x190) = eax;
    MEM32(edx + 0x194) = eax;
    MEM32(edx + 0x198) = eax;
    MEM32(edx + 0x19C) = eax;
    MEM32(edx + 0x1A0) = eax;
    MEM32(edx + 0x1A4) = eax;
    MEM32(edx + 0x1B8) = eax;
    MEM32(edx + 0x1CC) = eax;
    MEM32(edx + 0x1E0) = eax;
    MEM32(edx + 0x1A8) = eax;
    MEM32(edx + 0x1BC) = eax;
    MEM32(edx + 0x1D0) = eax;
    MEM32(edx + 0x1E4) = eax;
    MEM32(edx + 0x1AC) = eax;
    MEM32(edx + 0x1C0) = eax;
    MEM32(edx + 0x1D4) = eax;
    MEM32(edx + 0x1E8) = eax;
    MEM32(edx + 0x1B0) = eax;
    MEM32(edx + 0x1C4) = eax;
    MEM32(edx + 0x1D8) = eax;
    MEM32(edx + 0x1EC) = eax;
    MEM32(edx + 0x1F8) = eax;
    MEM32(edx + 0x1B4) = eax;
    MEM32(edx + 0x1C8) = eax;
    MEM32(edx + 0x1DC) = eax;
    MEM32(edx + 0x1F0) = eax;
    MEM32(edx + 0x274) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
