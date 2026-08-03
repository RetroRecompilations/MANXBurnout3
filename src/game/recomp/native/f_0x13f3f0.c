#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013F3F0
 * Original: 0x0013F3F0 - 0x0013F60E (542 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F3F0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0013F3F0:
    xmm0.f[0] = MEMF(edi + 0x3D30); /* movss */
    esp = esp - 0x48;
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0013F5D4; /* jbe: below or equal (unsigned <=) */

loc_0013F408:
    ecx = MEM32(edi + 0x3D34);
    if (TEST_Z(ecx, ecx)) goto loc_0013F52A; /* je: equal / zero */

loc_0013F416:
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_0013F41B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F52A; /* je: equal / zero */

loc_0013F423:
    eax = esp;
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0013F42B:
    xmm0.f[0] = MEMF(edi + 0x3D30); /* movss */
    /* comiss xmm0.f[0], MEMF(0x5A8558) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x5A8558))) goto loc_0013F49F; /* jb: below (unsigned <) */

loc_0013F43C:
    xmm2.f[0] = MEMF(0x3B1864); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0013F451; /* jbe: below or equal (unsigned <=) */

loc_0013F44C:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    goto loc_0013F48B;

loc_0013F451:
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_0013F468; /* jb: below (unsigned <) */

loc_0013F45E:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_0013F48B;

loc_0013F468:
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1690); /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1688); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */

loc_0013F48B:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0013F4FD;

loc_0013F49F:
    xmm0.f[0] = MEMF(edi + 0x3D30); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0013F4B7; /* jbe: below or equal (unsigned <=) */

loc_0013F4AF:
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0013F4FD;

loc_0013F4B7:
    /* comiss xmm0.f[0], MEMF(0x3B1730) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3B1730))) goto loc_0013F4D0; /* jb: below (unsigned <) */

loc_0013F4C0:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_0013F4FD;

loc_0013F4D0:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1690); /* mulss */
    xmm2.f[0] = MEMF(0x3B1698); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_0013F4FD:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(edi + 0x3D34);
    eax = esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA9A0(); /* call 0x001CA9A0 */

loc_0013F52A:
    xmm0.f[0] = MEMF(edi + 0x3D30); /* movss */
    xmm1.f[0] = MEMF(0x5A8558); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_0013F55F; /* jb: below (unsigned <) */

loc_0013F547:
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / MEMF(0x3EC22C); /* divss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_0013F56B;

loc_0013F55F:
    xmm0.f[0] = MEMF(edi + 0x3D30); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0013F56B:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0013F59C; /* ja: above (unsigned >) */

loc_0013F573:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_0013F57D; /* jb: below (unsigned <) */

loc_0013F578:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    goto loc_0013F59C;

loc_0013F57D:
    xmm1.f[0] = MEMF(0x3B1698); /* movss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1688); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */

loc_0013F59C:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1860); /* mulss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x3EBFD0) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x3D30); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x3D30) = xmm1.f[0]; /* movss */

loc_0013F5D4:
    ecx = MEM32(edi + 0x3D34);
    if (TEST_Z(ecx, ecx)) goto loc_0013F60A; /* je: equal / zero */

loc_0013F5DE:
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_0013F5E3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F60A; /* je: equal / zero */

loc_0013F5E7:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(edi + 0x3D30) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(edi + 0x3D30))) goto loc_0013F60A; /* jb: below (unsigned <) */

loc_0013F5F3:
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x3D34);
    PUSH32(esp, 0); sub_001CB1C0(); /* call 0x001CB1C0 */

loc_0013F5FF:
    MEM32(edi + 0x3D34) = 0;
    POP32(esp, esi);

loc_0013F60A:
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}
