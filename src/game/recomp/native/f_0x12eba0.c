#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012EBA0
 * Original: 0x0012EBA0 - 0x0012F815 (3189 bytes, 693 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EBA0(void)
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

loc_0012EBA0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x118;
    eax = MEM32(ebp + 8);
    edx = MEM32(0x3EBFAC);
    ecx = MEM32(eax + 0x18);
    edx = edx << 6;
    edx = edx + ecx + 0xA0;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 0x4C) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x50) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(eax + 0x38);
    edx = edx - 0;
    MEM32(esp + 0x54) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x4C), 16); /* movaps */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    if ((edx == 0)) goto loc_0012EC09; /* je: equal / zero */

loc_0012EBF1:
    edx--;
    if ((edx == 0)) goto loc_0012EC00; /* je: equal / zero */

loc_0012EBF4:
    edx--;
    if ((edx == 0)) goto loc_0012EC09; /* je: equal / zero */

loc_0012EBF7:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012EC10;

loc_0012EC00:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_0012EC10;

loc_0012EC09:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEE0), 16); /* movaps */

loc_0012EC10:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x150), 16); /* movaps */
    xmm4.f[0] = MEMF(0x3B16E8); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0xA7C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3925A4); /* movss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x160), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x264); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x164); /* subss */
    ecx = MEM32(esp + 0x60);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x64);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x48) = ecx;
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x6C);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEM32(esp + 0x4C) = edx;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    ecx = esp + 0x90;
    edx = esp + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = MEM32(0x3EBFB0);
    ecx = MEM32(eax + 0x18);
    edx = edx << 6;
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edx = edx + ecx + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x38);
    edx = edx - 0;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    if ((edx == 0)) goto loc_0012EDB9; /* je: equal / zero */

loc_0012EDA1:
    edx--;
    if ((edx == 0)) goto loc_0012EDB0; /* je: equal / zero */

loc_0012EDA4:
    edx--;
    if ((edx == 0)) goto loc_0012EDB9; /* je: equal / zero */

loc_0012EDA7:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012EDC0;

loc_0012EDB0:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_0012EDC0;

loc_0012EDB9:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEE0), 16); /* movaps */

loc_0012EDC0:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x150), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0xA7C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x160), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x264); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x164); /* subss */
    ecx = MEM32(esp + 0x60);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x64);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x28) = ecx;
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x44); /* subss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x6C);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEM32(esp + 0x2C) = edx;
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = esp + 0xB0;
    edx = esp + 0xC0;
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = MEM32(0x3EBFBC);
    ecx = MEM32(eax + 0x18);
    edx = edx << 6;
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edx = edx + ecx + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x38);
    edx = edx - 0;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    if ((edx == 0)) goto loc_0012EF51; /* je: equal / zero */

loc_0012EF39:
    edx--;
    if ((edx == 0)) goto loc_0012EF48; /* je: equal / zero */

loc_0012EF3C:
    edx--;
    if ((edx == 0)) goto loc_0012EF51; /* je: equal / zero */

loc_0012EF3F:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012EF58;

loc_0012EF48:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_0012EF58;

loc_0012EF51:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF00), 16); /* movaps */

loc_0012EF58:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x90), 16); /* movaps */
    xmm4.f[0] = MEMF(esp + 0x50); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0xA70); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x224); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xA4); /* subss */
    ecx = MEM32(esp + 0x60);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    edx = MEM32(esp + 0x64);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x68);
    memcpy(xmm5.b, xmm4.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x40); /* subss */
    MEM32(esp + 0x28) = ecx;
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x54); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x6C);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEM32(esp + 0x2C) = edx;
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = esp + 0xF0;
    edx = esp + 0x100;
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = MEM32(0x3EBFC0);
    ecx = MEM32(eax + 0x18);
    edx = edx << 6;
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edx = edx + ecx + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x38);
    edx = edx - 0;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    if ((edx == 0)) goto loc_0012F0FF; /* je: equal / zero */

loc_0012F0E7:
    edx--;
    if ((edx == 0)) goto loc_0012F0F6; /* je: equal / zero */

loc_0012F0EA:
    edx--;
    if ((edx == 0)) goto loc_0012F0FF; /* je: equal / zero */

loc_0012F0ED:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012F106;

loc_0012F0F6:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF20), 16); /* movaps */
    goto loc_0012F106;

loc_0012F0FF:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF00), 16); /* movaps */

loc_0012F106:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x90), 16); /* movaps */
    xmm4.f[0] = MEMF(esp + 0x60); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0xA70); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0x224); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xA4); /* subss */
    ecx = MEM32(esp + 0x50);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x54); /* addss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x58);
    memcpy(xmm5.b, xmm4.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x40); /* subss */
    MEM32(esp + 0x28) = ecx;
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x64); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x5C);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    MEM32(esp + 0x2C) = edx;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = esp + 0x70;
    edx = esp + 0x80;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    ecx = MEM32(0x3EBFC4);
    edx = MEM32(eax + 0x18);
    ecx = ecx << 6;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = ecx + edx + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 0x38);
    ecx = ecx - 0;
    MEM32(esp + 0x28) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if ((ecx == 0)) goto loc_0012F2A4; /* je: equal / zero */

