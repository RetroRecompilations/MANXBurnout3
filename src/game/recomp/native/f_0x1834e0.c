#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001834E0
 * Original: 0x001834E0 - 0x001839D3 (1267 bytes, 332 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001834E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001834E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    ecx = MEM32(ebp + 0x20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = 0xE;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_0018352B:
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x20);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = 0xF;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00183552:
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    edx = MEM32(ebp + 0x24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = 0x10;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00183586:
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = 0x11;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_001835AD:
    ecx = MEM32(ebp + 0x1C);
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3980F8); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = 1;
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_001835DA:
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    esi = ebx + 0x64558;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    MEM32(esi) = eax;
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    ecx = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = ecx >> 2;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = eax + ecx * 4;
    ecx = MEM32(ebp + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    eax = esp + 0x1C;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ebp + 0x20);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3B1690); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B1D1C); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1948); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ebp + 0x10);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B16D0); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B03E4); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A5600); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B03E8); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm2.b, 16); /* movaps */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = (int32_t)MEMF(ebp + 0x18); /* cvttss2si */
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    if (CMP_LE(eax & eax, 0)) goto loc_001839CA; /* jle: less or equal (signed <=) */

loc_00183791:
    MEM32(esp + 0x1C) = eax;

loc_00183795:
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = esp + 0x124;
    PUSH32(esp, 0); sub_0017E6E0(); /* call 0x0017E6E0 */

loc_001837AB:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x114;
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_001837C9:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    edx = MEM32(esi);
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = edx;
    edi = edx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    eax = eax << 0x10;
    edi = edi + ecx;
    eax = eax + edi;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    if (CMP_GE(eax & eax, 0)) goto loc_0018380C; /* jge: greater or equal (signed >=) */

loc_00183806:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018380C:
    /* test edx, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x140), 16); /* movaps */
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    if (CMP_GE(edx & edx, 0)) goto loc_00183847; /* jge: greater or equal (signed >=) */

loc_00183841:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00183847:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    edx = esp + 0x18;
    eax = esp + 0x4C;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001838CE; /* jbe: below or equal (unsigned <=) */

loc_001838B1:
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = esp + 0x48;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */

loc_001838CE:
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x104;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_001838E4:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebx + 0x64578);
    edx = MEM32(esp + 0x20);
    xmm5.f[0] = MEMF(ebp + 0x1C); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    eax = 0x3832AC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    PUSH32(esp, ecx);
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm1.b, 16); /* movaps */
    PUSH32(esp, edx);
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x38); /* movss */
    ecx = eax + eax * 2 + 6;
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = ebx + ecx * 8;
    edi = esp + 0x9C;
    edx = esp + 0x6C;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_0003C0D0(); /* call 0x0003C0D0 */

loc_001839AA:
    eax = MEM32(esp + 0x14);
    eax++;
    /* cmp eax, 4 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(eax, 4)) goto loc_001839C0; /* jne: not equal / not zero */

loc_001839B8:
    MEM32(esp + 0x14) = 0;

loc_001839C0:
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    if ((MEM32(esp + 0x1C) != 0)) goto loc_00183795; /* jne: not equal / not zero */

loc_001839CA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
