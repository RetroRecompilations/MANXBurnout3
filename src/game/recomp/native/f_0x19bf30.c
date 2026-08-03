#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019BF30
 * Original: 0x0019BF30 - 0x0019C1ED (701 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BF30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019BF30:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(ebp, 1)) goto loc_0019BF4A; /* jne: not equal / not zero */

loc_0019BF3F:
    SET_LO8(eax, MEM8(ebx + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C1E8; /* je: equal / zero */

loc_0019BF4A:
    eax = MEM32(ebx);
    ecx = MEM32(eax + ebp * 4);
    SET_LO8(edx, MEM8(ebx + ebp + 0x10));
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    PUSH32(esp, edi);
    edi = MEM32(eax + ebp * 4 + 0x18);
    eax = MEM32(eax + ebp * 4 + 0x28);
    esi = esi + 0x60EC2C;
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_0019BFD7; /* je: equal / zero */

loc_0019BF6D:
    edx = ZX8(LO8(edx));
    edi = edx + edx * 4;
    edi = edi << 4;
    edi = edi + 0x63DCB0;
    edx = ZX8(MEM8(edi + 0x41));
    if (CMP_EQ(edx, ecx)) goto loc_0019BFA7; /* je: equal / zero */

loc_0019BF84:
    if (CMP_NE(MEM8(edi + 0x46), 2)) goto loc_0019BF9B; /* jne: not equal / not zero */

loc_0019BF8A:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM8(edi + 0x46) = 1;
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */

loc_0019BF9B:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x10) = 0xFF;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019BFA7:
    ecx = MEM32(edi + 0x30);
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0019E210(); /* call 0x0019E210 */

loc_0019BFB6:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019BFC1; /* jbe: below or equal (unsigned <=) */

loc_0019BFBE:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0019BFC1:
    if (CMP_NE(MEM8(edi + 0x46), 2)) goto loc_0019C1E6; /* jne: not equal / not zero */

loc_0019BFCB:
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019BFD7:
    edx = ZX16(MEM16(esi + 4));
    edx = edx + MEM32(0x649B7C);
    SET_LO8(ecx, MEM8(edx + eax));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019BFFD; /* je: equal / zero */

loc_0019BFE9:
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    SET_LO8(ecx, MEM8(ecx + 0x45));
    goto loc_0019C000;

loc_0019BFFD:
    SET_LO8(ecx, MEM8(esi + 0x46));

loc_0019C000:
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019C1E6; /* je: equal / zero */

loc_0019C009:
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    if (TEST_Z(ecx, ecx)) goto loc_0019C1E6; /* je: equal / zero */

loc_0019C020:
    edx = MEM32(esp + 0x14);
    SET_LO8(ebx, MEM8(ecx + 0x49));
    SET_LO8(edx, MEM8(edx + 0x17));
    if (CMP_NE(LO8(ebx), LO8(edx))) goto loc_0019C037; /* jne: not equal / not zero */

loc_0019C02E:
    if (CMP_NE(LO8(edx), 0xFF)) goto loc_0019C04B; /* jne: not equal / not zero */

loc_0019C033:
    ecx = 0; /* xor self */
    goto loc_0019C05A;

loc_0019C037:
    edx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(edx + 0x18));
    if (CMP_NE(LO8(ebx), LO8(edx))) goto loc_0019C075; /* jne: not equal / not zero */

loc_0019C042:
    if (CMP_NE(LO8(edx), 0xFF)) goto loc_0019C04B; /* jne: not equal / not zero */

loc_0019C047:
    ecx = 0; /* xor self */
    goto loc_0019C05A;

