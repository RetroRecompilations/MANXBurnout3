#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F79B0
 * Original: 0x001F79B0 - 0x001F7A8B (219 bytes, 77 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F79B0(void)
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

loc_001F79B0:
    eax = MEM32(0x3C1260);
    esp = esp - 8;
    eax = eax - 2;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_001F7A5D; /* je: equal / zero */

loc_001F79C7:
    eax--;
    if ((eax != 0)) goto loc_001F7A68; /* jne: not equal / not zero */

loc_001F79CE:
    PUSH32(esp, ebp);
    ebp = MEM32(0x41B550);
    edi = 0; /* xor self */
    /* cmp ebp, 0x41B550 - flags set for next jcc */
    MEM32(esp + 0xC) = 0x7F7FFFFF;
    if (CMP_EQ(ebp, 0x41B550)) goto loc_001F7A55; /* je: equal / zero */

loc_001F79E7:
    PUSH32(esp, ebx);

loc_001F79E8:
    fp_push(MEMF(ebp + 8)); /* fld float */
    ebx = ebp + -40;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(0x41B560);
    /* test eax, eax - flags set for next jcc */
    fp_push(MEMF(ebx + 0x34)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    if (TEST_Z(eax, eax)) goto loc_001F7A34; /* je: equal / zero */

loc_001F7A1F:
    eax = MEM32(esp + 0x20);
    /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41B560), _icall_esp); /* indirect call */
    }

loc_001F7A2D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp + 8;

loc_001F7A34:
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_001F7A47; /* jp: parity */

loc_001F7A3F:
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    edi = ebx;
    goto loc_001F7A49;

loc_001F7A47:
    /* fstp st(0) */

loc_001F7A49:
    ebp = MEM32(ebp);
    if (CMP_NE(ebp, 0x41B550)) goto loc_001F79E8; /* jne: not equal / not zero */

loc_001F7A54:
    POP32(esp, ebx);

loc_001F7A55:
    PUSH32(esp, 0); sub_001F7840(); /* call 0x001F7840 */

loc_001F7A5A:
    POP32(esp, ebp);
    goto loc_001F7A68;

loc_001F7A5D:
    edi = MEM32(0x41B55C);
    PUSH32(esp, 0); sub_001F7840(); /* call 0x001F7840 */

loc_001F7A68:
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F7BC0(); /* call 0x001F7BC0 */

loc_001F7A82:
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
