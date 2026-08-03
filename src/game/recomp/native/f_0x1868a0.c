#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001868A0
 * Original: 0x001868A0 - 0x00186BA8 (776 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001868A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001868A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB8;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    memcpy((void *)XBOX_PTR(esp + 0x3C), xmm0.b, 16); /* movaps */
    PUSH32(esp, edi);
    esi = edx + 0x160;
    ecx = 0x18;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A360C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A360C))) goto loc_001869D0; /* jbe: below or equal (unsigned <=) */

loc_00186938:
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    eax = eax << 0x10;
    esi = esi + ecx;
    eax = eax + esi;
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    eax = eax + ecx;
    MEM32(ebx + 0x6455C) = eax;
    eax = MEM32(ebx + 0x64558);
    if (CMP_GE(eax & eax, 0)) goto loc_00186974; /* jge: greater or equal (signed >=) */

loc_0018696E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186974:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x41A520)); /* fld float */
    ecx = esp + 0x78;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = esp + 0x1C;
    edi = edx + 0x290;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    edx = ebx + 0x5B9B0;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00044EF0(); /* call 0x00044EF0 */

loc_001869CD:
    edx = MEM32(ebp + 8);

loc_001869D0:
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x160), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x170), 16); /* movaps */
    ecx = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edx + 0x194); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    ecx = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00186A06:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edi = MEM32(ebp + 8);
    /* cmp MEM8(edi + 0x2BA), 2 - flags set for next jcc */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    if (CMP_NE(MEM8(edi + 0x2BA), 2)) goto loc_00186B93; /* jne: not equal / not zero */

loc_00186A4E:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = edi;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00186A5E:
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = 0x80000000u;
    esi = MEM32(esp + 8);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A20); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 8))) goto loc_00186BA0; /* jbe: below or equal (unsigned <=) */

loc_00186AC8:
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1D18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1D18))) goto loc_00186BA0; /* jbe: below or equal (unsigned <=) */

loc_00186ADB:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    ecx = MEM32(edi + 0x2B0);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = esp + 0x28;
    xmm0.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ecx + 0xCC0);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = eax + 0x5C;
    ecx = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_00186B15:
    PUSH32(esp, 0);
    PUSH32(esp, 0x42960000);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = 3;
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_00186B3F:
    PUSH32(esp, 0);
    PUSH32(esp, 0x42960000);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = 1;
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_00186B66:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41000000);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = 2;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00186B93:
    PUSH32(esp, 0x60DFD0);
    eax = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00187E40(); /* call 0x00187E40 */

loc_00186BA0:
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
