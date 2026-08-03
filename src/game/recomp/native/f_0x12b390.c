#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012B390
 * Original: 0x0012B390 - 0x0012BEA8 (2840 bytes, 597 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0012B390:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x294;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0012BE9F; /* je: equal / zero */

loc_0012B3AD:
    ecx = MEM32(eax + 0xAC0);
    if (TEST_Z(ecx, ecx)) goto loc_0012BE9F; /* je: equal / zero */

loc_0012B3BB:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x40);
    SET_LO8(eax, MEM8(ecx + 0xC));
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    edi = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x160), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0012BB93; /* jle: less or equal (signed <=) */

loc_0012B40E:
    edx = 0; /* xor self */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = 0xAC4;
    MEM32(esp + 0x20) = 0xAE2;

loc_0012B424:
    eax = MEM32(ebx + 0x14);
    if (CMP_EQ(MEM8(eax + edi + 0x4B2), 3)) goto loc_0012BB5B; /* je: equal / zero */

loc_0012B435:
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(esp + 0x14);
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm7.b, xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm6.b, 16); /* movaps */
    eax = MEM32(ecx + eax);
    /* cmp eax, 2 - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_EQ(eax, 2)) goto loc_0012B479; /* je: equal / zero */

loc_0012B46F:
    if (CMP_EQ(eax, 3)) goto loc_0012B479; /* je: equal / zero */

loc_0012B474:
    if (CMP_NE(eax, 6)) goto loc_0012B4B0; /* jne: not equal / not zero */

loc_0012B479:
    xmm0.f[0] = MEMF(ecx + edx + 0xD30); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A69C4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A69C4))) goto loc_0012B4B0; /* jbe: below or equal (unsigned <=) */

loc_0012B48B:
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm6.b, 16); /* movaps */
    MEM8(esp + 0xF) = 1;

loc_0012B4B0:
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(esp + 0x20);
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    esi = 0; /* xor self */
    edi = eax + edi * 8 + 0xB14;
    eax = eax + ecx;
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0012B4D0:
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(edi); /* movss */
    ecx = ZX8(MEM8(eax + esi));
    /* ucomiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012B68A; /* jnp: not parity */

loc_0012B4E9:
    edx = MEM32(ebx + 0x14);
    eax = ecx + 0x14;
    eax = eax << 6;
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + edx + 0x20), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + edx + 0x30), 16); /* movaps */
    eax = eax + edx;
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    eax = esp + 0x68;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm5.f[0] = MEMF(eax); /* movss */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm6.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x60;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x70;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    eax = esp + 0x7C;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    SET_LO8(eax, MEM8(esp + 0xF));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm4.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* addps: xmm7.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012B670; /* je: equal / zero */

loc_0012B5AE:
    eax = MEM32(ecx * 4 + 0x3EBF8C);
    eax = eax + 0x14;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    eax = eax << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + edx + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + edx + 0x20), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + edx + 0x30), 16); /* movaps */
    eax = eax + edx;
    ecx = esp + 0x78;
    xmm5.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* addps: xmm5.f[0] += xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    edx = esp + 0x64;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    eax = esp + 0x74;
    xmm1.f[0] = MEMF(eax); /* movss */
    ecx = esp + 0x6C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xF0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm5.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */

loc_0012B670:
    edx = MEM32(esp + 0x18);
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    esi++;
    edi = edi + 4;
    if (CMP_L(esi, 2)) goto loc_0012B4D0; /* jl: less (signed <) */

loc_0012B68A:
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x130), 16); /* movaps */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 0x34;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm6.f[0] += xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x140), 16); /* movaps */
    ecx = esp + 0x48;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm6.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm6.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm7.f[0] += xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, (void *)XBOX_PTR(esp + 0x150), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm7.b, 16); /* movaps */
    eax = esp + 0x40;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm7.b, xmm6.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm7.b, (void *)XBOX_PTR(esp + 0x160), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    ecx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    SET_LO8(ecx, MEM8(esp + 0xF));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm7.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm7.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0012B806; /* je: equal / zero */

loc_0012B75E:
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = esp + 0x30;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = esp + 0x3C;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm5.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = esp + 0x44;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm6.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    /* addps: xmm1.f[0] += xmm6.f[0] (packed 4xfloat) */
    eax = esp + 0x4C;
    xmm0.f[0] = MEMF(eax); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x160), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xF0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */

loc_0012B806:
    eax = MEM32(ebx + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edx + 0xD30), 16); /* movaps */
    eax = esp + 0x50;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x80;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x28) = eax;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x190), xmm0.b, 16); /* movaps */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x190), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + edx + 0x1B0), xmm0.b, 16); /* movaps */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0012BB5B; /* je: equal / zero */

loc_0012B883:
    ecx = MEM32(ebx + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + edx + 0xD30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x110); /* subss */
    eax = esp + 0x110;
    ecx = esp + 0xC0;
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x10) = ecx;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm0.b, 16); /* movaps */
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x120), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + edx + 0x1B0), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm5, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    eax = esp + 0x38;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0x38) - sets EFLAGS */
    MEM32(esp + 0x10) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    if ((xmm1.f[0] <= MEMF(esp + 0x38))) goto loc_0012B978; /* jbe: below or equal (unsigned <=) */

loc_0012B955:
    MEMF(esp + 0x100) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm4.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x100), 16); /* movaps */

