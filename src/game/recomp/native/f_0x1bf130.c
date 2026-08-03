#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BF130
 * Original: 0x001BF130 - 0x001BF409 (729 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001BF130:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    edx = MEM32(ebp + 0xC);
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = edi + edx * 4 + 0x20;
    MEM32(esp + 0x14) = eax;
    goto loc_001BF150;

    /* nop */

loc_001BF150:
    ebx = MEM32(esp + 0x14);
    xmm4.f[0] = MEMF(ebx); /* movss */
    ebx = MEM32(edi + 0x34);
    ebx = ebx - edx;
    edx = MEM32(esi);
    xmm3.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B16D0); /* mulss */
    ebx = MEM32(ebp + 8);
    xmm3.f[0] = xmm3.f[0] + MEMF(edi + 0x20); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ebx + 0xC); /* addss */
    eax = 0; /* xor self */
    /* cmp edx, esi - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_EQ(edx, esi)) goto loc_001BF2C0; /* je: equal / zero */

loc_001BF186:
    memcpy(xmm5.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* nop */

loc_001BF190:
    memcpy(xmm2.b, (void *)XBOX_PTR(edx + -20), 16); /* movaps */
    ebx = edx + -20;
    edx = MEM32(edx);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm5.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    /* shufps xmm7, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEM32(esp + 0x10) = ebx;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    ebx = esp + 0x18;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    /* comiss xmm4.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm1.f[0])) goto loc_001BF298; /* jbe: below or equal (unsigned <=) */

loc_001BF1EB:
    if (TEST_Z(ecx, ecx)) goto loc_001BF291; /* je: equal / zero */

loc_001BF1F3:
    ebx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + 0x10);
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    /* shufps xmm7, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    ebx = esp + 0x1C;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + 0x10);
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm2.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm7.f[0])) goto loc_001BF298; /* ja: above (unsigned >) */

loc_001BF277:
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm6.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm6.f[0] > xmm0.f[0])) goto loc_001BF298; /* ja: above (unsigned >) */

loc_001BF285:
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm7.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm7.f[0] <= xmm2.f[0])) goto loc_001BF298; /* jbe: below or equal (unsigned <=) */

loc_001BF291:
    eax = MEM32(esp + 0x10);
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */

loc_001BF298:
    if (CMP_NE(edx, esi)) goto loc_001BF190; /* jne: not equal / not zero */

loc_001BF2A0:
    if (TEST_Z(eax, eax)) goto loc_001BF2BD; /* je: equal / zero */

loc_001BF2A4:
    /* comiss xmm4.f[0], MEMF(eax + 0xC) - sets EFLAGS */
    if ((xmm4.f[0] <= MEMF(eax + 0xC))) goto loc_001BF37E; /* jbe: below or equal (unsigned <=) */

loc_001BF2AE:
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    MEM8(esp + 0xF) = 1;
    goto loc_001BF37E;

loc_001BF2BD:
    ebx = MEM32(ebp + 8);

loc_001BF2C0:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    eax = MEM32(edi + 0x18);
    edx = MEM32(eax + 4);
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    edx = MEM32(eax);
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    eax = eax + 0xFFFFFFECu;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    edx = 0; /* xor self */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    ebx = MEM32(edi + 0x3C);
    ebx--;
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(edi + 0x3C) = ebx;
    if (CMP_EQ(ecx, edx)) goto loc_001BF36D; /* je: equal / zero */

loc_001BF315:
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    MEM32(eax + 0x10) = ecx;
    ebx = MEM32(ecx + 0x28);
    edx = ecx + 0x28;
    MEM32(eax + 0x18) = edx;
    esi = eax + 0x14;
    MEM32(esi) = ebx;
    ebx = MEM32(edx);
    MEM32(ebx + 4) = esi;
    MEM32(edx) = esi;
    edx = MEM32(eax + 0x10);
    xmm0.f[0] = MEMF(edx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    if (CMP_LE(MEM32(ecx + 0x24), 1)) goto loc_001BF37E; /* jle: less or equal (signed <=) */

loc_001BF34F:
    edx = MEM32(ecx + 0x1C);
    /* test edx, edx - flags set for next jcc */
    esi = ecx + 0x1C;
    if (TEST_NZ(edx, edx)) goto loc_001BF37E; /* jne: not equal / not zero */

loc_001BF359:
    ebx = MEM32(edi + 0x10);
    edx = edi + 0x10;
    MEM32(esi) = ebx;
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(edx);
    MEM32(ecx + 4) = esi;
    MEM32(edx) = esi;
    goto loc_001BF37E;

loc_001BF36D:
    edx = MEM32(esi);
    ecx = eax + 0x14;
    MEM32(ecx) = edx;
    MEM32(eax + 0x18) = esi;
    edx = MEM32(esi);
    MEM32(edx + 4) = ecx;
    MEM32(esi) = ecx;

loc_001BF37E:
    edx = MEM32(ebp + 0xC);
    if (CMP_EQ(edx, MEM32(edi + 0x34))) goto loc_001BF39F; /* je: equal / zero */

loc_001BF386:
    ecx = MEM32(esp + 0x14);
    edx++;
    ecx = ecx + 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(ebp + 0xC) = edx;
    esi = eax + 0x28;
    ecx = eax;
    goto loc_001BF150;

loc_001BF39F:
    edx = MEM32(eax + 0x24);
    ecx = MEM32(ebp + 8);
    edx++;
    MEM32(eax + 0x24) = edx;
    MEM32(ecx + 0x10) = eax;
    ebx = MEM32(eax + 0x28);
    edx = eax + 0x28;
    esi = ecx + 0x14;
    MEM32(ecx + 0x18) = edx;
    MEM32(esi) = ebx;
    ebx = MEM32(edx);
    MEM32(ebx + 4) = esi;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x10);
    xmm0.f[0] = MEMF(edx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x30) = xmm1.f[0]; /* movss */
    SET_LO8(ecx, MEM8(esp + 0xF));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001BF404; /* je: equal / zero */

loc_001BF3E2:
    if (CMP_LE(MEM32(eax + 0x24), 1)) goto loc_001BF404; /* jle: less or equal (signed <=) */

loc_001BF3E8:
    ecx = MEM32(eax + 0x1C);
    /* test ecx, ecx - flags set for next jcc */
    edx = eax + 0x1C;
    if (TEST_NZ(ecx, ecx)) goto loc_001BF404; /* jne: not equal / not zero */

loc_001BF3F2:
    esi = MEM32(edi + 0x10);
    ecx = edi + 0x10;
    MEM32(edx) = esi;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ecx);
    MEM32(eax + 4) = edx;
    MEM32(ecx) = edx;

loc_001BF404:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
