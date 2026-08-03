#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E430
 * Original: 0x0019E430 - 0x0019E5A8 (376 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E430:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp + 0x44));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019E45B; /* jne: not equal / not zero */

loc_0019E43C:
    SET_LO8(eax, MEM8(ebp + 0x45));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019E449; /* jne: not equal / not zero */

loc_0019E443:
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0019E449:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0019E45B:
    SET_LO8(ecx, MEM8(ebp + 0x45));
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019E5A4; /* je: equal / zero */

loc_0019E475:
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + ecx * 4;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 4);
    edi = edi << 4;
    edi = edi + 0x63DCB0;
    esi = (int32_t)xmm1.f[0]; /* cvttss2si */
    /* cmp esi, edx - flags set for next jcc */
    if (CMP_G(esi, edx)) esi = edx; /* cmovg */
    PUSH32(esp, ebx);
    ebx = esi + -1;
    if (TEST_S(ebx, ebx)) goto loc_0019E4B2; /* jl: less (signed <) */

loc_0019E4AB:
    xmm0.f[0] = MEMF(ecx + ebx * 8); /* movss */
    goto loc_0019E4B5;

loc_0019E4B2:
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */

loc_0019E4B5:
    if (CMP_GE(esi, edx)) goto loc_0019E4D5; /* jge: greater or equal (signed >=) */

loc_0019E4B9:
    xmm2.f[0] = MEMF(ecx + esi * 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */

loc_0019E4D5:
    xmm2.f[0] = MEMF(ebp + 0x30); /* movss */
    esi = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp esi, edx - flags set for next jcc */
    if (CMP_G(esi, edx)) esi = edx; /* cmovg */
    ebx = esi + -1;
    if (TEST_S(ebx, ebx)) goto loc_0019E4F1; /* jl: less (signed <) */

loc_0019E4EA:
    xmm1.f[0] = MEMF(ecx + ebx * 8); /* movss */
    goto loc_0019E4F4;

loc_0019E4F1:
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */

loc_0019E4F4:
    if (CMP_GE(esi, edx)) goto loc_0019E514; /* jge: greater or equal (signed >=) */

loc_0019E4F8:
    xmm3.f[0] = MEMF(ecx + esi * 8); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019E514:
    xmm2.f[0] = MEMF(ebp + 0x30); /* movss */
    esi = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp esi, edx - flags set for next jcc */
    if (CMP_G(esi, edx)) esi = edx; /* cmovg */
    ebx = esi + -1;
    /* test ebx, ebx - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    if (TEST_S(ebx, ebx)) goto loc_0019E534; /* jl: less (signed <) */

loc_0019E52D:
    xmm1.f[0] = MEMF(ecx + ebx * 8); /* movss */
    goto loc_0019E537;

loc_0019E534:
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */

loc_0019E537:
    if (CMP_GE(esi, edx)) goto loc_0019E557; /* jge: greater or equal (signed >=) */

loc_0019E53B:
    xmm3.f[0] = MEMF(ecx + esi * 8); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019E557:
    xmm3.f[0] = MEMF(edi + 0x30); /* movss */
    esi = (int32_t)xmm3.f[0]; /* cvttss2si */
    /* cmp esi, edx - flags set for next jcc */
    if (CMP_G(esi, edx)) esi = edx; /* cmovg */
    ebx = esi + -1;
    if (TEST_S(ebx, ebx)) goto loc_0019E573; /* jl: less (signed <) */

loc_0019E56C:
    xmm2.f[0] = MEMF(ecx + ebx * 8); /* movss */
    goto loc_0019E576;

loc_0019E573:
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */

loc_0019E576:
    /* cmp esi, edx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(esi, edx)) goto loc_0019E597; /* jge: greater or equal (signed >=) */

loc_0019E57B:
    xmm4.f[0] = MEMF(ecx + esi * 8); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */

loc_0019E597:
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0019E5A2; /* ja: above (unsigned >) */

loc_0019E5A0:
    eax = edi;

loc_0019E5A2:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019E5A4:
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
