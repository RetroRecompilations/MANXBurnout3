#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00164A60
 * Original: 0x00164A60 - 0x00164ACB (107 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164A60(void)
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

loc_00164A60:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x24);
    /* test eax, eax - flags set for next jcc */
    ebx = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00164A7E; /* jne: not equal / not zero */

loc_00164A70:
    eax = MEM32(ebp + 0x34);
    xmm0.f[0] = MEMF(eax + 0x60); /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00164A7E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    edi = ebp + 0x28;
    /* cmp esi, edi - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(esi, edi)) goto loc_00164ABC; /* je: equal / zero */

loc_00164A93:
    eax = esi + -20;
    esi = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00164A60(); /* call 0x00164A60 */

loc_00164AA0:
    /* cmp esi, edi - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(esi, edi)) goto loc_00164A93; /* jne: not equal / not zero */

loc_00164AB6:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */

loc_00164ABC:
    ecx = MEM32(ebp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
