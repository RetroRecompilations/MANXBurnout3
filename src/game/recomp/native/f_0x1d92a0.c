#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D92A0
 * Original: 0x001D92A0 - 0x001D9354 (180 bytes, 42 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D92A0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001D92A0:
    xmm3.f[0] = MEMF(esp + 8); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    eax = eax - 2;
    MEMF(esi + 0x80) = xmm3.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x7592B8); /* movss */
    xmm1.f[0] = MEMF(0x7592BC); /* movss */
    if ((eax == 0)) goto loc_001D92E7; /* je: equal / zero */

loc_001D92CB:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] / MEMF(esi + 0x84); /* divss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    goto loc_001D92EF;

loc_001D92E7:
    xmm4.f[0] = MEMF(esi + 0x84); /* movss */

loc_001D92EF:
    eax = MEM32(esi + 4);
    /* test eax, eax - flags set for next jcc */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B188C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy(xmm5.b, xmm4.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm5.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(esi + 0x8C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001D9350; /* je: equal / zero */

loc_001D9347:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD220(); /* call 0x001DD220 */

loc_001D934D:
    esp = esp + 4;

loc_001D9350:
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
