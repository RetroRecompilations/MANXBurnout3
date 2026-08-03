#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6B40
 * Original: 0x001A6B40 - 0x001A7209 (1737 bytes, 437 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001A6B40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(edi + 0xC8) = 0xD;
    if (CMP_LE(eax, ebx)) goto loc_001A6C57; /* jle: less or equal (signed <=) */

loc_001A6B68:
    esi = MEM32(ebp + 8);
    xmm2.f[0] = MEMF(0x3A5E44); /* movss */
    xmm3.f[0] = MEMF(0x3A5E0C); /* movss */
    edx = 0; /* xor self */
    esi = esi + 0x50;

loc_001A6B80:
    if (CMP_EQ(MEM8(esi + 0x18), LO8(ebx))) goto loc_001A6C42; /* je: equal / zero */

loc_001A6B89:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm0.f[0])) goto loc_001A6BDE; /* ja: above (unsigned >) */

loc_001A6BD5:
    if (TEST_Z(MEM8(edi + 0x174), 4)) goto loc_001A6C36; /* je: equal / zero */

loc_001A6BDE:
    SET_LO8(eax, MEM8(edi + 0x174));
    if (TEST_NZ(LO8(eax), 2)) goto loc_001A6C36; /* jne: not equal / not zero */

loc_001A6BE8:
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    MEM8(esp + 0x17) = 1;
    if ((xmm3.f[0] > xmm0.f[0])) goto loc_001A6C06; /* ja: above (unsigned >) */

loc_001A6BF2:
    if (TEST_NZ(LO8(eax), 4)) goto loc_001A6C06; /* jne: not equal / not zero */

loc_001A6BF6:
    SET_LO8(ebx, MEM8(edi + 0x17B));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    goto loc_001A6C12;

loc_001A6C06:
    SET_LO8(ebx, MEM8(edi + 0x17B));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ebx, LO8(ebx) | LO8(eax));

loc_001A6C12:
    MEM8(edi + 0x17B) = LO8(ebx);
    eax = ZX8(MEM8(ecx + 0x649B30));
    SET_LO8(ebx, MEM8(edi + 0x177));
    MEM8(eax + edx + 0x649404) = LO8(ebx);
    MEM8(ecx + 0x649B30) = MEM8(ecx + 0x649B30) + 1;
    ebx = 0; /* xor self */
    goto loc_001A6C42;

loc_001A6C36:
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(eax, ~LO8(eax));
    MEM8(edi + 0x17B) = MEM8(edi + 0x17B) & LO8(eax);

loc_001A6C42:
    eax = MEM32(ebp + 0xC);
    ecx++;
    esi = esi + 0x70;
    edx = edx + 0xFE;
    if (CMP_L(ecx, eax)) goto loc_001A6B80; /* jl: less (signed <) */

loc_001A6C57:
    ecx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_001A6D79; /* jle: less or equal (signed <=) */

loc_001A6C64:
    edx = MEM32(ebp + 8);
    xmm3.f[0] = MEMF(0x3A2928); /* movss */
    xmm4.f[0] = MEMF(0x3980F8); /* movss */
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = ebx;
    edx = edx + 0x30;

loc_001A6C80:
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    ebx = MEM32(esp + 0x18);
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    /* shufps xmm5, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = ZX8(MEM8(edi + 0x177));
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    ecx = ecx + ebx;
    MEMF(ecx * 4 + 0x647C34) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(esp + 0x17));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001A6D5D; /* je: equal / zero */

loc_001A6CFB:
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] > xmm0.f[0])) goto loc_001A6D09; /* ja: above (unsigned >) */

loc_001A6D00:
    if (TEST_Z(MEM8(edi + 0x174), 4)) goto loc_001A6D5D; /* je: equal / zero */

loc_001A6D09:
    if (TEST_NZ(MEM8(edi + 0x174), 2)) goto loc_001A6D5D; /* jne: not equal / not zero */

loc_001A6D12:
    /* comiss xmm4.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm0.f[0])) goto loc_001A6D3A; /* jbe: below or equal (unsigned <=) */

loc_001A6D17:
    SET_LO8(ecx, MEM8(eax + 0x649B3C));
    if (CMP_AE(LO8(ecx), 8)) goto loc_001A6D3A; /* jae: above or equal (unsigned >=) */

loc_001A6D22:
    SET_LO8(ebx, MEM8(edi + 0x177));
    ecx = ZX8(LO8(ecx));
    MEM8(ecx + eax * 8 + 0x649A8E) = LO8(ebx);
    MEM8(eax + 0x649B3C) = MEM8(eax + 0x649B3C) + 1;
    ebx = 0; /* xor self */

