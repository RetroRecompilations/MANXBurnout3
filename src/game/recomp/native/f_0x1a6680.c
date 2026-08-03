#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6680
 * Original: 0x001A6680 - 0x001A685D (477 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6680:
    esp = esp - 0x14;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(edi + 0x40);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(ebx); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    eax = MEM32(edi + ebp * 4 + 0x10);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + ecx * 4); /* movss */
    eax = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* cmp eax, 1 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(eax, 1)) goto loc_001A66E5; /* je: equal / zero */

loc_001A66B8:
    SET_LO8(eax, MEM8(edi + 0x114));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A66E5; /* jne: not equal / not zero */

loc_001A66C2:
    /* comiss xmm0.f[0], MEMF(ebx) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(ebx))) goto loc_001A66E5; /* jae: above or equal (unsigned >=) */

loc_001A66C7:
    eax = 0x649B28;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001A66D1:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_001A6700; /* jb: below (unsigned <) */

loc_001A66DF:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */

loc_001A66E5:
    MEMF(ebx) = xmm0.f[0]; /* movss */

loc_001A66E9:
    ecx = MEM32(edi + 0x40);
    if (CMP_NE(esi, MEM32(ecx + 8))) goto loc_001A6852; /* jne: not equal / not zero */

loc_001A66F5:
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

loc_001A6700:
    eax = MEM32(edi + 0x40);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = MEM32(eax + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    esi = 1;
    /* cmp eax, esi - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_LE(eax, esi)) goto loc_001A66E9; /* jle: less or equal (signed <=) */

loc_001A6721:
    ecx = ebp + -1;
    ebx = edi + ebp * 4 + 0x14;
    MEM32(esp + 0x18) = ecx;
    ebp = edi + ebp * 4 + 0xC;

loc_001A6730:
    ecx = MEM32(esp + 0x18);
    /* test ecx, ecx - flags set for next jcc */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    if (TEST_S(ecx, ecx)) goto loc_001A674F; /* jl: less (signed <) */

loc_001A673B:
    edx = MEM32(ebp);
    ecx = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(edx + ecx * 4); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_001A6755;

loc_001A674F:
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_001A6755:
    edx = MEM32(esp + 0x2C);
    ecx = esi + edx;
    if (CMP_GE(ecx, eax)) goto loc_001A6773; /* jge: greater or equal (signed >=) */

loc_001A6760:
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(edx + eax * 4); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_001A6779;

loc_001A6773:
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_001A6779:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001A67BA; /* jae: above or equal (unsigned >=) */

loc_001A6790:
    eax = 0x649B28;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001A679A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_001A67DD; /* jae: above or equal (unsigned >=) */

loc_001A67A8:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_001A67BA:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x40);
    eax = MEM32(ecx + 8);
    esi++;
    ebx = ebx + 4;
    ebp = ebp - 4;
    edx--;
    /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(esi, eax)) goto loc_001A6730; /* jl: less (signed <) */

loc_001A67D8:
    goto loc_001A66E9;

loc_001A67DD:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_001A6805; /* jb: below (unsigned <) */

loc_001A67EB:
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEM8(edx) = 0;
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_001A66E9;

loc_001A6805:
    /* comiss xmm0.f[0], MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x14))) goto loc_001A6820; /* jb: below (unsigned <) */

loc_001A680C:
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x30);
    MEM8(ecx) = 1;
    MEMF(edx) = xmm1.f[0]; /* movss */
    goto loc_001A66E9;

loc_001A6820:
    eax = 0x649B28;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001A682A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_001A67EB; /* jb: below (unsigned <) */

loc_001A6838:
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x30);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM8(eax) = 1;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    goto loc_001A66E9;

loc_001A6852:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
