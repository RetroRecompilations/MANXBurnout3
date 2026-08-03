#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012E450
 * Original: 0x0012E450 - 0x0012E4CF (127 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E450(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0012E450:
    ecx = esi;
    PUSH32(esp, 0); sub_00129770(); /* call 0x00129770 */

loc_0012E457:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012E4C9; /* jne: not equal / not zero */

loc_0012E45B:
    xmm0.f[0] = MEMF(esi + 0x154); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16A4) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(0x3B16A4))) goto loc_0012E4C9; /* jae: above or equal (unsigned >=) */

loc_0012E46C:
    eax = MEM32(esi + 0x18);
    xmm2.f[0] = MEMF(eax + 0xE8); /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    xmm3.f[0] = MEMF(eax + 0x1A8); /* movss */
    xmm1.f[0] = MEMF(0x3A55F8); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(esi + 0x148); /* movss */
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm3.f[0] > xmm2.f[0])) goto loc_0012E4C9; /* ja: above (unsigned >) */

loc_0012E4A8:
    xmm2.f[0] = MEMF(eax + 0xE8); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax + 0x1A8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_0012E4CC; /* jbe: below or equal (unsigned <=) */

loc_0012E4C9:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0012E4CC:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