loc_001A6D3A:
    SET_LO8(ecx, MEM8(eax + 0x649B36));
    if (CMP_AE(LO8(ecx), 0x19)) goto loc_001A6D5D; /* jae: above or equal (unsigned >=) */

loc_001A6D45:
    SET_LO8(ebx, MEM8(edi + 0x177));
    ecx = ZX8(LO8(ecx));
    MEM8(ecx + esi + 0x6499F8) = LO8(ebx);
    MEM8(eax + 0x649B36) = MEM8(eax + 0x649B36) + 1;
    ebx = 0; /* xor self */

loc_001A6D5D:
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0xFE;
    ecx = MEM32(ebp + 0xC);
    eax++;
    edx = edx + 0x70;
    esi = esi + 0x19;
    if (CMP_L(eax, ecx)) goto loc_001A6C80; /* jl: less (signed <) */

loc_001A6D77:
    goto loc_001A6D7C;

loc_001A6D79:
    xmm2.f[0] = 0.0f; /* xorps self = zero */

loc_001A6D7C:
    eax = MEM32(edi + 0x114);
    if (CMP_EQ(eax, ebx)) goto loc_001A7200; /* je: equal / zero */

loc_001A6D8A:
    /* cmp MEM8(eax + 0x46), LO8(ebx) - flags set for next jcc */
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_EQ(MEM8(eax + 0x46), LO8(ebx))) goto loc_001A709B; /* je: equal / zero */

loc_001A6D98:
    SET_LO8(ecx, MEM8(eax + 0x41));
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001A6DA4; /* jne: not equal / not zero */

loc_001A6DA0:
    ecx = 0; /* xor self */
    goto loc_001A6DB0;

loc_001A6DA4:
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;

loc_001A6DB0:
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    ecx--;
    if (CMP_L(edx, ecx)) goto loc_001A6DD2; /* jl: less (signed <) */

loc_001A6DBA:
    if (CMP_NE(MEM32(edi + 0x118), ebx)) goto loc_001A6DD2; /* jne: not equal / not zero */

loc_001A6DC2:
    ecx = edi;
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_001A6DC9:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A6DD2:
    edx = MEM32(eax + 0x2C);
    eax = edi;
    MEM32(edi + 0xC4) = edx;
    PUSH32(esp, 0); sub_001A8EE0(); /* call 0x001A8EE0 */

loc_001A6DE2:
    if (CMP_EQ(MEM8(esp + 0x17), LO8(ebx))) goto loc_001A7011; /* je: equal / zero */

loc_001A6DEC:
    SET_LO8(eax, MEM8(edi + 0x17A));
    if (TEST_Z(LO8(eax), 1)) goto loc_001A6E05; /* je: equal / zero */

loc_001A6DF6:
    SET_LO8(eax, LO8(eax) & 0xFE);
    esi = edi;
    MEM8(edi + 0x17A) = LO8(eax);
    PUSH32(esp, 0); sub_001A7600(); /* call 0x001A7600 */

loc_001A6E05:
    if (TEST_NZ(MEM8(edi + 0x174), 4)) goto loc_001A6E25; /* jne: not equal / not zero */

loc_001A6E0E:
    if (CMP_NE(MEM8(0x649B97), LO8(ebx))) goto loc_001A6E25; /* jne: not equal / not zero */

loc_001A6E16:
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_001A9170(); /* call 0x001A9170 */

loc_001A6E25:
    PUSH32(esp, 0); sub_001A7910(); /* call 0x001A7910 */

loc_001A6E2A:
    eax = MEM32(edi + 0x114);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], MEMF(eax + 0x18) - sets EFLAGS */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    if ((xmm2.f[0] < MEMF(eax + 0x18))) goto loc_001A6E76; /* jb: below (unsigned <) */

loc_001A6E41:
    /* comiss xmm3.f[0], MEMF(edi + 0xC4) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(edi + 0xC4))) goto loc_001A6E52; /* jbe: below or equal (unsigned <=) */

loc_001A6E4A:
    MEMF(edi + 0x148) = xmm2.f[0]; /* movss */

loc_001A6E52:
    /* cmp MEM8(eax + 0x46), 1 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B1D10); /* movss */
    if (CMP_EQ(MEM8(eax + 0x46), 1)) goto loc_001A6E68; /* je: equal / zero */

loc_001A6E60:
    xmm0.f[0] = MEMF(0x3B1B18); /* movss */

