#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E2A0
 * Original: 0x0019E2A0 - 0x0019E42F (399 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E2A0:
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ZX16(MEM16(edi + 4));
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0019E2B1:
    edx = MEM32(0x649B7C);
    eax = ZX16(LO16(eax));
    esi = esi + edx;
    SET_LO8(eax, MEM8(eax + esi));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019E2E4; /* jne: not equal / not zero */

loc_0019E2C3:
    SET_LO8(eax, MEM8(edi + 0x46));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019E2D1; /* jne: not equal / not zero */

loc_0019E2CA:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0019E2D1:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    POP32(esp, edi);
    eax = eax + 0x63DCB0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0019E2E4:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    SET_LO8(ecx, MEM8(eax + 0x45));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0019E42A; /* je: equal / zero */

loc_0019E2FE:
    edx = MEM32(edi);
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(ecx));
    esi = ecx + ecx * 4;
    ecx = MEM32(edx + 0x10);
    esi = esi << 4;
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 4);
    esi = esi + 0x63DCB0;
    edx = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp edx, ecx - flags set for next jcc */
    if (CMP_G(edx, ecx)) edx = ecx; /* cmovg */
    edi = edx + -1;
    if (TEST_S(edi, edi)) goto loc_0019E336; /* jl: less (signed <) */

loc_0019E32E:
    xmm0.f[0] = MEMF(ebp + edi * 8); /* movss */
    goto loc_0019E339;

loc_0019E336:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0019E339:
    if (CMP_GE(edx, ecx)) goto loc_0019E35A; /* jge: greater or equal (signed >=) */

loc_0019E33D:
    xmm3.f[0] = MEMF(ebp + edx * 8); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0019E35A:
    xmm3.f[0] = MEMF(esp + 0x10); /* movss */
    edx = (int32_t)xmm3.f[0]; /* cvttss2si */
    edi = edx;
    /* cmp edi, ecx - flags set for next jcc */
    if (CMP_G(edi, ecx)) edi = ecx; /* cmovg */
    PUSH32(esp, ebx);
    ebx = edi + -1;
    if (TEST_S(ebx, ebx)) goto loc_0019E37B; /* jl: less (signed <) */

loc_0019E373:
    xmm2.f[0] = MEMF(ebp + ebx * 8); /* movss */
    goto loc_0019E37E;

loc_0019E37B:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */

loc_0019E37E:
    /* cmp edi, ecx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(edi, ecx)) goto loc_0019E3A3; /* jge: greater or equal (signed >=) */

loc_0019E383:
    xmm4.f[0] = MEMF(ebp + edi * 8); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */

loc_0019E3A3:
    /* cmp edx, ecx - flags set for next jcc */
    if (CMP_G(edx, ecx)) edx = ecx; /* cmovg */
    edi = edx + -1;
    /* test edi, edi - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    if (TEST_S(edi, edi)) goto loc_0019E3BE; /* jl: less (signed <) */

loc_0019E3B6:
    xmm0.f[0] = MEMF(ebp + edi * 8); /* movss */
    goto loc_0019E3C1;

loc_0019E3BE:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0019E3C1:
    if (CMP_GE(edx, ecx)) goto loc_0019E3E2; /* jge: greater or equal (signed >=) */

loc_0019E3C5:
    xmm2.f[0] = MEMF(ebp + edx * 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */

loc_0019E3E2:
    xmm2.f[0] = MEMF(esi + 0x30); /* movss */
    edx = (int32_t)xmm2.f[0]; /* cvttss2si */
    /* cmp edx, ecx - flags set for next jcc */
    if (CMP_G(edx, ecx)) edx = ecx; /* cmovg */
    edi = edx + -1;
    if (TEST_S(edi, edi)) goto loc_0019E3FD; /* jl: less (signed <) */

loc_0019E3F7:
    xmm1.f[0] = MEMF(ebp + edi * 8); /* movss */

loc_0019E3FD:
    if (CMP_GE(edx, ecx)) goto loc_0019E41E; /* jge: greater or equal (signed >=) */

loc_0019E401:
    xmm3.f[0] = MEMF(ebp + edx * 8); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0019E41E:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    POP32(esp, ebp);
    if ((xmm0.f[0] > xmm4.f[0])) goto loc_0019E42A; /* ja: above (unsigned >) */

loc_0019E428:
    eax = esi;

loc_0019E42A:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
