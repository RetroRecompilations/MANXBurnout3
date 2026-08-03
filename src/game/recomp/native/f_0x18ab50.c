#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018AB50
 * Original: 0x0018AB50 - 0x0018AF7F (1071 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0018AB50:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + 0x10);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    xmm1.f[0] = MEMF(0x3B194C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16A4); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x60DF78); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x41A57C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x41A580); /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(0x41A578); /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x40) (packed 4xfloat) */
    xmm3.f[0] = MEMF(0x41A584); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x41A58C); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x41A588); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x41A5A0); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x41A594); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm3.b, 16); /* movaps */
    xmm3.f[0] = MEMF(0x41A5A8); /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x41A59C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x41A5A4); /* movss */
    edi = MEM32(0x41A570);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x41A590); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    esi = eax;
    eax = MEM32(0x41A574);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edi = edi << 8;
    esi = esi + 0xF0;
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    edi = edi + 0x5A9A90;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm1.b, 16); /* movaps */
    MEM32(esp + 0x2C) = eax;
    goto loc_0018AD30;

    /* nop */

loc_0018AD30:
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = esp + 0xF4;
    PUSH32(esp, 0); sub_0017E6E0(); /* call 0x0017E6E0 */

loc_0018AD46:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0xE4;
    memcpy((void *)XBOX_PTR(esp + 0x14), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018AD64:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esi + 4);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    eax = 0x3832AC;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(esi);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    if (CMP_GE(eax & eax, 0)) goto loc_0018ADD1; /* jge: greater or equal (signed >=) */

loc_0018ADCB:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018ADD1:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x120), 16); /* movaps */
    ecx = esp + 0x28;
    edx = esp + 0xA0;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x104;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018AE22:
    xmm0.f[0] = MEMF(0x41A598); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x6C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 0xC);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = esp + 0x68;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 0x64;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebp + 8);
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    SET_LO8(eax, MEM8(0x41A5B4));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x41A5AC); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x41A5B0); /* movss */
    ecx = edi + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AEC4; /* jne: not equal / not zero */

loc_0018AEC2:
    ecx = edi;

loc_0018AEC4:
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    eax = eax + eax * 2;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm3.f[0] = MEMF(esp + 0x50); /* movss */
    eax = eax << 4;
    eax = eax + edx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x54); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0018AF67; /* jne: not equal / not zero */

loc_0018AF61:
    edx = MEM32(ecx + 4);
    MEM32(ecx + 8) = edx;

loc_0018AF67:
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x2C);
    edx--;
    eax--;
    MEM32(ecx + 8) = edx;
    MEM32(esp + 0x2C) = eax;
    if ((eax != 0)) goto loc_0018AD30; /* jne: not equal / not zero */

loc_0018AF7D:
    POP32(esp, edi);
    POP32(esp, esi);

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
