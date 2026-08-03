#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001014F0
 * Original: 0x001014F0 - 0x001016F2 (514 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001014F0(void)
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

loc_001014F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0xC4;
    edi = eax + ecx + 0x30;
    PUSH32(esp, edx);
    ebx = esp + 0x98;
    eax = esp + 0x18;
    MEM8(esi + 0x4D78) = 1;
    PUSH32(esp, 0); sub_00103660(); /* call 0x00103660 */

loc_00101533:
    eax = ZX8(MEM8(esp + 0xC0));
    edx = eax + eax * 2;
    edx = edx << 7;
    /* test MEM8(edx + 0x626124), 2 - flags set for next jcc */
    ecx = eax;
    if (TEST_Z(MEM8(edx + 0x626124), 2)) goto loc_00101580; /* je: equal / zero */

loc_0010154C:
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_00101559; /* jns: not sign (positive) */

loc_00101554:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_00101559:
    edi = 1;
    edi = edi << LO8(ecx);
    eax = eax >> 5;
    if (TEST_Z(MEM32(eax * 4 + 0x649AC0), edi)) goto loc_001016E9; /* je: equal / zero */

loc_00101570:
    ebx = MEM32(edx + 0x62611C);
    if (TEST_Z(ebx, ebx)) goto loc_001016E9; /* je: equal / zero */

loc_0010157E:
    goto loc_001015E5;

loc_00101580:
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_0010158D; /* jns: not sign (positive) */

loc_00101588:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_0010158D:
    edi = 1;
    edi = edi << LO8(ecx);
    eax = eax >> 5;
    if (TEST_Z(MEM32(eax * 4 + 0x649AC0), edi)) goto loc_001016E9; /* je: equal / zero */

loc_001015A4:
    ebx = MEM32(edx + 0x62611C);
    if (TEST_Z(ebx, ebx)) goto loc_001016E9; /* je: equal / zero */

loc_001015B2:
    edx = MEM32(esi + 0x6F4);
    eax = MEM32(edx + 0x13F4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    edi = MEM32(esi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = 0x572980;
    PUSH32(esp, 0); sub_001B8650(); /* call 0x001B8650 */

loc_001015D9:
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = 0x64B310;
    PUSH32(esp, 0); sub_00114910(); /* call 0x00114910 */

loc_001015E5:
    ebx = MEM32(ebx + 0xC);
    edi = MEM32(esi + 8);
    ecx = 0x572980;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_001B8650(); /* call 0x001B8650 */

loc_001015F9:
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x242B);
    if (CMP_NE(edx, eax)) goto loc_001016E9; /* jne: not equal / not zero */

loc_00101608:
    eax = MEM32(esi + 0x4D70);
    eax = eax + eax * 2;
    eax = eax << 6;
    eax = eax + esi + 0x3B70;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00101700(); /* call 0x00101700 */

loc_00101624:
    eax = MEM32(esi + 0x4D70);
    edx = MEM32(ebp + 8);
    ecx = eax + eax * 2;
    ecx = ecx << 6;
    ebx = ecx + esi + 0x3B70;
    ecx = MEM32(esp + 0xC);
    eax++;
    MEM32(esi + 0x4D70) = eax;
    edi = MEM32(ecx + 0x204);
    eax = ebx + 0xA0;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x6EA);
    PUSH32(esp, ebx);
    esi = ebx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000FFDD0(); /* call 0x000FFDD0 */

loc_00101663:
    MEM8(ebx + 0xB1) = 1;
    xmm0.f[0] = MEMF(ebx + 0xA0); /* movss */
    esp = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0xC))) goto loc_001016D2; /* jb: below (unsigned <) */

loc_00101694:
    xmm1.f[0] = MEMF(ebx + 0xA4); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0xC))) goto loc_001016D2; /* jb: below (unsigned <) */

loc_001016B3:
    xmm1.f[0] = MEMF(ebx + 0xA8); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(esp + 0xC))) goto loc_001016D9; /* jae: above or equal (unsigned >=) */

loc_001016D2:
    MEM8(ebx + 0xB1) = 0;

loc_001016D9:
    eax = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x6EA);
    MEM32(eax + 0x4D74) = edx;

loc_001016E9:
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
