#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001486D0
 * Original: 0x001486D0 - 0x00148819 (329 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001486D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001486D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    ecx = ecx + 0xB0;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    PUSH32(esp, edi);
    edx = 0x40B830;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    MEM8(esp + 0x5C) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA270(); /* call 0x001CA270 */

loc_00148783:
    eax = MEM32(eax + 8);
    eax = eax + 0x3C;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    ecx = MEM32(esi + 8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = esi;
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    edx = MEM32(ecx + 0x10);
    if (CMP_GE(edx & edx, 0)) goto loc_001487E3; /* jge: greater or equal (signed >=) */

loc_001487DD:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001487E3:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001487F4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00148806; /* je: equal / zero */

loc_001487F8:
    xmm0.f[0] = MEMF(0x3A2808); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */

loc_00148806:
    eax = MEM32(ebp + 0x10);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_00148812:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
