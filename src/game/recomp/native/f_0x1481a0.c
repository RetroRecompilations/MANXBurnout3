#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001481A0
 * Original: 0x001481A0 - 0x001483F6 (598 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001481A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001481A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    /* test MEM8(esi + 0x114), 8 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(esi + 0x114), 8)) goto loc_001483EE; /* je: equal / zero */

loc_001481BB:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = MEM32(esi + 0xD4);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xB0); /* movss */
    edi = esi + 0xB0;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    eax = 0; /* xor self */
    /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FC5C); /* movss */
    MEM32(esp + 0x60) = eax;
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x88) = 0xFFFFFFFFu;
    MEM8(esp + 0x8C) = LO8(eax);
    MEM8(esp + 0x8D) = LO8(eax);
    MEM8(esp + 0x8E) = LO8(eax);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    if (CMP_EQ(ecx, eax)) goto loc_001483EE; /* je: equal / zero */

loc_0014827E:
    ebx = MEM32(esi);
    xmm0.f[0] = MEMF(ebx + 0xC4); /* movss */
    ecx = edi;
    edx = 0x40B830;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA270(); /* call 0x001CA270 */

loc_0014829A:
    eax = MEM32(eax + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    ecx = eax + 0x30;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = eax + 0x3C;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(eax + 4);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    edx = MEM32(eax + 8);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0014832C:
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x90), 16); /* movaps */
    eax = esp + 0x10;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0x10;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esi + 0xD4);
    edx = MEM32(eax + 8);
    /* FPU: fdivr dword ptr [esi + 0xf0] */
    eax = MEM32(edx + 0x10);
    /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014839C; /* jge: greater or equal (signed >=) */

loc_00148396:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014839C:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    eax = MEM32(esi + 0xC8);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esi + 0xE8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    edi = esp + 0x48;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_001483EE:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
