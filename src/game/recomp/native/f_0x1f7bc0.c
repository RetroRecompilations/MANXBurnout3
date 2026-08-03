#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F7BC0
 * Original: 0x001F7BC0 - 0x001F7F60 (928 bytes, 291 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7BC0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7BC0:
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    fp_push(MEMF(edi)); /* fld float */
    eax = esp + 0x10;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001FFE00(); /* call 0x001FFE00 */

loc_001F7BFB:
    SET_LO8(ebx, MEM8(esp + 0x44));
    ebp = MEM32(esp + 0x3C);
    esp = esp + 8;
    if (TEST_Z(LO8(ebx), 2)) goto loc_001F7CB6; /* je: equal / zero */

loc_001F7C0F:
    fp_push(MEMF(0x3B16E0)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_001F7CAF; /* jnp: not parity */

loc_001F7C26:
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DBA70(); /* call 0x001DBA70 */

loc_001F7C35:
    /* fstp st(0) */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    esp = esp + 8;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b16d8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001F7C82; /* jne: not equal / not zero */

loc_001F7C78:
    /* fstp st(0) */
    fp_push(MEMF(0x3B16D8)); /* fld float */
    goto loc_001F7C97;

loc_001F7C82:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x36dbc4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7C97; /* jp: parity */

loc_001F7C8F:
    /* fstp st(0) */
    fp_push(MEMF(0x36DBC4)); /* fld float */

loc_001F7C97:
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fdivr st(1) */
    MEMF(ebp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_001F7CB6;

loc_001F7CAF:
    MEM32(ebp + 4) = 0x3F800000;

loc_001F7CB6:
    if (TEST_Z(LO8(ebx), 1)) goto loc_001F7D3A; /* je: equal / zero */

loc_001F7CBB:
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edi + 0x28] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001F7CD2; /* jne: not equal / not zero */

loc_001F7CC9:
    MEM32(ebp) = 0;
    goto loc_001F7D3A;

loc_001F7CD2:
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edi + 0x24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7CE9; /* jp: parity */

loc_001F7CE0:
    MEM32(ebp) = 0x3F800000;
    goto loc_001F7D3A;

loc_001F7CE9:
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x3b1910] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7D27; /* jp: parity */

loc_001F7D12:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b169c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7D27; /* jp: parity */

loc_001F7D1F:
    /* fstp st(0) */
    fp_push(MEMF(0x3B169C)); /* fld float */

loc_001F7D27:
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_001F7D3A:
    if (TEST_Z(LO8(ebx), 4)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7D43:
    fp_push(MEMF(0x3B16E0)); /* fld float */
    ecx = MEM32(esi + 0x50);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7D9C; /* jp: parity */

loc_001F7D5D:
    fp_push(MEMF(0x3B16E0)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7D9C; /* jp: parity */

loc_001F7D70:
    fp_push(MEMF(0x3B16E0)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7D9C; /* jp: parity */

loc_001F7D83:
    edx = esi + 0x4C;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_001F7DAE;

loc_001F7D9C:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DBA70(); /* call 0x001DBA70 */

loc_001F7DA9:
    /* fstp st(0) */
    esp = esp + 8;

loc_001F7DAE:
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x3b1684] */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b16e0] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7DED; /* jp: parity */

loc_001F7DE3:
    /* fstp st(0) */
    fp_push(MEMF(0x3B16E0)); /* fld float */
    goto loc_001F7E02;

loc_001F7DED:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b168c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001F7E02; /* jne: not equal / not zero */

loc_001F7DFA:
    /* fstp st(0) */
    fp_push(MEMF(0x3B168C)); /* fld float */

loc_001F7E02:
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x3b1684] */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b16e0] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7E44; /* jp: parity */

loc_001F7E3A:
    /* fstp st(0) */
    fp_push(MEMF(0x3B16E0)); /* fld float */
    goto loc_001F7E59;

loc_001F7E44:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x3b168c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001F7E59; /* jne: not equal / not zero */

loc_001F7E51:
    /* fstp st(0) */
    fp_push(MEMF(0x3B168C)); /* fld float */

loc_001F7E59:
    MEMF(ebp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x3b168c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001F7E90; /* jne: not equal / not zero */

loc_001F7E86:
    MEM32(esp + 0x30) = 0x3F800000;
    goto loc_001F7EA9;

loc_001F7E90:
    fp_push(MEMF(esp + 0x30)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x3b16c0] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7EA9; /* jp: parity */

loc_001F7EA1:
    MEM32(esp + 0x30) = 0xBF800000u;

loc_001F7EA9:
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00175A00(); /* call 0x00175A00 */

loc_001F7EB3:
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x3b16e0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_001F7F12; /* jne: not equal / not zero */

loc_001F7F07:
    fp_push(MEMF(0x3B1738)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_001F7F12:
    eax = MEM32(esp + 0x38);
    /* fstp st(0) */
    eax = eax - 2;
    if ((eax == 0)) goto loc_001F7F40; /* je: equal / zero */

loc_001F7F1D:
    eax--;
    if ((eax != 0)) goto loc_001F7F58; /* jne: not equal / not zero */

loc_001F7F20:
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    POP32(esp, edi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    POP32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001F7F40:
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_001F7F58:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
