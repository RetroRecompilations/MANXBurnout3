#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244D08
 * Original: 0x00244D08 - 0x00244DA4 (156 bytes, 68 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00244D08:
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xE);
    ecx = 0x7FF0;
    edx = eax;
    edx = edx & ecx;
    if (CMP_NE(LO16(edx), LO16(ecx))) goto loc_00244D49; /* jne: not equal / not zero */

loc_00244D1C:
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002475B2(); /* call 0x002475B2 */

loc_00244D29:
    eax--;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((eax == 0)) goto loc_00244D42; /* je: equal / zero */

loc_00244D2E:
    eax--;
    if ((eax == 0)) goto loc_00244D3E; /* je: equal / zero */

loc_00244D31:
    eax--;
    if ((eax == 0)) goto loc_00244D39; /* je: equal / zero */

loc_00244D34:
    eax = 0; /* xor self */
    eax++;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00244D39:
    PUSH32(esp, 2);

loc_00244D3B:
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00244D3E:
    PUSH32(esp, 4);
    goto loc_00244D3B;

loc_00244D42:
    eax = 0x200;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00244D49:
    eax = eax & 0x8000;
    /* test LO16(edx), LO16(edx) - flags set for next jcc */
    ecx = eax;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_00244D74; /* jne: not equal / not zero */

loc_00244D55:
    if (TEST_NZ(MEM32(ebp + 0xC), 0xFFFFF)) goto loc_00244D64; /* jne: not equal / not zero */

loc_00244D5E:
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00244D74; /* je: equal / zero */

loc_00244D64:
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFF90u;
    eax = eax + 0x80;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00244D74:
    fp_push(MEMD(0x36C0E0)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = ecx;
    if (1 /* jp after test - parity */) goto loc_00244D94; /* jp: parity */

loc_00244D88:
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x40;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00244D94:
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFF08u;
    eax = eax + 0x100;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
