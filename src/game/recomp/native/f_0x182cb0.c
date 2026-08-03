#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00182CB0
 * Original: 0x00182CB0 - 0x00183137 (1159 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182CB0(void)
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

loc_00182CB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x395D58) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0.f[0] <= MEMF(0x395D58))) goto loc_00182CFF; /* jbe: below or equal (unsigned <=) */

loc_00182CF5:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_00182D1F;

loc_00182CFF:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1A08); /* mulss */

loc_00182D1F:
    xmm1.f[0] = MEMF(0x3879E4); /* movss */
    xmm2.f[0] = MEMF(0x3B1B3C); /* movss */
    xmm6.f[0] = MEMF(0x3B1684); /* movss */
    xmm3.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1698); /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x35BF14); /* movss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1B38); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B0); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    edx = esp + 0x14;
    xmm1.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    /* shufps xmm1, xmm1, 0 */
    ecx = esp + 0x14;
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    MEMF(esp + 0x74) = xmm6.f[0]; /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = esp + 0x14;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    ecx = esp + 0x14;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* mulps: xmm5.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x30;
    /* shufps xmm0, xmm0, 0 */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = 0x80000000u;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm2.b, 16); /* movaps */
    /* subps: xmm7.f[0] -= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    eax = esp + 0x14;
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm5.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    /* nop */

loc_00182ED0:
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00182EEE; /* je: equal / zero */

loc_00182ED7:
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1708); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x41A530); /* addss */
    goto loc_00182EFB;

loc_00182EEE:
    xmm0.f[0] = MEMF(0x41A530); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x14); /* addss */

loc_00182EFB:
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    /* test eax, eax - flags set for next jcc */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x14) = eax;
    MEMF(0x41A530) = xmm0.f[0]; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0018311E; /* jle: less or equal (signed <=) */

loc_00182F1B:
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = esp + 0x4C;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    esi = ebx + 0x64558;

loc_00182F63:
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
    if (CMP_GE(eax & eax, 0)) goto loc_00182F89; /* jge: greater or equal (signed >=) */

loc_00182F83:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00182F89:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x110), 16); /* movaps */
    ecx = esp + 0x1C;
    edx = esp + 0xA0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x144;
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00182FD0:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0x90) (packed 4xfloat) */
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esi;
    eax = esp + 0x134;
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00182FF6:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebx + 0x64578);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    eax = ebx + 0x39DD0;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x1C));
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000365D0(); /* call 0x000365D0 */

loc_0018302F:
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    if (TEST_Z(MEM8(esi), 1)) goto loc_001830EE; /* je: equal / zero */

loc_00183050:
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
    if (CMP_GE(eax & eax, 0)) goto loc_00183076; /* jge: greater or equal (signed >=) */

loc_00183070:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00183076:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x110), 16); /* movaps */
    ecx = esp + 0x1C;
    edx = esp + 0xE0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x124;
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_001830BD:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebx + 0x64578);
    /* addps: xmm0.f[0] += MEMF(esp + 0x80) (packed 4xfloat) */
    xmm5.f[0] = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, eax);
    ecx = ebx + 0x1890;
    PUSH32(esp, ecx);
    edi = esp + 0x28;
    eax = esp + 0x78;
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00043FC0(); /* call 0x00043FC0 */

loc_001830EE:
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0x30) (packed 4xfloat) */
    eax--;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00182F63; /* jne: not equal / not zero */

loc_0018311E:
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018312E; /* je: equal / zero */

loc_00183125:
    MEM8(ebp + 0x1C) = 0;
    goto loc_00182ED0;

loc_0018312E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