loc_0012F28C:
    ecx--;
    if ((ecx == 0)) goto loc_0012F29B; /* je: equal / zero */

loc_0012F28F:
    ecx--;
    if ((ecx == 0)) goto loc_0012F2A4; /* je: equal / zero */

loc_0012F292:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012F2AB;

loc_0012F29B:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF30), 16); /* movaps */
    goto loc_0012F2AB;

loc_0012F2A4:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEF0), 16); /* movaps */

loc_0012F2AB:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x40); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0xD0;
    ecx = esp + 0xE0;
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x98); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xA8); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0012F397; /* jbe: below or equal (unsigned <=) */

loc_0012F369:
    edx = MEM32(eax + 0x14);
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 0x838); /* subss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x110) = xmm2.f[0]; /* movss */

loc_0012F397:
    xmm2.f[0] = MEMF(esp + 0xB8); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC8); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0012F3E2; /* jbe: below or equal (unsigned <=) */

loc_0012F3B7:
    ecx = MEM32(eax + 0x14);
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x878); /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */

loc_0012F3E2:
    xmm2.f[0] = MEMF(esp + 0x108); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xF8); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0012F433; /* jbe: below or equal (unsigned <=) */

loc_0012F405:
    edx = MEM32(eax + 0x14);
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 0x778); /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x114) = xmm2.f[0]; /* movss */

loc_0012F433:
    xmm2.f[0] = MEMF(esp + 0x88); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x78); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0012F47E; /* jbe: below or equal (unsigned <=) */

loc_0012F453:
    ecx = MEM32(eax + 0x14);
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x7B8); /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7.f[0] = MEMF(esp + 0x18); /* movss */
    xmm7.f[0] = xmm7.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */

loc_0012F47E:
    xmm2.f[0] = MEMF(esp + 0xD4); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xE4); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0012F4CC; /* jbe: below or equal (unsigned <=) */

loc_0012F4A1:
    edx = MEM32(eax + 0x14);
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 0x8F4); /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    xmm5.f[0] = xmm5.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */

loc_0012F4CC:
    ecx = MEM32(eax + 0x18);
    xmm0.f[0] = MEMF(ecx + 0x1A0); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x1E0); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(edx + 0x830); /* movss */
    xmm1.f[0] = MEMF(edx + 0x870); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x1A0); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x1E0); /* subss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(ecx + 0x1A0); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x1E0); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x18);
    xmm6.f[0] = MEMF(ecx + 0x770); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(edx + 0xE0); /* subss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm4.f[0] = MEMF(ecx + 0x7B0); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(edx + 0x120); /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm5.f[0] = MEMF(0x39B2B0); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7.f[0] = MEMF(esp + 0x114); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7.f[0] = MEMF(esp + 0x110); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x11C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x118) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x118); /* movss */
    ecx = MEM32(eax + 0x14);
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    if (CMP_EQ(MEM8(ecx + 0x1014), 2)) goto loc_0012F68B; /* je: equal / zero */

loc_0012F61A:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1698); /* mulss */
    edx = MEM32(eax + 0x38);
    /* test edx, edx - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x110); /* addss */
    xmm5.f[0] = MEMF(0x3B1730); /* movss */
    if (TEST_Z(edx, edx)) goto loc_0012F64E; /* je: equal / zero */

loc_0012F646:
    xmm5.f[0] = MEMF(0x5A8284); /* movss */

loc_0012F64E:
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm5.f[0])) goto loc_0012F66B; /* jbe: below or equal (unsigned <=) */

loc_0012F653:
    SET_LO8(edx, MEM8(ecx + 0x1015));
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(ecx + 0x1014) = 2;
    MEM8(ecx + 0x1015) = LO8(edx);
    goto loc_0012F68B;

loc_0012F66B:
    /* test edx, edx - flags set for next jcc */
    xmm5.f[0] = MEMF(0x3A69C4); /* movss */
    if (TEST_Z(edx, edx)) goto loc_0012F67F; /* je: equal / zero */

loc_0012F677:
    xmm5.f[0] = MEMF(0x5A82A4); /* movss */

loc_0012F67F:
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm5.f[0])) goto loc_0012F68B; /* jbe: below or equal (unsigned <=) */

loc_0012F684:
    MEM8(ecx + 0x1014) = 1;

