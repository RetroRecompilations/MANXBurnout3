#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152330
 * Original: 0x00152330 - 0x001523FB (203 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152330:
    esp = esp - 0x54;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    xmm0.f[0] = MEMF(ebp * 4 + 0x40F7A0); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x2C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(ebx + 0x2C))) goto loc_001523F4; /* ja: above (unsigned >) */

loc_0015234B:
    xmm0.f[0] = MEMF(ebp * 4 + 0x40F7B0); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x2C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(ebx + 0x2C))) goto loc_001523F4; /* ja: above (unsigned >) */

loc_0015235E:
    SET_LO8(eax, MEM8(ebx + 0x3C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001523F4; /* je: equal / zero */

loc_00152369:
    xmm0.f[0] = MEMF(ebx); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x18;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_00152394:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(esp + 0x20) = eax;
    MEM8(esp + 0x5D) = 1;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    edx = MEM32(ecx + 0x10);
    if (CMP_GE(edx & edx, 0)) goto loc_001523D1; /* jge: greater or equal (signed >=) */

loc_001523CB:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001523D1:
    edi = esp + 0x18;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001523E3:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + ebp * 4 + 0x10) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001523F4; /* je: equal / zero */

loc_001523ED:
    eax = MEM32(eax + 0x14);
    MEM32(ebx + ebp * 4 + 0x18) = eax;

loc_001523F4:
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