loc_001A6E68:
    /* comiss xmm0.f[0], MEMF(eax + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x18))) goto loc_001A6E76; /* jbe: below or equal (unsigned <=) */

loc_001A6E6E:
    MEMF(edi + 0x148) = xmm2.f[0]; /* movss */

loc_001A6E76:
    xmm0.f[0] = MEMF(edi + 0x148); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    xmm4.f[0] = MEMF(0x3B16C0); /* movss */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_001A6EB1; /* jb: below (unsigned <) */

loc_001A6E8B:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x60EA1C); /* addss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edi + 0x148) = xmm0.f[0]; /* movss */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_001A6EA9; /* jbe: below or equal (unsigned <=) */

loc_001A6EA0:
    MEM8(edi + 0xC8) = MEM8(edi + 0xC8) | 0x10;
    goto loc_001A6EB1;

loc_001A6EA9:
    MEMF(edi + 0x148) = xmm4.f[0]; /* movss */

loc_001A6EB1:
    xmm0.f[0] = MEMF(edi + 0x140); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_001A6F56; /* jb: below (unsigned <) */

loc_001A6EC2:
    xmm1.f[0] = MEMF(0x3B1D0C); /* movss */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    edx = (int32_t)xmm5.f[0]; /* cvttss2si */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3B16EC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(edi + 0x140); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x60EA1C); /* addss */
    MEMF(edi + 0x140) = xmm1.f[0]; /* movss */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_001A6F24; /* jbe: below or equal (unsigned <=) */

loc_001A6F06:
    SET_LO8(eax, MEM8(edi + 0x175));
    if (TEST_Z(LO8(eax), 1)) goto loc_001A6F17; /* je: equal / zero */

loc_001A6F10:
    MEM8(edi + 0xC8) = MEM8(edi + 0xC8) | 0x20;

loc_001A6F17:
    if (TEST_Z(LO8(eax), 4)) goto loc_001A6F56; /* je: equal / zero */

loc_001A6F1B:
    MEM8(edi + 0xC8) = MEM8(edi + 0xC8) | 0x40;
    goto loc_001A6F56;

loc_001A6F24:
    ecx = MEM32(edi + 0x110);
    if (CMP_EQ(ecx, ebx)) goto loc_001A6F3B; /* je: equal / zero */

loc_001A6F2E:
    if (CMP_NE(MEM8(eax + 0x48), LO8(ebx))) goto loc_001A6F56; /* jne: not equal / not zero */

loc_001A6F33:
    SET_LO8(ecx, MEM8(ecx + 0x5E));
    /* cmp LO8(ecx), MEM8(eax + 0x41) - flags set for next jcc */
    goto loc_001A6F46;

loc_001A6F3B:
    if (CMP_NE(MEM8(eax + 0x48), LO8(ebx))) goto loc_001A6F56; /* jne: not equal / not zero */

loc_001A6F40:
    SET_LO8(edx, MEM8(edi + 0x5E));
    /* cmp LO8(edx), MEM8(eax + 0x41) - flags set for next jcc */

loc_001A6F46:
    if (CMP_NE(LO8(edx), MEM8(eax + 0x41))) goto loc_001A6F56; /* jne: not equal / not zero */

loc_001A6F48:
    MEM8(edi + 0x175) = LO8(ebx);
    MEMF(edi + 0x140) = xmm4.f[0]; /* movss */

loc_001A6F56:
    if (CMP_NE(MEM8(edi + 0x172), 2)) goto loc_001A7200; /* jne: not equal / not zero */

loc_001A6F63:
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    /* comiss xmm0.f[0], MEMF(edi + 0x144) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edi + 0x144))) goto loc_001A6FF9; /* jbe: below or equal (unsigned <=) */

loc_001A6F78:
    xmm0.f[0] = MEMF(edi + 0x144); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x170);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x60EA1C); /* addss */
    MEMF(edi + 0x144) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + eax * 4 + 0xF0); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_001A7200; /* jbe: below or equal (unsigned <=) */

loc_001A6FA9:
    SET_LO8(eax, MEM8(edi + 0x179));
    ecx = ZX8(MEM8(edi + 0x178));
    edx = ZX8(LO8(eax));
    ecx = ecx + ecx * 4;
    ecx = ecx + edx;
    /* comiss xmm0.f[0], MEMF(ecx * 4 + 0x41A440) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx * 4 + 0x41A440))) goto loc_001A6FD0; /* jbe: below or equal (unsigned <=) */

