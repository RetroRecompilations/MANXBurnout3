#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B1F90
 * Original: 0x001B1F90 - 0x001B2226 (662 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001B1F90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    PUSH32(esp, esi);
    ecx = esp + 0x3C;
    edx = esp + 0x4C;
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = edx;
    esi = MEM32(esp + 8);
    edi = MEM32(esp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x78) = ecx;
    ecx = esp + 0x70;
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = 0x7FFFFFFF;
    esi = MEM32(esp + 0xC);
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* andps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ecx;
    edx = esp + 0x40;
    ecx = esp + 0x60;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm6.f[0] = MEMF(0x3B172C); /* movss */
    memcpy(xmm7.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    edx = esp + 8;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    memcpy(xmm6.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm0.f[0] (packed 4xfloat) */
    ecx = esp + 8;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = esp + 0x30;
    ecx = esp + 0x20;
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ecx;
    edx = esp + 0x30;
    ecx = esp + 0x80;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_001B221E; /* jbe: below or equal (unsigned <=) */

loc_001B218C:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = esp + 8;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    eax = esp + 8;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    if ((xmm0.f[0] <= MEMF(esp + 0x10))) goto loc_001B2213; /* jbe: below or equal (unsigned <=) */

loc_001B21D9:
    /* comiss xmm0.f[0], MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x14))) goto loc_001B2213; /* jbe: below or equal (unsigned <=) */

loc_001B21E0:
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x18))) goto loc_001B2213; /* jbe: below or equal (unsigned <=) */

loc_001B21E7:
    xmm1.f[0] = MEMF(esp + 0x70); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001B2213; /* jbe: below or equal (unsigned <=) */

loc_001B21F2:
    xmm1.f[0] = MEMF(esp + 0x74); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001B2213; /* jbe: below or equal (unsigned <=) */

loc_001B21FD:
    xmm1.f[0] = MEMF(esp + 0x78); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001B2213; /* jbe: below or equal (unsigned <=) */

loc_001B2208:
    eax = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B2213:
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B221E:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
