#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249DC1
 * Original: 0x00249DC1 - 0x00249F13 (338 bytes, 116 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249DC1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00249DC1:
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, esi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x36c0e0] */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00249DDB; /* jp: parity */

loc_00249DD9:
    fp_top() = -fp_top(); /* fchs */

loc_00249DDB:
    eax = 0x7FF00000;
    /* cmp MEM32(ebp + 0x14), eax - flags set for next jcc */
    ecx = 0xFFF00000u;
    if (CMP_NE(MEM32(ebp + 0x14), eax)) goto loc_00249E22; /* jne: not equal / not zero */

loc_00249DEA:
    if (CMP_NE(MEM32(ebp + 0x10), edx)) goto loc_00249E5D; /* jne: not equal / not zero */

loc_00249DEF:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x36c0e8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00249E00; /* jne: not equal / not zero */

loc_00249DFC:
    /* fstp st(0) */
    goto loc_00249E7D;

loc_00249E00:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e8] */
    /* fnstsw ax - store FPU status word */
    /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (1 /* jnp after test - parity */) goto loc_00249E9B; /* jnp: not parity */

loc_00249E14:
    fp_push(MEMD(0x3C64B0)); /* fld double */
    esi = 0; /* xor self */
    esi++;
    goto loc_00249F0C;

loc_00249E22:
    if (CMP_NE(MEM32(ebp + 0x14), ecx)) goto loc_00249E5D; /* jne: not equal / not zero */

loc_00249E27:
    if (CMP_NE(MEM32(ebp + 0x10), edx)) goto loc_00249E5D; /* jne: not equal / not zero */

loc_00249E2C:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x36c0e8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00249E42; /* jne: not equal / not zero */

loc_00249E39:
    /* fstp st(0) */
    fp_push(0.0); /* fldz */
    goto loc_00249F09;

loc_00249E42:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e8] */
    /* fnstsw ax - store FPU status word */
    /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (1 /* jp after test - parity */) goto loc_00249E14; /* jp: parity */

loc_00249E52:
    fp_push(MEMD(0x3C64A8)); /* fld double */
    goto loc_00249F0C;

loc_00249E5D:
    /* cmp MEM32(ebp + 0xC), eax - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_NE(MEM32(ebp + 0xC), eax)) goto loc_00249EA3; /* jne: not equal / not zero */

loc_00249E64:
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_00249F0E; /* jne: not equal / not zero */

loc_00249E6D:
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00249E88; /* jne: not equal / not zero */

loc_00249E7D:
    fp_push(MEMD(0x3C64A8)); /* fld double */
    goto loc_00249F09;

loc_00249E88:
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (1 /* jp after test - parity */) goto loc_00249E9F; /* jp: parity */

loc_00249E9B:
    fp_push(0.0); /* fldz */
    goto loc_00249F0C;

loc_00249E9F:
    fp_push(1.0); /* fld1 */
    goto loc_00249F0C;

loc_00249EA3:
    if (CMP_NE(MEM32(ebp + 0xC), ecx)) goto loc_00249F0E; /* jne: not equal / not zero */

loc_00249EA8:
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_00249F0E; /* jne: not equal / not zero */

loc_00249EAD:
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00249D5C(); /* call 0x00249D5C */

loc_00249EBA:
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    POP32(esp, ecx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    POP32(esp, ecx);
    ecx = eax;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00249EE6; /* jne: not equal / not zero */

loc_00249ECE:
    /* cmp ecx, 1 - flags set for next jcc */
    fp_push(MEMD(0x3C64A8)); /* fld double */
    if (CMP_NE(ecx, 1)) goto loc_00249EDB; /* jne: not equal / not zero */

loc_00249ED9:
    fp_top() = -fp_top(); /* fchs */

loc_00249EDB:
    eax = MEM32(ebp + 0x18);
    /* fld st(0) */
    MEMD(eax) = fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    goto loc_00249F0E;

loc_00249EE6:
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00249F07; /* jp: parity */

loc_00249EF6:
    if (CMP_NE(ecx, 1)) goto loc_00249F03; /* jne: not equal / not zero */

loc_00249EFB:
    fp_push(MEMD(0x3C64C8)); /* fld double */
    goto loc_00249EDB;

loc_00249F03:
    fp_push(0.0); /* fldz */
    goto loc_00249EDB;

loc_00249F07:
    fp_push(1.0); /* fld1 */

loc_00249F09:
    eax = MEM32(ebp + 0x18);

loc_00249F0C:
    MEMD(eax) = fp_top(); fp_popp(); /* fstp */

loc_00249F0E:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
