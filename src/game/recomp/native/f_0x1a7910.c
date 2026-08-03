#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A7910
 * Original: 0x001A7910 - 0x001A821F (2319 bytes, 517 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001A7910:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    eax = MEM32(edi + 0x114);
    memcpy(xmm6.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x49));
    esi = esi + esi * 4;
    esi = esi << 4;
    esi = esi + 0x642C10;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x120); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x80), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x60), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x60), 16); /* movaps */
    ecx = MEM32(edi + 0x114);
    xmm4.f[0] = MEMF(ecx + 0x28); /* movss */
    /* subps: xmm0.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x10;
    MEMF(edx) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    eax = esp + 0xC;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0xC); /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    /* shufps xmm5, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    edx = esp + 0xC;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm5.f[0], xmm1.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm6.b, 16); /* movaps */
    MEM32(esp + 0x18) = esi;
    if ((xmm5.f[0] <= xmm1.f[0])) goto loc_001A7A61; /* jbe: below or equal (unsigned <=) */

loc_001A7A21:
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3B168C); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A69C4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    goto loc_001A7A74;

loc_001A7A61:
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B168C); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69C4); /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */

loc_001A7A74:
    xmm7.f[0] = MEMF(edi + 0xC4); /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x60EA1C); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    /* comiss xmm7.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    if ((xmm7.f[0] <= xmm1.f[0])) goto loc_001A7AA6; /* jbe: below or equal (unsigned <=) */

loc_001A7A9D:
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */

loc_001A7AA6:
    /* comiss xmm5.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm5.f[0] <= xmm7.f[0])) goto loc_001A7AB4; /* jbe: below or equal (unsigned <=) */

loc_001A7AAB:
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    memcpy(xmm7.b, xmm5.b, 16); /* movaps */

loc_001A7AB4:
    /* comiss xmm4.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm5.f[0])) goto loc_001A7AC3; /* jbe: below or equal (unsigned <=) */

loc_001A7AB9:
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    goto loc_001A7ADF;

loc_001A7AC3:
    xmm4.f[0] = MEMF(edi + 0x124); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1688); /* mulss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */

loc_001A7ADF:
    xmm4.f[0] = MEMF(edi + 0xC4); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1B20); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001A7B18; /* jbe: below or equal (unsigned <=) */

loc_001A7AF8:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x60EA1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1B1C); /* mulss */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    goto loc_001A7B3E;

loc_001A7B18:
    xmm2.f[0] = MEMF(edi + 0xC4); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A7F34); /* mulss */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm1.f[0] = MEMF(edx); /* movss */

loc_001A7B3E:
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x10))) goto loc_001A7BA1; /* ja: above (unsigned >) */

loc_001A7B7D:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A7B86:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm6.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    xmm7.f[0] = MEMF(esp + 0xC); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A7BAF; /* jp: parity */

loc_001A7BA1:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_001A7BAF:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x90), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    ebx = edi + 0x90;
    /* shufps xmm3, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* comiss xmm1.f[0], xmm5.f[0] - sets EFLAGS */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((xmm1.f[0] <= xmm5.f[0])) goto loc_001A7C2D; /* jbe: below or equal (unsigned <=) */

loc_001A7C09:
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    ecx = esp + 0x10;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    goto loc_001A7C52;

loc_001A7C2D:
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 0x10;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */

loc_001A7C52:
    xmm2.f[0] = MEMF(edi + 0x130); /* movss */
    /* comiss xmm2.f[0], xmm5.f[0] - sets EFLAGS */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x130); /* subss */
    if ((xmm2.f[0] <= xmm5.f[0])) goto loc_001A7CA2; /* jbe: below or equal (unsigned <=) */

loc_001A7C6A:
    xmm2.f[0] = MEMF(0x3A7ED8); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001A7C83; /* jbe: below or equal (unsigned <=) */

loc_001A7C77:
    xmm1.f[0] = MEMF(edi + 0x130); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_001A7C83:
    xmm2.f[0] = MEMF(0x3B1B18); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001A7CD8; /* jbe: below or equal (unsigned <=) */

loc_001A7C90:
    xmm1.f[0] = MEMF(edi + 0x130); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x384148); /* subss */
    goto loc_001A7CD8;

loc_001A7CA2:
    xmm2.f[0] = MEMF(0x384148); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001A7CBB; /* jbe: below or equal (unsigned <=) */