loc_0012B978:
    esi = MEM32(esp + 0x14);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x170), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x170) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x170), 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    eax = 0x3832AC;
    xmm1.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ebx + 0x18);
    /* cmp MEM32(eax + esi), 6 - flags set for next jcc */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    if (CMP_NE(MEM32(eax + esi), 6)) goto loc_0012BA7D; /* jne: not equal / not zero */

loc_0012B9E8:
    ecx = MEM32(esp + 0x1C);
    if (CMP_NE(MEM8(eax + ecx + 0xADC), 0)) goto loc_0012BB5B; /* jne: not equal / not zero */

loc_0012B9FA:
    eax = MEM32(ebx + 0x14);
    esi = eax + edx;
    ecx = esi + 0x190;
    eax = esp + 0x100;
    ebx = esp + 0x260;
    PUSH32(esp, 0); sub_00121C00(); /* call 0x00121C00 */

loc_0012BA19:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1B0), 16); /* movaps */
    eax = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x290), xmm0.b, 16); /* movaps */
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x1E0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1E0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x180), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1F0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x190), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x200), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x1A0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x210), 16); /* movaps */
    goto loc_0012BB4C;

loc_0012BA7D:
    esi = MEM32(esp + 0x1C);
    if (CMP_NE(MEM8(eax + esi + 0xADC), 2)) goto loc_0012BB5B; /* jne: not equal / not zero */

loc_0012BA8F:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edx + 0x190), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esp + 0x180;
    memcpy((void *)XBOX_PTR(esp + 0x180), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012BACA:
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esp + 0x18);
    esi = ecx + edx;
    ecx = esi + 0x190;
    eax = esp + 0x180;
    ebx = esp + 0x220;
    PUSH32(esp, 0); sub_000BFB50(); /* call 0x000BFB50 */

loc_0012BAED:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1B0), 16); /* movaps */
    eax = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x250), xmm0.b, 16); /* movaps */
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x1A0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1A0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x180), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1B0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x190), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1C0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x1A0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1D0), 16); /* movaps */

loc_0012BB4C:
    ebx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx + eax + 0x1B0), xmm0.b, 16); /* movaps */

loc_0012BB5B:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    eax = eax + 4;
    ecx = ecx + 2;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 0x10);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x40);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    edi++;
    edx = edx + 0x40;
    /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(edi, eax)) goto loc_0012B424; /* jl: less (signed <) */

loc_0012BB93:
    SET_LO8(eax, MEM8(ebx + 0x47));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012BE9F; /* jne: not equal / not zero */

loc_0012BB9E:
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = 0xAEE;

loc_0012BBB4:
    edx = MEM32(ebx + 0x14);
    if (CMP_EQ(MEM8(edx + eax + 0x4AC), 3)) goto loc_0012BE66; /* je: equal / zero */

loc_0012BBC5:
    esi = MEM32(ebx + 0x18);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm7.b, xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm6.b, 16); /* movaps */
    ecx = 0; /* xor self */
    edi = esi + eax * 8 + 0xB44;
    /* nop */

loc_0012BC00:
    xmm0.f[0] = MEMF(edi); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012BCE6; /* jnp: not parity */

loc_0012BC15:
    eax = MEM32(esp + 0x14);
    eax = eax + esi;
    eax = ZX8(MEM8(eax + ecx));
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    eax = eax + 0x14;
    eax = eax << 6;
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + edx + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + edx + 0x20), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + edx + 0x30), 16); /* movaps */
    eax = eax + edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = esp + 0x38;
    xmm5.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm6.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x28;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = esp + 0x4C;
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    /* shufps xmm1, xmm1, 0 */
    eax = esp + 0x44;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm3.f[0] (packed 4xfloat) */
    ecx++;
    edi = edi + 4;
    /* cmp ecx, 2 - flags set for next jcc */
    /* addps: xmm7.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    if (CMP_L(ecx, 2)) goto loc_0012BC00; /* jl: less (signed <) */

loc_0012BCE6:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x130), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x3C;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    /* addps: xmm6.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x140), 16); /* movaps */
    eax = esp + 0x30;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    /* addps: xmm7.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x150), 16); /* movaps */
    ecx = esp + 0x2C;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x160), 16); /* movaps */
    eax = esp + 0x40;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(esp + 0x20);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + eax + 0xBB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(edx + eax + 0x34); /* movss */
    ecx = esp + 0x50;
    edx = esp + 0x80;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x34) = edx;
    esi = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x48);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm0.b, 16); /* movaps */
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + eax + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(edx + eax + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    eax = edx + eax + 0x34;
    MEMF(eax) = xmm2.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0012BE66; /* je: equal / zero */

loc_0012BE39:
    if (CMP_GE(MEM32(esp + 0x14), 0xAF2)) goto loc_0012BE4D; /* jge: greater or equal (signed >=) */

loc_0012BE43:
    xmm1.f[0] = MEMF(eax + 0xCA0); /* movss */
    goto loc_0012BE55;

loc_0012BE4D:
    xmm1.f[0] = MEMF(eax + 0xCB0); /* movss */

loc_0012BE55:
    ecx = MEM32(esp + 0x1C);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + ecx + 0x894) = xmm1.f[0]; /* movss */

loc_0012BE66:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    ecx = ecx + 2;
    eax++;
    edi = edi + 0x40;
    esi = esi + 0xC0;
    /* cmp ecx, 0xAFA - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(ecx, 0xAFA)) goto loc_0012BBB4; /* jl: less (signed <) */

loc_0012BE9F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
