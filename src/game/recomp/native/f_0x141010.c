#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141010
 * Original: 0x00141010 - 0x00141147 (311 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141010(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00141010:
    esp = esp - 0x48;
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = ebx;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    MEM8(esp + 0x48) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4A) = LO8(ebx);
    PUSH32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_001410B0; /* je: equal / zero */

loc_001410A4:
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_001410AE:
    goto loc_001410C0;

loc_001410B0:
    ebx = esp + 0x54;
    eax = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_001410BE:
    ebx = 0; /* xor self */

loc_001410C0:
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00141140; /* je: equal / zero */

loc_001410C8:
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001410E7; /* jge: greater or equal (signed >=) */

loc_001410E1:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001410E7:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(esp + 0x60));
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x48) = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00141129; /* je: equal / zero */

loc_00141108:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0xC;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00141118:
    /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_00141140; /* je: equal / zero */

loc_0014111E:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 0x10;
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 28; return; /* ret 24 */

loc_00141129:
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = 0x40B844;
    PUSH32(esp, 0); sub_001CD9F0(); /* call 0x001CD9F0 */

loc_00141138:
    if (CMP_EQ(eax, ebx)) goto loc_00141140; /* je: equal / zero */

loc_0014113C:
    MEM8(eax + 0x31) = MEM8(eax + 0x31) | 0x10;

loc_00141140:
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
