#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024760D
 * Original: 0x0024760D - 0x002476C1 (180 bytes, 64 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024760D(void)
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

loc_0024760D:
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMD(0x36C0E0)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0024762B; /* jp: parity */

loc_00247622:
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    goto loc_002476BA;

loc_0024762B:
    ecx = 0; /* xor self */
    if (TEST_NZ(MEM16(ebp + 0xE), 0x7FF0)) goto loc_00247697; /* jne: not equal / not zero */

loc_00247635:
    if (TEST_NZ(MEM32(ebp + 0xC), 0xFFFFF)) goto loc_00247643; /* jne: not equal / not zero */

loc_0024763E:
    if (CMP_EQ(MEM32(ebp + 8), ecx)) goto loc_00247697; /* je: equal / zero */

loc_00247643:
    fp_push(MEMD(ebp + 8)); /* fld double */
    edx = 0xFFFFFC03u;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0024765D; /* jp: parity */

loc_00247658:
    eax = 0; /* xor self */
    eax++;
    goto loc_00247672;

loc_0024765D:
    eax = 0; /* xor self */
    goto loc_00247672;

loc_00247661:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) << 1;
    if (TEST_Z(MEM8(ebp + 0xB), 0x80)) goto loc_0024766E; /* je: equal / zero */

loc_0024766A:
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 1;

loc_0024766E:
    MEM32(ebp + 8) = MEM32(ebp + 8) << 1;
    edx--;

loc_00247672:
    if (TEST_Z(MEM8(ebp + 0xE), 0x10)) goto loc_00247661; /* je: equal / zero */

loc_00247678:
    MEM8(ebp + 0xE) = MEM8(ebp + 0xE) & 0xEF;
    if (CMP_EQ(eax, ecx)) goto loc_00247684; /* je: equal / zero */

loc_00247680:
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) | 0x80;

loc_00247684:
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00247588(); /* call 0x00247588 */

loc_00247692:
    esp = esp + 0xC;
    goto loc_002476BA;

loc_00247697:
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00247588(); /* call 0x00247588 */

loc_002476A5:
    edx = MEM32(ebp + 0xE);
    edx = edx >> 4;
    edx = edx & 0x7FF;
    esp = esp + 0xC;
    edx = edx - 0x3FE;

loc_002476BA:
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
