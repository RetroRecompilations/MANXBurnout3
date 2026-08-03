#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017FFF0
 * Original: 0x0017FFF0 - 0x001803BD (973 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FFF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0017FFF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    /* cmp MEM8(ebx + 0x215), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(ebx + 0x215), 1)) goto loc_001803B4; /* jne: not equal / not zero */

loc_00180012:
    eax = MEM32(ebx + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x18FA));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001803B4; /* jne: not equal / not zero */

loc_00180026:
    xmm1.f[0] = MEMF(ebx + 0xBC); /* movss */
    xmm0.f[0] = MEMF(0x3B0408); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_001803B4; /* ja: above (unsigned >) */

loc_00180045:
    xmm2.f[0] = MEMF(0x3B0404); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00180068; /* jbe: below or equal (unsigned <=) */

loc_00180052:
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1B58); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3A1A00); /* addss */
    goto loc_00180070;

loc_00180068:
    xmm1.f[0] = MEMF(0x3B0400); /* movss */

loc_00180070:
    eax = MEM32(ebx + 0xCC0);
    xmm0.f[0] = MEMF(esi + 0x6457C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    edi = MEM32(eax + 0x40);
    xmm0.f[0] = MEMF(edi + 0xE98); /* movss */
    xmm1.f[0] = MEMF(edi + 0xE94); /* movss */
    xmm2.f[0] = MEMF(edi + 0xE90); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69B8); /* mulss */
    edi = edi + 0xE80;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00180102:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x10); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x78), 16); /* movaps */
    eax = esp + 0x20;
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x3B1B54); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    ecx = esp + 0x20;
    xmm2.f[0] = MEMF(ecx); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x58), xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3A5600); /* movss */
    esp = esp + 8;
    eax = esp + 0x60;
    ecx = esp + 0x50;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_0018016F:
    edx = MEM32(ebx + 0xCC0);
    eax = MEM32(edx + 0x40);
    xmm0.f[0] = MEMF(eax + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    ecx = MEM32(ebx + 0xCC4);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x49C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xA4); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_001803B4; /* jle: less or equal (signed <=) */

loc_001801D8:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = esp + 0x40;
    ecx = esp + 0x50;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001801F1:
    esi = esi + 0x64558;
    eax = esi;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001801FE:
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    eax = esp + 0x40;
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, eax);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0xB4;
    ecx = esp + 0x24;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013BD0(); /* call 0x00013BD0 */

loc_00180230:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1A78); /* mulss */
    xmm7.f[0] = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    /* nop */

loc_00180250:
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
    eax = eax << 0x10;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    edi = edi + ecx;
    eax = eax + edi;
    MEM32(esi) = eax;
    edi = MEM32(esi);
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = edi;
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    eax = eax << 0x10;
    ebx = ebx + ecx;
    eax = eax + ebx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    if (CMP_GE(eax & eax, 0)) goto loc_001802AA; /* jge: greater or equal (signed >=) */

loc_001802A4:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001802AA:
    /* test edi, edi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x14) = edi;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edi & edi, 0)) goto loc_001802CC; /* jge: greater or equal (signed >=) */

loc_001802C6:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001802CC:
    /* test edx, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x14) = edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001802F2; /* jge: greater or equal (signed >=) */

loc_001802EC:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001802F2:
    eax = MEM32(esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00180328; /* jge: greater or equal (signed >=) */

loc_00180322:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00180328:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x64578);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    xmm6.f[0] = MEMF(esp + 0x3C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x14;
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = esp + 0x24;
    eax = eax + 0x39DD0;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x48), 16); /* movaps */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    SET_LO8(eax, 0); /* xor self */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm5.b, xmm6.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000365D0(); /* call 0x000365D0 */

loc_00180389:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0x50) (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    eax--;
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00180250; /* jne: not equal / not zero */

loc_001803B4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
