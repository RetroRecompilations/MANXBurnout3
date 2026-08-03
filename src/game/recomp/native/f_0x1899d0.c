#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001899D0
 * Original: 0x001899D0 - 0x00189A82 (178 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001899D0:
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_00189A39; /* jbe: below or equal (unsigned <=) */

loc_001899E1:
    eax = 0; /* xor self */
    /* comiss xmm1.f[0], MEMF(0x3B19B8) - sets EFLAGS */
    ecx = 1;
    if ((xmm1.f[0] <= MEMF(0x3B19B8))) goto loc_00189A27; /* jbe: below or equal (unsigned <=) */

loc_001899F1:
    /* comiss xmm0.f[0], MEMF(0x3B19B4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B19B4))) goto loc_00189A04; /* jbe: below or equal (unsigned <=) */

loc_001899FA:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_00189A66;

loc_00189A04:
    /* comiss xmm0.f[0], MEMF(0x3B19B0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B19B0))) goto loc_00189A22; /* jbe: below or equal (unsigned <=) */

loc_00189A0D:
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B19AC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B19A8); /* mulss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    goto loc_00189A66;

loc_00189A22:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    goto loc_00189A66;

loc_00189A27:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B19A4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B19A0); /* mulss */
    goto loc_00189A66;

loc_00189A39:
    /* comiss xmm1.f[0], MEMF(0x3B199C) - sets EFLAGS */
    ecx = 2;
    eax = 1;
    if ((xmm1.f[0] <= MEMF(0x3B199C))) goto loc_00189A56; /* jbe: below or equal (unsigned <=) */

loc_00189A4C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_00189A66;

loc_00189A56:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1998); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1994); /* mulss */

loc_00189A66:
    eax = eax + eax * 2;
    ecx = ecx + ecx * 2;
    eax = eax * 4 + 0x3A3F80;
    ecx = ecx * 4 + 0x3A3F80;
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    g_seh_ebp = ebp; sub_00189C40(); return; /* tail jmp 0x00189C40 */

}
