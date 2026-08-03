#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012CEF0
 * Original: 0x0012CEF0 - 0x0012D280 (912 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012CEF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 3;
    ecx++;
    SET_LO8(eax, 0); /* xor self */
    ebx = ecx;
    PUSH32(esp, 0); sub_00128C30(); /* call 0x00128C30 */

loc_0012CF1C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = 0; /* xor self */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x10) = ecx;
    goto loc_0012CF35;

loc_0012CF2C:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = MEM32(esp + 0x10);

loc_0012CF35:
    eax = MEM32(ebp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012D23A; /* je: equal / zero */

loc_0012CF40:
    if (TEST_Z(ecx, ecx)) goto loc_0012D243; /* je: equal / zero */

loc_0012CF48:
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    esi = ebx;
    esi = esi << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + esi + 0x730), 16); /* movaps */
    xmm2.f[0] = MEMF(esi + ecx + 0xA4); /* movss */
    PUSH32(esp, eax);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    SET_LO8(eax, 1);
    edx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128C30(); /* call 0x00128C30 */

loc_0012CF7B:
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */

loc_0012CF83:
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0x39 */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    eax = esp + 0x14;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm4.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(esp + 0xC))) goto loc_0012D231; /* jae: above or equal (unsigned >=) */

loc_0012D008:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    SET_LO8(eax, 1);
    edx = edi;
    PUSH32(esp, 0); sub_00128C30(); /* call 0x00128C30 */

loc_0012D01A:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(edi + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + eax + 0xA0), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
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
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esp + 0x18); /* divss */
    /* comiss xmm4.f[0], MEMF(0x3A69B4) - sets EFLAGS */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0x39 */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm2.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    edx = 0x3832AC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    if ((xmm4.f[0] <= MEMF(0x3A69B4))) goto loc_0012D0DA; /* jbe: below or equal (unsigned <=) */

loc_0012D0CC:
    eax = MEM32(edi + 0x14);
    ecx = ebx + 0x1C;
    ecx = ecx << 6;
    ecx = ecx + eax;
    memcpy((void *)XBOX_PTR(ecx), xmm3.b, 16); /* movaps */

loc_0012D0DA:
    ecx = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + esi + 0x720), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    eax = ebx + 0x1C;
    eax = eax << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    /* shufps xmm1, xmm1, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    edx = ecx;
    memcpy((void *)XBOX_PTR(edx + esi + 0x710), xmm0.b, 16); /* movaps */
    ecx = MEM32(edi + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + esi + 0x710), 16); /* movaps */
    ecx = ecx + esi + 0x710;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    edx = 0x3832AC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    ecx = MEM32(edi + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + esi + 0x710), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = ecx;
    memcpy((void *)XBOX_PTR(eax + esi + 0x720), xmm0.b, 16); /* movaps */
    ecx = MEM32(edi + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + esi + 0x720), 16); /* movaps */
    esi = ecx + esi + 0x720;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi), xmm1.b, 16); /* movaps */
    esi = ebx;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_0012D218:
    ebx = MEM32(ebx * 4 + 0x3EBF8C);
    eax = MEM32(esp + 0x10);
    eax++;
    /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 2)) goto loc_0012CF2C; /* jl: less (signed <) */

loc_0012D231:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012D23A:
    if (CMP_NE(ecx, 1)) goto loc_0012CF48; /* jne: not equal / not zero */

loc_0012D243:
    ecx = MEM32(edi + 0x14);
    esi = ebx;
    PUSH32(esp, eax);
    esi = esi << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + esi + 0x730), 16); /* movaps */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    SET_LO8(eax, 1);
    edx = edi;
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128C30(); /* call 0x00128C30 */

loc_0012D26A:
    ecx = MEM32(edi + 0x18);
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + ecx + 0xA4); /* subss */
    goto loc_0012CF83;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
