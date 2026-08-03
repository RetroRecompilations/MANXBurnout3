#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002471A4
 * Original: 0x002471A4 - 0x00247391 (493 bytes, 173 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002471A4(void)
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

loc_002471A4:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = eax;
    esi = esi & 0x1F;
    ebx++;
    /* test LO8(eax), 8 - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (TEST_Z(LO8(eax), 8)) goto loc_002471D2; /* je: equal / zero */

loc_002471BE:
    if (TEST_Z(MEM8(ebp + 0x10), LO8(ebx))) goto loc_002471D2; /* je: equal / zero */

loc_002471C3:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002476FC(); /* call 0x002476FC */

loc_002471C9:
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFF7u;
    goto loc_0024736F;

loc_002471D2:
    if (TEST_Z(LO8(eax), 4)) goto loc_002471EC; /* je: equal / zero */

loc_002471D6:
    if (TEST_Z(MEM8(ebp + 0x10), 4)) goto loc_002471EC; /* je: equal / zero */

loc_002471DC:
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_002476FC(); /* call 0x002476FC */

loc_002471E3:
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFFBu;
    goto loc_0024736F;

loc_002471EC:
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0024729E; /* je: equal / zero */

loc_002471F4:
    if (TEST_Z(MEM8(ebp + 0x10), 8)) goto loc_0024729E; /* je: equal / zero */

loc_002471FE:
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_002476FC(); /* call 0x002476FC */

loc_00247205:
    eax = MEM32(ebp + 0x10);
    POP32(esp, ecx);
    ecx = 0xC00;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_0024727A; /* je: equal / zero */

loc_00247212:
    if (CMP_EQ(eax, 0x400)) goto loc_00247260; /* je: equal / zero */

loc_00247219:
    if (CMP_EQ(eax, 0x800)) goto loc_0024723E; /* je: equal / zero */

loc_00247220:
    if (CMP_NE(eax, ecx)) goto loc_00247296; /* jne: not equal / not zero */

loc_00247224:
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    fp_push(MEMD(0x3C64B8)); /* fld double */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00247294; /* je: equal / zero */

loc_0024723C:
    goto loc_00247292;

loc_0024723E:
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00247258; /* jne: not equal / not zero */

loc_00247250:
    fp_push(MEMD(0x3C64A8)); /* fld double */
    goto loc_00247294;

loc_00247258:
    fp_push(MEMD(0x3C64B8)); /* fld double */
    goto loc_00247292;

loc_00247260:
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0024728C; /* jne: not equal / not zero */

loc_00247272:
    fp_push(MEMD(0x3C64B8)); /* fld double */
    goto loc_00247294;

loc_0024727A:
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00247250; /* je: equal / zero */

loc_0024728C:
    fp_push(MEMD(0x3C64A8)); /* fld double */

loc_00247292:
    fp_top() = -fp_top(); /* fchs */

loc_00247294:
    MEMD(ecx) = fp_top(); fp_popp(); /* fstp */

loc_00247296:
    esi = esi & 0xFFFFFFFEu;
    goto loc_0024736F;

loc_0024729E:
    if (TEST_Z(LO8(eax), 2)) goto loc_0024736F; /* je: equal / zero */

loc_002472A6:
    if (TEST_Z(MEM8(ebp + 0x10), 0x10)) goto loc_0024736F; /* je: equal / zero */

loc_002472B0:
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), 0x10)) goto loc_002472B8; /* je: equal / zero */

loc_002472B6:
    esi = ebx;

loc_002472B8:
    fp_push(MEMD(0x36C0E0)); /* fld double */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_push(MEMD(edi)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00247359; /* jnp: not parity */

loc_002472D1:
    fp_push(MEMD(edi)); /* fld double */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0024760D(); /* call 0x0024760D */

loc_002472E1:
    ecx = MEM32(ebp + -8);
    MEMD(ebp + -16) = fp_top(); fp_pop(); /* fst */
    ecx = ecx + 0xFFFFFA00u;
    esp = esp + 0xC;
    if (CMP_GE(ecx, 0xFFFFFBCEu)) goto loc_00247302; /* jge: greater or equal (signed >=) */

loc_002472F8:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = ebx;
    goto loc_00247355;

loc_00247302:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x36c0e0] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00247313; /* jp: parity */

loc_0024730F:
    edx = ebx;
    goto loc_00247315;

loc_00247313:
    edx = 0; /* xor self */

loc_00247315:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + -10));
    eax = eax & 0xF;
    eax = eax | 0x10;
    MEM16(ebp + -10) = LO16(eax);
    eax = 0xFFFFFC03u;
    if (CMP_GE(ecx, eax)) goto loc_0024734C; /* jge: greater or equal (signed >=) */

loc_0024732D:
    eax = eax - ecx;

loc_0024732F:
    if (TEST_Z(MEM8(ebp + -16), LO8(ebx))) goto loc_0024733A; /* je: equal / zero */

loc_00247334:
    if (TEST_NZ(esi, esi)) goto loc_0024733A; /* jne: not equal / not zero */

loc_00247338:
    esi = ebx;

loc_0024733A:
    MEM32(ebp + -16) = MEM32(ebp + -16) >> 1;
    if (TEST_Z(MEM8(ebp + -12), LO8(ebx))) goto loc_00247346; /* je: equal / zero */

loc_00247342:
    MEM8(ebp + -13) = MEM8(ebp + -13) | 0x80;

loc_00247346:
    MEM32(ebp + -12) = MEM32(ebp + -12) >> 1;
    eax--;
    if ((eax != 0)) goto loc_0024732F; /* jne: not equal / not zero */

loc_0024734C:
    /* test edx, edx - flags set for next jcc */
    fp_push(MEMD(ebp + -16)); /* fld double */
    if (TEST_Z(edx, edx)) goto loc_00247355; /* je: equal / zero */

loc_00247353:
    fp_top() = -fp_top(); /* fchs */

loc_00247355:
    MEMD(edi) = fp_top(); fp_popp(); /* fstp */
    goto loc_0024735B;

loc_00247359:
    esi = ebx;

loc_0024735B:
    /* test esi, esi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00247368; /* je: equal / zero */

loc_00247360:
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002476FC(); /* call 0x002476FC */

loc_00247367:
    POP32(esp, ecx);

loc_00247368:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    esi = MEM32(ebp + -4);

loc_0024736F:
    if (TEST_Z(MEM8(ebp + 8), 0x10)) goto loc_00247386; /* je: equal / zero */

loc_00247375:
    if (TEST_Z(MEM8(ebp + 0x10), 0x20)) goto loc_00247386; /* je: equal / zero */

loc_0024737B:
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002476FC(); /* call 0x002476FC */

loc_00247382:
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFEFu;

loc_00247386:
    eax = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
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