loc_0012F68B:
    ecx = MEM32(eax + 0x1C);
    /* test ecx, ecx - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B1820); /* movss */
    xmm5.f[0] = MEMF(0x3B172C); /* movss */
    MEMF(esp + 0x118) = xmm0.f[0]; /* movss */
    memcpy(xmm7.b, xmm5.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0012F6FD; /* je: equal / zero */

loc_0012F6BA:
    SET_LO8(ecx, MEM8(ecx + 0x215));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0012F6CF; /* je: equal / zero */

loc_0012F6C5:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0012F6CF; /* je: equal / zero */

loc_0012F6CA:
    if (CMP_NE(LO8(ecx), 3)) goto loc_0012F6FD; /* jne: not equal / not zero */

loc_0012F6CF:
    xmm0.f[0] = MEMF(0x3B1D2C); /* movss */
    xmm5.f[0] = MEMF(0x3B17A8); /* movss */
    xmm7.f[0] = MEMF(0x3A2D1C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0012F706;

loc_0012F6FD:
    xmm5.f[0] = MEMF(esp + 0x118); /* movss */

loc_0012F706:
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm3.f[0])) goto loc_0012F71B; /* ja: above (unsigned >) */

loc_0012F711:
    /* comiss xmm1.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm7.f[0])) goto loc_0012F71B; /* ja: above (unsigned >) */

loc_0012F716:
    /* comiss xmm5.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm5.f[0] <= xmm1.f[0])) goto loc_0012F73D; /* jbe: below or equal (unsigned <=) */

loc_0012F71B:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x40);
    SET_LO8(ecx, MEM8(edx + 0xD));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0012F73D; /* jle: less or equal (signed <=) */

loc_0012F728:
    ecx = MEM32(eax + 0x14);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(ecx + 0xF78) = xmm0.f[0]; /* movss */
    goto loc_0012F745;

loc_0012F73D:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */

loc_0012F745:
    xmm1.f[0] = MEMF(esp + 0x110); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm3.f[0])) goto loc_0012F75D; /* ja: above (unsigned >) */

loc_0012F753:
    /* comiss xmm2.f[0], xmm7.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm7.f[0])) goto loc_0012F75D; /* ja: above (unsigned >) */

loc_0012F758:
    /* comiss xmm5.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm5.f[0] <= xmm2.f[0])) goto loc_0012F774; /* jbe: below or equal (unsigned <=) */

loc_0012F75D:
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x40);
    if (CMP_LE(MEM8(ecx + 0xD), 1)) goto loc_0012F774; /* jle: less or equal (signed <=) */

loc_0012F769:
    edx = MEM32(eax + 0x14);
    MEMF(edx + 0xF7C) = xmm0.f[0]; /* movss */

loc_0012F774:
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm3.f[0])) goto loc_0012F791; /* ja: above (unsigned >) */

loc_0012F77F:
    /* comiss xmm4.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm4.f[0] > MEMF(esp + 0x18))) goto loc_0012F791; /* ja: above (unsigned >) */

loc_0012F786:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm4.f[0])) goto loc_0012F7BF; /* jbe: below or equal (unsigned <=) */

loc_0012F791:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x40);
    if (CMP_LE(MEM8(edx + 0xD), 2)) goto loc_0012F7A8; /* jle: less or equal (signed <=) */

loc_0012F79D:
    ecx = MEM32(eax + 0x14);
    MEMF(ecx + 0xF80) = xmm0.f[0]; /* movss */

loc_0012F7A8:
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x40);
    if (CMP_LE(MEM8(ecx + 0xD), 4)) goto loc_0012F7BF; /* jle: less or equal (signed <=) */

loc_0012F7B4:
    edx = MEM32(eax + 0x14);
    MEMF(edx + 0xF88) = xmm0.f[0]; /* movss */

loc_0012F7BF:
    xmm1.f[0] = MEMF(esp + 0x114); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm3.f[0])) goto loc_0012F7DF; /* ja: above (unsigned >) */

loc_0012F7CD:
    /* comiss xmm6.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm6.f[0] > MEMF(esp + 0x18))) goto loc_0012F7DF; /* ja: above (unsigned >) */

loc_0012F7D4:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm6.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm6.f[0])) goto loc_0012F80D; /* jbe: below or equal (unsigned <=) */

loc_0012F7DF:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x40);
    if (CMP_LE(MEM8(edx + 0xD), 3)) goto loc_0012F7F6; /* jle: less or equal (signed <=) */

loc_0012F7EB:
    ecx = MEM32(eax + 0x14);
    MEMF(ecx + 0xF84) = xmm0.f[0]; /* movss */

loc_0012F7F6:
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x40);
    if (CMP_LE(MEM8(ecx + 0xD), 5)) goto loc_0012F80D; /* jle: less or equal (signed <=) */

loc_0012F802:
    edx = MEM32(eax + 0x14);
    MEMF(edx + 0xF8C) = xmm0.f[0]; /* movss */

loc_0012F80D:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
