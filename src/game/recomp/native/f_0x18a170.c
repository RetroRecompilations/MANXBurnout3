#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018A170
 * Original: 0x0018A170 - 0x0018AB47 (2519 bytes, 496 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0018A170:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x214;
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x24), 16); /* movaps */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    memcpy(xmm6.b, (void *)XBOX_PTR(esp + 0x24), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xB4), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm3.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x84); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x8C); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    memcpy(xmm5.b, xmm4.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    ecx = esp;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x24), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0xBC); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0xB8); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = esp;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0xB4); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm5.b, 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    eax = eax + 0x30;
    memcpy(xmm7.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm7.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esp + 0xA4) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm6.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x134), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x84); /* movss */
    MEM32(esp + 0xC8) = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    eax = esp + 4;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, esi);
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x90); /* movss */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm5.b, 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x39BF24); /* movss */
    MEMF(esp + 0x170) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x174) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1874); /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1E0), xmm5.b, 16); /* movaps */
    MEMF(esp + 0x180) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x184) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x188) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x200), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x190), xmm0.b, 16); /* movaps */
    MEMF(esp + 0x164) = xmm4.f[0]; /* movss */
    ebx = 0x41A5E8;
    /* nop */

loc_0018A3D0:
    eax = MEM32(ebx + -40);
    ecx = MEM32(ebx + -36);
    eax = eax << 8;
    eax = eax + 0x5A9A90;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x68) = eax;
    eax = ecx + -1;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx); /* movss */
    MEMF(esp + 0x178) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x170), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0xC0) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x1A0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x160) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -8); /* movss */
    MEMF(esp + 0x168) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x160), 16); /* movaps */
    MEMF(esp + 0x150) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -4); /* movss */
    MEMF(esp + 0x154) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + -8); /* subss */
    MEMF(esp + 0x158) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x150), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x4C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x1C0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1D0), xmm1.b, 16); /* movaps */
    MEM32(esp + 0x6C) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0018A8A4; /* jle: less or equal (signed <=) */

loc_0018A49E:
    ecx = esp + 0x10;
    edx = esp + 0x110;
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xFC) = edx;
    goto loc_0018A4C0;

    /* nop */

loc_0018A4C0:
    esi = MEM32(ebp + 8);
    eax = esp + 0x190;
    PUSH32(esp, eax);
    esi = esi + 0xF0;
    ecx = esi;
    eax = esp + 0x214;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018A4DF:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x1C0;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = esp + 0x1B4;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018A500:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x6C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xDC); /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(ebx + -20); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + -24); /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = MEMF(ebx + -28); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x60DF78); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx + -32); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(esp + 0x94); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + -24); /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0xE4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0xE4); /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0xEC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0xEC); /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0xF4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0xF4); /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0xF8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0xF8); /* movss */
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x5C) = edx;
    xmm1.f[0] = MEMF(esp + 0x5C); /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(ebx + -16); /* movss */
    MEM32(esp + 0x54) = eax;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x54); /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x58) = ecx;
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x58); /* mulss */
    eax = esp + 0xE0;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(ebx + -12); /* movss */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    ecx = esp + 0xF0;
    xmm1.f[0] = MEMF(ecx); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0xFC);
    edi = MEM32(esp + 0xE8);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = MEMF(esp + 0xA0); /* movss */
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x200), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x180), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x1E0), 16); /* movaps */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xA8); /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    eax = esp + 0xD8;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x64;
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 0x10);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x8C;
    xmm0.f[0] = MEMF(edx); /* movss */
    SET_LO8(edx, MEM8(0x41A5B8));
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    ecx = MEM32(esp + 0x68);
    esi = MEM32(ecx + 0x1C);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x98); /* movss */
    eax = esp + 0x60;
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ecx + 0x24);
    eax = eax + eax * 2;
    eax = eax << 4;
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = eax + esi;
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0018A7D5; /* jne: not equal / not zero */

loc_0018A7BA:
    xmm1.f[0] = MEMF(ecx + 0xBC); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    xmm3.f[0] = MEMF(ecx + 0x30); /* movss */
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm3.f[0] > xmm1.f[0])) goto loc_0018A899; /* ja: above (unsigned >) */