loc_001A6FC8:
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edi + 0x179) = LO8(eax);

loc_001A6FD0:
    eax = ZX8(MEM8(edi + 0x179));
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_001A6FE3; /* jns: not sign (positive) */

loc_001A6FDE:
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_001A6FE3:
    if ((eax != 0)) goto loc_001A7200; /* jne: not equal / not zero */

loc_001A6FE9:
    MEM8(edi + 0xC8) = MEM8(edi + 0xC8) | 2;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A6FF9:
    MEM8(edi + 0x172) = 1;
    MEMF(edi + 0x144) = xmm4.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A7011:
    SET_LO8(ebx, MEM8(edi + 0x17A));
    ecx = MEM32(edi + 0x114);
    SET_LO8(ebx, LO8(ebx) | 1);
    MEM8(edi + 0x17A) = LO8(ebx);
    eax = ZX8(MEM8(ecx + 0x49));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x642C10;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x120); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x80), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0xA0), xmm0.b, 16); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001A709B:
    SET_LO8(ecx, MEM8(edi + 0x17A));
    SET_LO8(ecx, LO8(ecx) | 1);
    PUSH32(esp, eax);
    MEM8(edi + 0x17A) = LO8(ecx);
    PUSH32(esp, 0); sub_001A06F0(); /* call 0x001A06F0 */

loc_001A70B0:
    eax = MEM32(edi + 0x114);
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_001A70BB:
    eax = MEM32(edi + 0x114);
    SET_LO8(edx, MEM8(eax + 0x4B));
    xmm1.f[0] = MEMF(0x3B16E4); /* movss */
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    SET_LO8(ecx, 0xFF);
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x47) = LO8(ecx);
    MEM8(eax + 0x41) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM8(eax + 0x42) = LO8(ecx);
    MEM8(eax + 0x43) = LO8(ecx);
    SET_LO8(edx, LO8(edx) & 0xE2);
    MEM8(eax + 0x4B) = LO8(edx);
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = 0xFFFF;
    MEM16(eax + 0x3C) = LO16(ecx);
    MEM16(eax + 0x3E) = LO16(ecx);
    MEM8(eax + 0x46) = LO8(ebx);
    MEM32(eax + 0x38) = ebx;
    MEMF(eax + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x4D) = LO8(ebx);
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x4C) = LO8(ebx);
    MEM8(eax + 0x48) = LO8(ebx);
    ecx = MEM32(0x649B4C);
    SET_LO8(edx, MEM8(ecx + 0x49));
    MEM8(eax + 0x44) = LO8(edx);
    MEM32(0x649B4C) = eax;
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 5);
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0x8000001Fu;
    SET_LO16(edx, ZX8(LO8(edx)));
    edx = ZX16(LO16(edx));
    if (((int32_t)ecx >= 0)) goto loc_001A718D; /* jns: not sign (positive) */

loc_001A7188:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A718D:
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx * 4 + 0x649AE0);
    esi = ~esi;
    ecx = ecx & esi;
    MEM32(edx * 4 + 0x649AE0) = ecx;
    MEM8(eax + 0x4B) = MEM8(eax + 0x4B) & 0xF7;
    /* cmp MEM32(edi + 0x118), ebx - flags set for next jcc */
    MEM32(edi + 0x114) = ebx;
    if (CMP_EQ(MEM32(edi + 0x118), ebx)) goto loc_001A71C6; /* je: equal / zero */

loc_001A71B8:
    MEM32(edi + 0x118) = ebx;
    MEMF(edi + 0x11C) = xmm1.f[0]; /* movss */

loc_001A71C6:
    /* cmp MEM8(0x649B97), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(edi + 0x110);
    if (CMP_EQ(MEM8(0x649B97), LO8(ebx))) goto loc_001A71DA; /* je: equal / zero */

loc_001A71D4:
    if (CMP_EQ(ecx, ebx)) goto loc_001A71EC; /* je: equal / zero */

loc_001A71D8:
    goto loc_001A71E7;

loc_001A71DA:
    if (CMP_EQ(ecx, ebx)) goto loc_001A71EC; /* je: equal / zero */

loc_001A71DE:
    if (TEST_NZ(MEM8(edi + 0x174), 2)) goto loc_001A71EC; /* jne: not equal / not zero */

loc_001A71E7:
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_001A71EC:
    PUSH32(esp, 1);
    eax = edi;
    esi = 0x6137E0;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A71FA:
    MEM8(edi + 0x174) = LO8(ebx);

loc_001A7200:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
