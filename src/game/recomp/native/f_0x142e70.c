#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142E70
 * Original: 0x00142E70 - 0x00143185 (789 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142E70(void)
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

loc_00142E70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = MEM32(eax);
    edx = (uint32_t)(int32_t)SMEM16(0x40FBBA);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x50) = ebx;
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    MEM8(esp + 0x7C) = LO8(ebx);
    MEM8(esp + 0x7D) = LO8(ebx);
    MEM8(esp + 0x7E) = LO8(ebx);
    ecx = MEM32(ecx + 0x204);
    xmm0.f[0] = MEMF(ecx + 0x30); /* movss */
    ecx = ecx + 0x30;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    ecx = MEM32(0x40FBB8);
    ecx = ecx << 0x10;
    ecx = ecx + edx;
    edx = MEM32(0x40FBBC);
    ecx = ecx + edx;
    edx = edx + ecx;
    MEM32(0x40FBB8) = ecx;
    MEM32(0x40FBBC) = edx;
    /* cmp MEM32(eax + 0x2C), ebx - flags set for next jcc */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x34); /* movss */
    if (CMP_EQ(MEM32(eax + 0x2C), ebx)) goto loc_00142F6E; /* je: equal / zero */

loc_00142F64:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A69BC); /* subss */
    goto loc_00142F76;

loc_00142F6E:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A69BC); /* addss */

loc_00142F76:
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(eax);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x2420);
    if (CMP_EQ(edx, 3)) goto loc_00143081; /* je: equal / zero */

loc_00142FDA:
    if (CMP_EQ(edx, 4)) goto loc_00143081; /* je: equal / zero */

loc_00142FE3:
    if (CMP_EQ(edx, 5)) goto loc_00143081; /* je: equal / zero */

loc_00142FEC:
    xmm0.f[0] = MEMF(0x40FC28); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 0xBC); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x40FC2C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(0x40FC3C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x10);
    xmm0.f[0] = MEMF(0x40FC34); /* movss */
    xmm1.f[0] = MEMF(0x40FC30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* test ecx, ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    goto loc_00143111;

loc_00143081:
    xmm0.f[0] = MEMF(0x40FC40); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 0xBC); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x40FC44); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(0x40FC54)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx + 8);
    edx = MEM32(ecx + 0x10);
    xmm0.f[0] = MEMF(0x40FC4C); /* movss */
    xmm1.f[0] = MEMF(0x40FC48); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* test edx, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */

loc_00143111:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if (CMP_GE(edx & edx, 0)) goto loc_00143127; /* jge: greater or equal (signed >=) */

loc_00143121:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00143127:
    xmm1.f[0] = MEMF(eax + 0x20); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x34); /* mulss */
    ecx = MEM32(eax);
    eax = MEM32(eax + 0x18);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    edi = esp + 0x38;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_0014317F:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
