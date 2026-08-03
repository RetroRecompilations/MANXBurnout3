#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001BE60
 * Original: 0x0001BE60 - 0x0001BFC8 (360 bytes, 86 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BE60(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0;
    uint64_t mm0, mm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0001BE60:
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x44CFC8;
    esi = eax;
    PUSH32(esp, 0); sub_0001B3A0(); /* call 0x0001B3A0 */

loc_0001BE71:
    eax = esi;
    PUSH32(esp, 0); sub_0001BBE0(); /* call 0x0001BBE0 */

loc_0001BE78:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001C340(); /* call 0x0001C340 */

loc_0001BE7E:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001D4C0(); /* call 0x0001D4C0 */

loc_0001BE84:
    PUSH32(esp, 0); sub_0001DBB0(); /* call 0x0001DBB0 */

loc_0001BE89:
    PUSH32(esp, 0); sub_0001DE50(); /* call 0x0001DE50 */

loc_0001BE8E:
    eax = 0; /* xor self */

loc_0001BE90:
    SET_LO8(ecx, MEM8(esi + eax + 0x433));
    MEM8(eax + 0x44D104) = LO8(ecx);
    eax++;
    if (CMP_L(eax, 0x14)) goto loc_0001BE90; /* jl: less (signed <) */

loc_0001BEA3:
    eax = esi;
    PUSH32(esp, 0); sub_0001D090(); /* call 0x0001D090 */

loc_0001BEAA:
    edx = esi;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_0001BEB1:
    edi = esi;
    PUSH32(esp, 0); sub_0001CE70(); /* call 0x0001CE70 */

loc_0001BEB8:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001C9D0(); /* call 0x0001C9D0 */

loc_0001BEBE:
    PUSH32(esp, 0); sub_0001CED0(); /* call 0x0001CED0 */

loc_0001BEC3:
    PUSH32(esp, 0); sub_0001CF50(); /* call 0x0001CF50 */

loc_0001BEC8:
    edx = MEM32(0x44D1B8);
    eax = MEM32(0x44D154);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = eax + edx + -3;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMD(0x3B1AE8)); /* fld double */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244E9C(); /* call 0x00244E9C */

loc_0001BF11:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 8) = (int32_t)fp_top(); /* fist */
    /* FPU: fisub dword ptr [esp + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    edx = edx + 0x7FFFFFFF;
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 8) = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(0x44D150) = edx;
    MEM32(esp + 0x14) = 0;
    mm0 = MEM32(esp + 0x14); /* movd */
    mm1 = MEM32(esp + 0x14); /* movd */
    /* pcmpgtd mm0, qword ptr [0x44d150] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [0x44d150] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x10) = mm0; /* movd */
    /* emms - empty MMX state */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = 0x64;
    mm0 = MEM32(esp + 8); /* movd */
    mm1 = MEM32(esp + 0x14); /* movd */
    /* pcmpgtd mm0, mm1 (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 8] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x10) = mm0; /* movd */
    /* emms - empty MMX state */
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x44D150) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