loc_0019C04B:
    ecx = ZX8(LO8(edx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;

loc_0019C05A:
    SET_LO8(ecx, MEM8(ecx + 0x45));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019C1E6; /* je: equal / zero */

loc_0019C066:
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;

loc_0019C075:
    if (TEST_Z(ecx, ecx)) goto loc_0019C1E6; /* je: equal / zero */

loc_0019C07D:
    esi = MEM32(esi);
    edx = MEM32(esi + 0x10);
    esi = MEM32(esi + 4);
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    ebx = (int32_t)xmm5.f[0]; /* cvttss2si */
    xmm4.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    /* nop */

loc_0019C0A0:
    xmm2.f[0] = MEMF(ecx + 0x30); /* movss */
    eax = ebx;
    /* cmp eax, edx - flags set for next jcc */
    if (CMP_G(eax, edx)) eax = edx; /* cmovg */
    edi = eax + -1;
    if (TEST_S(edi, edi)) goto loc_0019C0BA; /* jl: less (signed <) */

loc_0019C0B3:
    xmm0.f[0] = MEMF(esi + edi * 8); /* movss */
    goto loc_0019C0BD;

loc_0019C0BA:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0019C0BD:
    if (CMP_GE(eax, edx)) goto loc_0019C0E0; /* jge: greater or equal (signed >=) */

loc_0019C0C1:
    xmm1.f[0] = MEMF(esi + eax * 8); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    memcpy(xmm7.b, xmm5.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0019C0E0:
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp eax, edx - flags set for next jcc */
    if (CMP_G(eax, edx)) eax = edx; /* cmovg */
    edi = eax + -1;
    if (TEST_S(edi, edi)) goto loc_0019C0F7; /* jl: less (signed <) */

loc_0019C0F0:
    xmm1.f[0] = MEMF(esi + edi * 8); /* movss */
    goto loc_0019C0FA;

loc_0019C0F7:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019C0FA:
    if (CMP_GE(eax, edx)) goto loc_0019C11A; /* jge: greater or equal (signed >=) */

loc_0019C0FE:
    xmm6.f[0] = MEMF(esi + eax * 8); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm7.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */

loc_0019C11A:
    xmm2.f[0] = MEMF(ecx + 0x30); /* movss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp eax, edx - flags set for next jcc */
    if (CMP_G(eax, edx)) eax = edx; /* cmovg */
    edi = eax + -1;
    /* test edi, edi - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    if (TEST_S(edi, edi)) goto loc_0019C13A; /* jl: less (signed <) */

loc_0019C133:
    xmm1.f[0] = MEMF(esi + edi * 8); /* movss */
    goto loc_0019C13D;

loc_0019C13A:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019C13D:
    if (CMP_GE(eax, edx)) goto loc_0019C15D; /* jge: greater or equal (signed >=) */

loc_0019C141:
    xmm6.f[0] = MEMF(esi + eax * 8); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm7.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */

loc_0019C15D:
    eax = (int32_t)xmm4.f[0]; /* cvttss2si */
    /* cmp eax, edx - flags set for next jcc */
    if (CMP_G(eax, edx)) eax = edx; /* cmovg */
    edi = eax + -1;
    if (TEST_S(edi, edi)) goto loc_0019C174; /* jl: less (signed <) */

loc_0019C16D:
    xmm2.f[0] = MEMF(esi + edi * 8); /* movss */
    goto loc_0019C177;

loc_0019C174:
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */

loc_0019C177:
    if (CMP_GE(eax, edx)) goto loc_0019C1A0; /* jge: greater or equal (signed >=) */

loc_0019C17B:
    xmm5.f[0] = MEMF(esi + eax * 8); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    memcpy(xmm7.b, xmm4.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */

loc_0019C1A0:
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_0019C1AE; /* jbe: below or equal (unsigned <=) */

loc_0019C1A5:
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm3.f[0])) goto loc_0019C1D2; /* ja: above (unsigned >) */

loc_0019C1AE:
    SET_LO8(ecx, MEM8(ecx + 0x45));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019C1E6; /* je: equal / zero */

loc_0019C1B6:
    eax = ZX8(LO8(ecx));
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    if ((ecx != 0)) goto loc_0019C0A0; /* jne: not equal / not zero */

loc_0019C1CB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019C1D2:
    SET_LO8(eax, MEM8(ecx + 0x49));
    MEM8(ecx + 0x46) = 2;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM8(ecx + ebp + 0x10) = LO8(eax);

loc_0019C1E6:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019C1E8:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
