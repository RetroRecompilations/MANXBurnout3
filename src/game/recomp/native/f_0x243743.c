#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243743
 * Original: 0x00243743 - 0x00243816 (211 bytes, 89 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243743(void)
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

loc_00243743:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x3C60FC));
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_0024375B:
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = MEM32(ebp + 0xE);
    PUSH32(esp, ecx);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    /* cmp LO16(eax), 0x7FF0 - flags set for next jcc */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(LO16(eax), 0x7FF0)) goto loc_002437C9; /* jne: not equal / not zero */

loc_00243774:
    PUSH32(esp, 0); sub_002475B2(); /* call 0x002475B2 */

loc_00243779:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(eax & eax, 0)) goto loc_002437AC; /* jle: less or equal (signed <=) */

loc_0024377F:
    if (CMP_LE(eax, 2)) goto loc_0024379E; /* jle: less or equal (signed <=) */

loc_00243784:
    if (CMP_NE(eax, 3)) goto loc_002437AC; /* jne: not equal / not zero */

loc_00243789:
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_00247484(); /* call 0x00247484 */

loc_00243799:
    esp = esp + 0x10;
    goto loc_00243812;

loc_0024379E:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_002437A5:
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00243812;

loc_002437AC:
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 8);
    goto loc_0024380A;

loc_002437C9:
    PUSH32(esp, 0); sub_00247577(); /* call 0x00247577 */

loc_002437CE:
    MEMD(ebp + -8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_002437F0; /* jp: parity */

loc_002437E2:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_002437E9:
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00243812;

loc_002437F0:
    if (TEST_NZ(LO8(ebx), 0x20)) goto loc_002437E2; /* jne: not equal / not zero */

loc_002437F5:
    fp_push(MEMD(ebp + -8)); /* fld double */
    PUSH32(esp, ebx);
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x10);

loc_0024380A:
    PUSH32(esp, 0); sub_002474D7(); /* call 0x002474D7 */

loc_0024380F:
    esp = esp + 0x1C;

loc_00243812:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
