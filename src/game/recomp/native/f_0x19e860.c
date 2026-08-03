#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E860
 * Original: 0x0019E860 - 0x0019EB98 (824 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E860:
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    SET_LO8(ecx, MEM8(edx + 0x15));
    esp = esp - 0xC;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0019EB92; /* jbe: below or equal (unsigned <=) */

loc_0019E874:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 0xFFFFFFF0u;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = eax + 0x10;
    ecx = ecx - eax;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_0019E890:
    eax = MEM32(edx + 0xC);
    esi = MEM32(ebx + eax);
    SET_LO8(eax, MEM8(edi));
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019E989; /* je: equal / zero */

loc_0019E8AB:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    ebp = ZX8(MEM8(eax + 0x41));
    if (CMP_EQ(ebp, esi)) goto loc_0019E8E0; /* je: equal / zero */

loc_0019E8C1:
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019E8D8; /* jne: not equal / not zero */

loc_0019E8C7:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019E8D8:
    MEM8(edi) = 0xFF;
    goto loc_0019EB6A;

loc_0019E8E0:
    ecx = MEM32(ecx);
    edx = MEM32(edx + 4);
    xmm1.f[0] = (float)(int32_t)MEM32(edx + ebx); /* cvtsi2ss */
    edx = MEM32(ecx + 0x10);
    edi = MEM32(ecx + 4);
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = edx; /* cmovg */
    esi = ecx + -1;
    if (TEST_S(esi, esi)) goto loc_0019E90C; /* jl: less (signed <) */

loc_0019E905:
    xmm0.f[0] = MEMF(edi + esi * 8); /* movss */
    goto loc_0019E90F;

loc_0019E90C:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0019E90F:
    if (CMP_GE(ecx, edx)) goto loc_0019E92F; /* jge: greater or equal (signed >=) */

loc_0019E913:
    xmm4.f[0] = MEMF(edi + ecx * 8); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */

loc_0019E92F:
    ecx = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = edx; /* cmovg */
    esi = ecx + -1;
    if (TEST_S(esi, esi)) goto loc_0019E946; /* jl: less (signed <) */

loc_0019E93F:
    xmm1.f[0] = MEMF(edi + esi * 8); /* movss */
    goto loc_0019E949;

loc_0019E946:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019E949:
    if (CMP_GE(ecx, edx)) goto loc_0019E969; /* jge: greater or equal (signed >=) */

loc_0019E94D:
    xmm4.f[0] = MEMF(edi + ecx * 8); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */

loc_0019E969:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_0019E975; /* jbe: below or equal (unsigned <=) */

loc_0019E972:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0019E975:
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019EB6A; /* jne: not equal / not zero */

loc_0019E97F:
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0019EB6A;

loc_0019E989:
    eax = MEM32(edx + 4);
    edi = MEM32(ebx + eax);
    eax = ZX16(MEM16(ecx + 4));
    esi = MEM32(0x649B7C);
    eax = eax + edi;
    SET_LO8(eax, MEM8(eax + esi));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019E9B6; /* je: equal / zero */

loc_0019E9A2:
    eax = ZX8(LO8(eax));
    esi = eax + eax * 4;
    esi = esi << 4;
    esi = esi + 0x63DCB0;
    SET_LO8(eax, MEM8(esi + 0x45));
    goto loc_0019E9B9;

loc_0019E9B6:
    SET_LO8(eax, MEM8(ecx + 0x46));

loc_0019E9B9:
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019EB6A; /* je: equal / zero */

loc_0019E9C1:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (TEST_Z(eax, eax)) goto loc_0019EB6A; /* je: equal / zero */

loc_0019E9D7:
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    xmm4.f[0] = (float)(int32_t)MEM32(ebx + edx); /* cvtsi2ss */
    edx = MEM32(ecx + 0x10);
    xmm5.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = MEM32(ecx + 4);
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    ebp = (int32_t)xmm5.f[0]; /* cvttss2si */

loc_0019E9F4:
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    ecx = ebp;
    /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = edx; /* cmovg */
    esi = ecx + -1;
    if (TEST_S(esi, esi)) goto loc_0019EA0E; /* jl: less (signed <) */

loc_0019EA07:
    xmm0.f[0] = MEMF(edi + esi * 8); /* movss */
    goto loc_0019EA11;

loc_0019EA0E:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0019EA11:
    if (CMP_GE(ecx, edx)) goto loc_0019EA34; /* jge: greater or equal (signed >=) */

loc_0019EA15:
    xmm1.f[0] = MEMF(edi + ecx * 8); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    memcpy(xmm7.b, xmm5.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0019EA34:
    ecx = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = edx; /* cmovg */
    esi = ecx + -1;
    if (TEST_S(esi, esi)) goto loc_0019EA4B; /* jl: less (signed <) */

loc_0019EA44:
    xmm1.f[0] = MEMF(edi + esi * 8); /* movss */
    goto loc_0019EA4E;

loc_0019EA4B:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019EA4E:
    if (CMP_GE(ecx, edx)) goto loc_0019EA6E; /* jge: greater or equal (signed >=) */

loc_0019EA52:
    xmm6.f[0] = MEMF(edi + ecx * 8); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm7.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */

loc_0019EA6E:
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    ecx = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = edx; /* cmovg */
    esi = ecx + -1;
    /* test esi, esi - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    if (TEST_S(esi, esi)) goto loc_0019EA8E; /* jl: less (signed <) */

loc_0019EA87:
    xmm1.f[0] = MEMF(edi + esi * 8); /* movss */
    goto loc_0019EA91;

loc_0019EA8E:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019EA91:
    if (CMP_GE(ecx, edx)) goto loc_0019EAB1; /* jge: greater or equal (signed >=) */

loc_0019EA95:
    xmm6.f[0] = MEMF(edi + ecx * 8); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm7.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */

loc_0019EAB1:
    ecx = (int32_t)xmm4.f[0]; /* cvttss2si */
    /* cmp ecx, edx - flags set for next jcc */
    if (CMP_G(ecx, edx)) ecx = edx; /* cmovg */
    esi = ecx + -1;
    if (TEST_S(esi, esi)) goto loc_0019EAC8; /* jl: less (signed <) */

loc_0019EAC1:
    xmm2.f[0] = MEMF(edi + esi * 8); /* movss */
    goto loc_0019EACB;

loc_0019EAC8:
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */

loc_0019EACB:
    if (CMP_GE(ecx, edx)) goto loc_0019EAF4; /* jge: greater or equal (signed >=) */

loc_0019EACF:
    xmm5.f[0] = MEMF(edi + ecx * 8); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    xmm6.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    memcpy(xmm7.b, xmm4.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    xmm5.f[0] = MEMF(esp + 0x14); /* movss */

loc_0019EAF4:
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_0019EB17; /* jbe: below or equal (unsigned <=) */

loc_0019EAF9:
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_0019EB17; /* jbe: below or equal (unsigned <=) */

loc_0019EB02:
    xmm2.f[0] = MEMF(eax + 0x2C); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A5600); /* mulss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm1.f[0])) goto loc_0019EB34; /* ja: above (unsigned >) */

loc_0019EB17:
    SET_LO8(eax, MEM8(eax + 0x45));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019EB6A; /* je: equal / zero */

loc_0019EB1E:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if ((eax != 0)) goto loc_0019E9F4; /* jne: not equal / not zero */

loc_0019EB32:
    goto loc_0019EB6A;

loc_0019EB34:
    if (CMP_EQ(MEM8(eax + 0x46), 1)) goto loc_0019EB58; /* je: equal / zero */

loc_0019EB3A:
    xmm1.f[0] = MEMF(eax + 0x10); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019EB6A; /* jbe: below or equal (unsigned <=) */

loc_0019EB44:
    ecx = MEM32(esp + 0x10);
    MEM8(eax + 0x46) = 2;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(eax + 0x49));
    MEM8(ecx) = LO8(eax);
    goto loc_0019EB6A;

loc_0019EB58:
    SET_LO8(edx, MEM8(eax + 0x49));
    MEM8(eax + 0x46) = 2;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM8(eax) = LO8(edx);

loc_0019EB6A:
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(edx + 0x15));
    ebx = ebx + 4;
    edi++;
    eax = eax + edi;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(eax, ecx)) goto loc_0019E890; /* jl: less (signed <) */

loc_0019EB8E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0019EB92:
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}