loc_001A7CAF:
    xmm1.f[0] = MEMF(edi + 0x130); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_001A7CBB:
    xmm2.f[0] = MEMF(0x3B1B14); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001A7CD8; /* jbe: below or equal (unsigned <=) */

loc_001A7CC8:
    xmm1.f[0] = MEMF(edi + 0x130); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3A7ED8); /* subss */

loc_001A7CD8:
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x130) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(ebx); /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x98); /* mulss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(edi + 0x98); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ebx); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(edi + 0x14C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm6.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm6.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(edi + 0x173));
    if (CMP_EQ(LO8(eax), 8)) goto loc_001A7DE2; /* je: equal / zero */

loc_001A7DDE:
    if (CMP_NE(LO8(eax), 9)) goto loc_001A7E06; /* jne: not equal / not zero */

loc_001A7DE2:
    eax = edi + 0x60;
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0); sub_0019DFD0(); /* call 0x0019DFD0 */

loc_001A7DED:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    esi = edi + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0019DFD0(); /* call 0x0019DFD0 */

loc_001A7E02:
    esi = MEM32(esp + 0x18);

loc_001A7E06:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x18))) goto loc_001A7E5A; /* ja: above (unsigned >) */

loc_001A7E46:
    eax = ebx;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A7E4D:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A7E6A; /* jp: parity */

loc_001A7E5A:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x98) = xmm0.f[0]; /* movss */

loc_001A7E6A:
    xmm0.f[0] = MEMF(edi + 0x150); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi + 0xA0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0019DC60(); /* call 0x0019DC60 */

loc_001A7E9E:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A7EAA; /* jne: not equal / not zero */

loc_001A7EA2:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */

loc_001A7EAA:
    esi = edi + 0x30;
    eax = esi;
    PUSH32(esp, 0); sub_0019DC60(); /* call 0x0019DC60 */

loc_001A7EB4:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A7EC0; /* jne: not equal / not zero */

loc_001A7EB8:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x40), xmm0.b, 16); /* movaps */

loc_001A7EC0:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x18;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x18))) goto loc_001A7F13; /* ja: above (unsigned >) */

loc_001A7EFF:
    eax = ebx;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A7F06:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A7F23; /* jp: parity */

loc_001A7F13:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x98) = xmm0.f[0]; /* movss */

loc_001A7F23:
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x70), 16); /* movaps */
    esi = edi + 0x70;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x150); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x40), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    eax = edi + 0x80;
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A7F94:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A7FB1; /* jp: parity */

loc_001A7FA1:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x84) = xmm0.f[0]; /* movss */

loc_001A7FB1:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x80), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esi;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A7FE4:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A7FFD; /* jp: parity */

loc_001A7FF1:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_001A7FFD:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = edi + 0x80;
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A8030:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    /* ucomiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A804C; /* jp: parity */

loc_001A8044:
    MEMF(edi + 0x84) = xmm3.f[0]; /* movss */

loc_001A804C:
    edx = MEM32(edi + 0xB0);
    SET_LO8(eax, MEM8(edx + 0xD));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001A80A3; /* jle: less or equal (signed <=) */

loc_001A8059:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0x120); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x128); /* addss */
    xmm1.f[0] = MEMF(0x3B1B10); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001A808A; /* jbe: below or equal (unsigned <=) */

loc_001A8084:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001A809B;

loc_001A808A:
    xmm4.f[0] = MEMF(0x3B1B0C); /* movss */
    /* comiss xmm4.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm0.f[0])) goto loc_001A80A3; /* jbe: below or equal (unsigned <=) */

loc_001A8097:
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001A809B:
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */

loc_001A80A3:
    if (TEST_NZ(MEM8(edi + 0x174), 4)) goto loc_001A8219; /* jne: not equal / not zero */

loc_001A80B0:
    xmm1.f[0] = MEMF(edi + 0xBC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69B8); /* mulss */
    eax = MEM32(edi + 0x114);
    MEMF(edi + 0xBC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x158); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1A84); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(edi + 0x15C); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x15C); /* subss */
    MEMF(edi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEMF(edi + 0xBC) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm1.f[0] = MEMF(edi + 0xB4); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69C0); /* mulss */
    MEMF(edi + 0xC0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x154); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0xC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0xC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69C4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(edi + 0x15C); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0xB8) = xmm0.f[0]; /* movss */

loc_001A8219:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
