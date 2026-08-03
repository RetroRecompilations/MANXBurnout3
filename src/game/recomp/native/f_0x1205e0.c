#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001205E0
 * Original: 0x001205E0 - 0x001206CF (239 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001205E0(void)
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

loc_001205E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0xD0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = esi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_00106590(); /* call 0x00106590 */

loc_0012061F:
    eax = MEM32(esi + 0x1524);
    if (CMP_EQ(eax, 2)) goto loc_001206A3; /* je: equal / zero */

loc_0012062A:
    if (CMP_EQ(eax, 1)) goto loc_001206A3; /* je: equal / zero */

loc_0012062F:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3EBF68) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3EBF68))) goto loc_001206BF; /* jbe: below or equal (unsigned <=) */

loc_00120654:
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    ecx = ecx & 0xBF800000u;
    ecx = ecx | 0x3F800000;
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    edx = edx & 0xBF800000u;
    edx = edx | 0x3F800000;
    MEM32(esp + 0xC) = edx;
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001206BF; /* jp: parity */

loc_001206A3:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xF0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xF0), xmm1.b, 16); /* movaps */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001206BF:
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_001064B0(); /* call 0x001064B0 */

loc_001206C7:
    POP32(esp, esi);
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
