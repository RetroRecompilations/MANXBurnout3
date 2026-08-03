#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00183140
 * Original: 0x00183140 - 0x001834D5 (917 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183140(void)
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

loc_00183140:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    xmm0.f[0] = MEMF(0x41A52C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1C); /* addss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = ecx + ecx * 2;
    edx = MEM32(eax * 4 + 0x60DFE0);
    eax = eax * 4 + 0x60DFE0;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xE150);
    /* cmp ecx, 2 - flags set for next jcc */
    edx = edx + ebx + 0x1890;
    MEM32(esp + 0x50) = edx;
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(0x3B1730); /* movss */
    PUSH32(esp, edi);
    MEMF(0x41A52C) = xmm0.f[0]; /* movss */
    if (CMP_NE(ecx, 2)) goto loc_001831B6; /* jne: not equal / not zero */

loc_001831A4:
    xmm6.f[0] = MEMF(0x3A69B8); /* movss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_001831C1;

loc_001831B6:
    xmm4.f[0] = MEMF(0x3B1684); /* movss */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */

loc_001831C1:
    /* cmp ecx, 3 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    edi = esp + 0x18;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi); /* movss */
    edi = MEM32(ebp + 0x18);
    memcpy(xmm2.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    if (CMP_NE(ecx, 3)) goto loc_0018322C; /* jne: not equal / not zero */

loc_001831F7:
    ecx = MEM32(ebp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    goto loc_0018325C;

loc_0018322C:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */

loc_0018325C:
    /* test edx, edx - flags set for next jcc */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A69BC); /* mulss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    eax = esp + 0x18;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ebp + 0xC);
    memcpy(xmm3.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    ecx = esp + 0x18;
    xmm1.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 0x10);
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    if (CMP_LE(edx & edx, 0)) goto loc_001834CC; /* jle: less or equal (signed <=) */

loc_0018335F:
    esi = ebx + 0x64558;
    MEM32(esp + 0x18) = edx;
    goto loc_00183378;

loc_0018336B:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x100), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */

loc_00183378:
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
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
    if (CMP_GE(eax & eax, 0)) goto loc_0018339E; /* jge: greater or equal (signed >=) */

loc_00183398:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018339E:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    edx = eax;
    ecx = esp + 0x1C;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    if (CMP_GE(eax & eax, 0)) goto loc_001833E8; /* jge: greater or equal (signed >=) */

loc_001833E2:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001833E8:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0xE4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00183410:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 0x5C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x5C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00183486; /* jbe: below or equal (unsigned <=) */

loc_00183469:
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    ecx = esp + 0x58;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */

loc_00183486:
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0xD4;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018349C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebx + 0x64578);
    ecx = MEM32(esp + 0x54);
    xmm5.f[0] = MEMF(ebp + 0x20); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0x48;
    eax = esp + 0x78;
    memcpy((void *)XBOX_PTR(esp + 0x78), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00043FC0(); /* call 0x00043FC0 */

loc_001834C2:
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_0018336B; /* jne: not equal / not zero */

loc_001834CC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
