#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017E600
 * Original: 0x0017E600 - 0x0017E6D6 (214 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E600(void)
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

loc_0017E600:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = edx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    edi = edi + esi;
    edx = edx << 0x10;
    edx = edx + edi;
    esi = esi + edx;
    edi = edx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    edi = edi + esi;
    MEM32(ecx) = edx;
    MEM32(esp + 0x18) = edx;
    edx = edx << 0x10;
    edx = edx + edi;
    MEM32(ecx + 4) = esi;
    esi = esi + edx;
    edi = edx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    edi = edi + esi;
    MEM32(ecx + 4) = esi;
    ebx = edx;
    ebx = ebx << 0x10;
    esi = ebx + edi;
    edi = MEM32(ecx + 4);
    edi = edi + esi;
    MEM32(ecx) = edx;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edi;
    ecx = esi;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0017E668; /* jge: greater or equal (signed >=) */

loc_0017E662:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0017E668:
    /* test edx, edx - flags set for next jcc */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_0017E67E; /* jge: greater or equal (signed >=) */

loc_0017E678:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0017E67E:
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    /* test edx, edx - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_0017E694; /* jge: greater or equal (signed >=) */

loc_0017E68E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0017E694:
    xmm0.f[0] = MEMF(0x5A99F4); /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 8);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    POP32(esp, edi);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    POP32(esp, esi);
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
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
