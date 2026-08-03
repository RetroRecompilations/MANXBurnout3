#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155FD0
 * Original: 0x00155FD0 - 0x001562F4 (804 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00155FD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    eax = MEM32(0x73A1C0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_001562EB; /* jle: less or equal (signed <=) */

loc_00155FEE:
    edi = 0x73A210;
    MEM32(esp + 0x18) = 0x7397C8;
    goto loc_00156000;

    /* nop */

loc_00156000:
    eax = MEM32(edi + 0x2400);
    if (TEST_Z(eax, eax)) goto loc_001562C9; /* je: equal / zero */

loc_0015600E:
    SET_LO8(ecx, MEM8(edi + 0x11AE));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001562C9; /* je: equal / zero */

loc_0015601C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xB0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    eax = esp + 0x28;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A795C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x28))) goto loc_001562C9; /* ja: above (unsigned >) */

loc_0015606B:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001AD4A0(); /* call 0x001AD4A0 */

loc_00156076:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x197C);
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    ecx = ecx + ecx * 2;
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    ecx = ecx << 4;
    edx = MEM32(ecx + 0x64B38C);
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    xmm1.f[0] = MEMF(edx + 0x1164); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69C4); /* mulss */
    memcpy(xmm2.b, (void *)XBOX_PTR(edi + -48), 16); /* movaps */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    ecx = esp + 0x20;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1694); /* addss */
    edx = esp + 0xB0;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B16B4); /* addss */
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    esi = eax;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019D360(); /* call 0x0019D360 */

loc_00156131:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00156228; /* je: equal / zero */

loc_00156139:
    edx = MEM32(esp + 0x110);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 4));
    if (TEST_NZ(HI8(eax), 1)) goto loc_001562C9; /* jne: not equal / not zero */

loc_0015614F:
    eax = eax & 0xFF;
    if (CMP_EQ(LO16(eax), 0x21)) goto loc_001562C9; /* je: equal / zero */

loc_0015615E:
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_001562C9; /* je: equal / zero */

loc_00156168:
    esi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esi + 4))) goto loc_001562C9; /* jbe: below or equal (unsigned <=) */

loc_0015617D:
    xmm0.f[0] = MEMF(esi); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001562C9; /* jp: parity */

loc_00156192:
    PUSH32(esp, edi);
    eax = esp + 0x34;
    ecx = esp + 0x74;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001561A0:
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + -16), 16); /* movaps */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = esp + 0x24;
    xmm0.f[0] = MEMF(eax); /* movss */
    ecx = esp + 0x90;
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, ecx);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0xA4;
    ecx = esp + 0x74;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013BD0(); /* call 0x00013BD0 */

loc_001561E1:
    xmm0.f[0] = MEMF(ebx * 4 + 0x40E310); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x78;
    PUSH32(esp, 0); sub_00156300(); /* call 0x00156300 */

loc_00156206:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1684); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    goto loc_001562C5;

loc_00156228:
    esi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esi); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001562C2; /* jnp: not parity */

loc_00156240:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3B1684) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1684))) goto loc_001562C2; /* jbe: below or equal (unsigned <=) */

loc_00156255:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = esp + 0x2C;
    xmm0.f[0] = MEMF(edx); /* movss */
    eax = esp + 0x80;
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, eax);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0xA4;
    ecx = esp + 0x64;
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013BD0(); /* call 0x00013BD0 */

loc_0015629E:
    xmm0.f[0] = MEMF(0x40E310); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00156300(); /* call 0x00156300 */

loc_001562C2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_001562C5:
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_001562C9:
    edx = MEM32(esp + 0x18);
    eax = MEM32(0x73A1C0);
    ebx++;
    edx = edx + 0x1CC;
    edi = edi + 0x27E0;
    /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(ebx, eax)) goto loc_00156000; /* jl: less (signed <) */

loc_001562EB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
