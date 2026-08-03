#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0016A830
 * Original: 0x0016A830 - 0x0016A8BF (143 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A830(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0016A830:
    SET_LO8(ecx, MEM8(esi + 0x58));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0016A8BE; /* jne: not equal / not zero */

loc_0016A83B:
    xmm0.f[0] = MEMF(esi + 0x4C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x3B16E0))) goto loc_0016A8BE; /* ja: above (unsigned >) */

loc_0016A849:
    if (CMP_NE(eax, 1)) goto loc_0016A860; /* jne: not equal / not zero */

loc_0016A84E:
    eax = 0x47A138;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0016A858:
    fp_push(MEMF(0x3B1684)); /* fld float */
    goto loc_0016A874;

loc_0016A860:
    if (TEST_NZ(eax, eax)) goto loc_0016A87A; /* jne: not equal / not zero */

loc_0016A864:
    eax = 0x47A138;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0016A86E:
    fp_push(MEMF(0x3A69C4)); /* fld float */

loc_0016A874:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0016A8BE; /* ja: above (unsigned >) */

loc_0016A87A:
    eax = MEM32(0x4A1E24);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x3A2638);
    eax++;
    eax = eax & 0xF;
    MEM32(0x4A1E24) = eax;
    eax = 0x47A138;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0016A89A:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(0x3A69BC); /* movss */
    MEM32(esi + 0x54) = edi;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x58) = 1;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);

loc_0016A8BE:
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