loc_0018A7D5:
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x100); /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x104); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x108); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB8); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB0); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB4); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x24);
    /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0x34) = xmm2.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0018A87D; /* jne: not equal / not zero */

loc_0018A877:
    edx = MEM32(ecx + 0x20);
    MEM32(ecx + 0x24) = edx;

loc_0018A87D:
    esi = MEM32(ecx + 0x24);
    eax = MEM32(esp + 0x6C);
    esi--;
    MEM32(ecx + 0x24) = esi;
    ecx = MEM32(esp + 0x4C);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x6C) = eax;
    if (CMP_L(eax, ecx)) goto loc_0018A4C0; /* jl: less (signed <) */

loc_0018A899:
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */

loc_0018A8A4:
    ebx = ebx + 0x38;
    if (CMP_L(ebx, 0x41A700)) goto loc_0018A3D0; /* jl: less (signed <) */

loc_0018A8B3:
    eax = MEM32(0x754B74);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0018A8D4; /* jne: not equal / not zero */

loc_0018A8BC:
    xmm0.f[0] = MEMF(0x3B1DAC); /* movss */
    eax = eax | 1;
    MEM32(0x754B74) = eax;
    MEMF(0x754B70) = xmm0.f[0]; /* movss */

loc_0018A8D4:
    if (TEST_NZ(LO8(eax), 2)) goto loc_0018A8F0; /* jne: not equal / not zero */

loc_0018A8D8:
    xmm0.f[0] = MEMF(0x3B1DA8); /* movss */
    eax = eax | 2;
    MEM32(0x754B74) = eax;
    MEMF(0x754B6C) = xmm0.f[0]; /* movss */

loc_0018A8F0:
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xF0);
    ecx = MEM32(edi + 0xF4);
    xmm0.f[0] = MEMF(0x3B1738); /* movss */
    esi = edi + 0xF0;
    edx = eax;
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x754B6C); /* movss */
    edx = edx + ecx;
    eax = eax + edx;
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7964); /* movss */
    MEM32(esi) = eax;
    eax = eax + ecx;
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x754B70); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x100), 16); /* movaps */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B19DC); /* movss */
    eax = eax & 3;
    eax++;
    MEMF(esp + 0xB0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x190), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1A0), xmm1.b, 16); /* movaps */
    if ((eax == 0)) goto loc_0018AB2C; /* je: equal / zero */

loc_0018A9A5:
    ebx = eax;
    goto loc_0018A9B0;

    /* nop */

loc_0018A9B0:
    eax = esp + 0x190;
    PUSH32(esp, eax);
    ecx = esi;
    eax = esp + 0x1B4;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018A9C6:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x60); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x8C); /* movss */
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x78);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x5C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x5C); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x50); /* mulss */
    MEM32(esp + 0x54) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x58) = eax;
    xmm1.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    edx = esp + 0x64;
    xmm0.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    ecx = 0; /* xor self */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm2.b, 16); /* movaps */
    eax = edi;
    edx = 0; /* xor self */
    /* nop */

loc_0018AAE0:
    xmm1.f[0] = MEMF(eax + 0x20); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B16E0))) goto loc_0018AB03; /* jbe: below or equal (unsigned <=) */

loc_0018AAEE:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0018AAF8; /* jbe: below or equal (unsigned <=) */

loc_0018AAF3:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    ecx = eax;

loc_0018AAF8:
    eax = eax + 0x30;
    edx++;
    if (CMP_L(edx, 5)) goto loc_0018AAE0; /* jl: less (signed <) */

loc_0018AB01:
    goto loc_0018AB05;

loc_0018AB03:
    ecx = eax;

loc_0018AB05:
    ebx--;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x140), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm2.b, 16); /* movaps */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x24) = 0;
    if ((ebx != 0)) goto loc_0018A9B0; /* jne: not equal / not zero */

loc_0018AB2C:
    eax = MEM32(esp + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40F270);
    PUSH32(esp, 0); sub_001516C0(); /* call 0x001516C0 */

loc_0018AB3E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
