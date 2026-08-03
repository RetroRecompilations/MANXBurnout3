#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001239C0
 * Original: 0x001239C0 - 0x00123FC1 (1537 bytes, 393 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001239C0:
    PUSH32(esp, ebx);
    ebx = esp;
    PUSH32(esp, ecx);
    esp = esp & 0xFFFFFFF0u;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x148;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x204);
    ecx = ecx + 0x10;
    edx = MEM32(ecx);
    MEM32(ebp + -48) = edx;
    edx = MEM32(ecx + 4);
    MEM32(ebp + -44) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(ebp + -36) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x1169));
    MEM32(ebp + -40) = edx;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00123A31; /* jle: less or equal (signed <=) */

loc_00123A04:
    ecx = eax + 0x850;
    /* nop */

loc_00123A10:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + -48), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + -32), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    edx++;
    ecx = ecx + 0xC0;
    if (CMP_L(edx, esi)) goto loc_00123A10; /* jl: less (signed <) */

loc_00123A31:
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00123B39; /* jle: less or equal (signed <=) */

loc_00123A42:
    ecx = MEM32(eax + 0xCC4);
    xmm3.f[0] = MEMF(0x3A55F8); /* movss */
    xmm4.f[0] = MEMF(0x3B1730); /* movss */
    ecx = ecx + 0x4AC;
    esi = eax + 0xCC8;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = esi;
    ecx = eax + 0x870;
    esi = 0; /* xor self */

loc_00123A72:
    /* cmp edx, 2 - flags set for next jcc */
    edi = MEM32(ebp + -4);
    edi = MEM32(edi);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebp + esi + -320), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + esi + -320), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebp + esi + -224), xmm0.b, 16); /* movaps */
    if (CMP_GE(edx, 2)) goto loc_00123AA2; /* jge: greater or equal (signed >=) */

loc_00123A98:
    xmm2.f[0] = MEMF(eax + 0xCAC); /* movss */
    goto loc_00123AAA;

loc_00123AA2:
    xmm2.f[0] = MEMF(eax + 0xCBC); /* movss */

loc_00123AAA:
    xmm0.f[0] = MEMF(ecx + 0x24); /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x24); /* addss */
    edi = MEM32(ebp + -12);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(ebp + esi + -316) = xmm1.f[0]; /* movss */
    MEMF(ebp + esi + -220) = xmm0.f[0]; /* movss */
    /* cmp MEM8(edi), 2 - flags set for next jcc */
    MEMF(ebp + edx * 4 + -120) = xmm1.f[0]; /* movss */
    MEMF(ebp + edx * 4 + -88) = xmm0.f[0]; /* movss */
    if (CMP_NE(MEM8(edi), 2)) goto loc_00123B15; /* jne: not equal / not zero */

loc_00123AEA:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebp + esi + -224), 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(ebp + -64), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -64), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebp + esi + -224), xmm1.b, 16); /* movaps */

loc_00123B15:
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    edi = MEM32(ebp + -12);
    edx++;
    edi++;
    MEM32(ebp + -12) = edi;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    ecx = ecx + 0xC0;
    esi = esi + 0x10;
    if (CMP_L(edx, edi)) goto loc_00123A72; /* jl: less (signed <) */

loc_00123B39:
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    edx = ebp + -320;
    MEM32(ebp + -8) = ecx;
    ecx = edx;
    MEM32(ebp + -4) = edx;
    edx = MEM32(eax + 0x204);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = edx;
    esi = MEM32(ebp + -16);
    memcpy(xmm4.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    esi = MEM32(ebp + -4);
    edi = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);

loc_00123B75:
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm7.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    edi = edi + 0x10;
    esi = esi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00123B75; /* jne: not equal / not zero */

loc_00123BAD:
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    edx = ebp + -224;
    MEM32(ebp + -16) = ecx;
    ecx = edx;
    MEM32(ebp + -12) = edx;
    edx = MEM32(eax + 0x204);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = edx;
    esi = MEM32(ebp + -4);
    memcpy(xmm4.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    esi = MEM32(ebp + -12);
    edi = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);

loc_00123BE9:
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm7.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    edi = edi + 0x10;
    esi = esi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00123BE9; /* jne: not equal / not zero */

loc_00123C21:
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    xmm0.f[0] = MEMF(ebp + ecx * 4 + -124); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -116); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + -16) ? xmm0.f[0] : MEMF(ebp + -16)); /* maxss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    xmm0.f[0] = MEMF(ebp + edx * 4 + -92); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -84); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -8); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + -16) ? xmm0.f[0] : MEMF(ebp + -16)); /* minss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -12); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -4); /* subss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    SET_LO8(edx, MEM8(eax + 0x1169));
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + -16) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebp + -48), 16); /* movaps */
    ecx = ebp + -16;
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = 0; /* xor self */
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebp + -48), xmm1.b, 16); /* movaps */
    MEM32(ebp + -12) = ecx;
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_00123E71; /* jle: less or equal (signed <=) */

loc_00123CB6:
    edx = 0; /* xor self */
    edi = eax + 0x8D3;
    MEM32(ebp + -4) = edx;

loc_00123CC1:
    esi = MEM32(eax + 0xCC4);
    if (CMP_EQ(MEM8(esi + ecx + 0x4AC), 3)) goto loc_00123E01; /* je: equal / zero */

loc_00123CD5:
    esi = ebp + -32;
    PUSH32(esp, esi);
    ecx = ebp + edx + -320;
    esi = ebp + -16;
    PUSH32(esp, esi);
    edx = ebp + edx + -224;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0); sub_00123790(); /* call 0x00123790 */

loc_00123CF4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00123DFE; /* je: equal / zero */

