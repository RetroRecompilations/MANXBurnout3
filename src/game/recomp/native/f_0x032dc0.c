#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00032DC0
 * Original: 0x00032DC0 - 0x00033130 (880 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00032DC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4D6790);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_00032DDB:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A7ED8); /* movss */
    xmm3.f[0] = MEMF(esp + 0x30); /* movss */
    esp = esp + 8;
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm3.f[0])) goto loc_00032E0D; /* jb: below (unsigned <) */

loc_00032E01:
    MEM8(0x45D168) = 1;
    goto loc_00032F0A;

loc_00032E0D:
    memcpy(xmm4.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    xmm2.f[0] = MEMF(0x395BE0); /* movss */
    MEMF(0x45D16C) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    eax = esp + 8;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(0x4D6B08);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    ecx = esp + 8;
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(0x4D6B0C);
    /* shufps xmm0, xmm0, 0 */
    memcpy((void *)XBOX_PTR(0x4D9220), xmm4.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(0x4D9300), xmm2.b, 16); /* movaps */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x4D9200) = xmm2.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x4D9204) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x4D6B14); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = MEMF(0x4D6B10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(0x45D178) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(0x45D17C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(0x45D134) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    MEMF(0x4D9408) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM8(0x45D168) = 0;
    MEM32(0x45D12C) = eax;
    MEM32(0x45D130) = ecx;
    MEMF(0x4D940C) = xmm2.f[0]; /* movss */

loc_00032F0A:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00032F5E:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xd2 */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0xd2 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xc9 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00032F94:
    eax = MEM32(0x4D67D4);
    edx = MEM32(0x4D67D0);
    ecx = MEM32(0x4D67D8);
    xmm0.f[0] = MEMF(0x3B1ADC); /* movss */
    xmm3.f[0] = MEMF(0x3B1A38); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x4D67DC);
    MEM32(esp + 0x28) = ecx;
    eax = esp + 8;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    ecx = esp + 8;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 8;
    xmm3.f[0] = MEMF(edx); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(0x4D9198) = eax;
    eax = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    eax = 0x80000000u;
    MEM32(0x4D919C) = ecx;
    MEM32(0x4D91A0) = edx;
    MEM32(esp + 8) = eax;
    esi = MEM32(esp + 0xC);
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(0x4D91B0) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(0x4D91B4) = edx;
    edx = esp + 0x10;
    MEM32(0x4D91B8) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    esi = MEM32(esp + 8);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(0x4D91C8) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x4D91CC) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(0x4D91D0) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(0x4D91E0) = eax;
    MEM32(0x4D91E4) = ecx;
    MEM32(0x4D91E8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