loc_00123CFC:
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebp + -16);
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    MEM8(edi) = 1;
    eax = MEM32(ecx + 0x200);
    eax = MEM32(eax + 4);
    esi = edx;
    esi = esi << 6;
    eax = eax + esi;
    /* comiss xmm0.f[0], MEMF(eax + 0x34) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x34))) goto loc_00123D2F; /* jbe: below or equal (unsigned <=) */

loc_00123D23:
    eax = MEM32(ecx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    goto loc_00123D33;

loc_00123D2F:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */

loc_00123D33:
    memcpy((void *)XBOX_PTR(edi + -147), xmm0.b, 16); /* movaps */
    ecx = MEM32(ecx + 0x200);
    eax = MEM32(ecx + 8);
    SET_LO16(edx, MEM16(eax + edx * 2));
    MEM16(ebp + -8) = LO16(edx);
    eax = MEM32(ebp + -8);
    eax = eax & 0xFF;
    if (((int32_t)eax < 0)) goto loc_00123D5A; /* jl: less (signed <) */

loc_00123D55:
    if (CMP_LE(eax, 0xB)) goto loc_00123D6A; /* jle: less or equal (signed <=) */

loc_00123D5A:
    if (CMP_L(eax, 0xC)) goto loc_00123D64; /* jl: less (signed <) */

loc_00123D5F:
    if (CMP_LE(eax, 0x14)) goto loc_00123D6A; /* jle: less or equal (signed <=) */

loc_00123D64:
    if (CMP_NE(MEM8(ebp + -8), 0x26)) goto loc_00123D6E; /* jne: not equal / not zero */

loc_00123D6A:
    MEM16(edi + -3) = LO16(edx);

loc_00123D6E:
    memcpy(xmm2.b, (void *)XBOX_PTR(ebp + -48), 16); /* movaps */
    eax = MEM32(ebp + -4);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = MEMF(ebp + -32); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(ebp + -64), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + -64), 16); /* movaps */
    ecx = ebp + -28;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -28); /* divss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    edx = ebp + -24;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebp + eax + -320), 16); /* movaps */
    eax = ebp + eax + -320;
    eax = MEM32(ebp + -12);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + -163), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + eax * 4 + -120); /* movss */
    eax = MEM32(ebx + 8);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -99); /* addss */
    MEMF(edi + -79) = xmm0.f[0]; /* movss */
    goto loc_00123E4C;

loc_00123DFE:
    eax = MEM32(ebx + 8);

loc_00123E01:
    xmm0.f[0] = MEMF(edi + -99); /* movss */
    MEM8(edi) = 0;
    MEM8(edi + 1) = 0;
    edx = MEM32(eax + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    ecx = ebp + -20;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + -179), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + -163), xmm0.b, 16); /* movaps */
    ecx = MEM32(eax + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + -147), xmm0.b, 16); /* movaps */

loc_00123E4C:
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -4);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    ecx++;
    edx = edx + 0x10;
    edi = edi + 0xC0;
    /* cmp ecx, esi - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_L(ecx, esi)) goto loc_00123CC1; /* jl: less (signed <) */

loc_00123E71:
    ecx = MEM32(eax + 0x204);
    SET_LO16(edx, MEM16(eax + 0x8D0));
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    MEM16(eax + 0x1160) = LO16(edx);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebp + -80), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebp + -96), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A7964); /* subss */
    ecx = MEM32(eax + 0xCC4);
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A1C); /* movss */
    MEMF(ecx + 0x49C) = xmm0.f[0]; /* movss */
    esi = MEM32(eax + 0x200);
    ecx = MEM32(esi);
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00123FB2; /* jle: less or equal (signed <=) */

loc_00123ED8:
    MEM32(ebp + -4) = edi;
    goto loc_00123EE0;

    /* nop */

loc_00123EE0:
    edx = MEM32(esi + 4);
    eax = MEM32(ebp + -4);
    ecx = edx + eax;
    edx = ebp + -24;
    PUSH32(esp, edx);
    eax = ebp + -28;
    PUSH32(esp, eax);
    edx = ebp + -20;
    PUSH32(esp, edx);
    eax = ecx + 0x20;
    PUSH32(esp, eax);
    edx = ecx + 0x10;
    PUSH32(esp, edx);
    eax = ebp + -96;
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_00123F05:
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00123F80; /* je: equal / zero */

loc_00123F10:
    xmm0.f[0] = MEMF(ebp + -20); /* movss */
    xmm1.f[0] = MEMF(ebp + -8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00123F80; /* jbe: below or equal (unsigned <=) */

loc_00123F1F:
    ecx = MEM32(ebx + 8);
    eax = MEM32(ecx + 0xCC4);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7964); /* mulss */
    MEMF(eax + 0x49C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x200);
    eax = MEM32(edx + 4);
    edx = MEM32(ebp + -4);
    esi = MEM32(eax + edx + 0x30);
    edx = eax + edx + 0x30;
    eax = MEM32(ecx + 0xCC4);
    eax = eax + 0x490;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    esi = MEM32(ecx + 0x200);
    eax = MEM32(esi + 8);
    SET_LO16(edx, MEM16(eax + edi * 2));
    MEM16(ecx + 0x1160) = LO16(edx);
    goto loc_00123F83;

loc_00123F80:
    ecx = MEM32(ebx + 8);

loc_00123F83:
    edx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x200);
    ecx = MEM32(eax);
    edi++;
    edx = edx + 0x40;
    /* cmp edi, ecx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_L(edi, ecx)) goto loc_00123EE0; /* jl: less (signed <) */

loc_00123F9D:
    ecx = MEM32(ebx + 8);
    MEM8(ecx + 0x1352) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00123FB2:
    POP32(esp, edi);
    MEM8(eax + 0x1352) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);

}
