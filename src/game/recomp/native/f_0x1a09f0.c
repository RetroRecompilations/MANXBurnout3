#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A09F0
 * Original: 0x001A09F0 - 0x001A0AF7 (263 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A09F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A09F0:
    if (TEST_NZ(MEM8(ebx + 0x4B), 4)) goto loc_001A0AF4; /* jne: not equal / not zero */

loc_001A09FA:
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x48));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A0AF3; /* jle: less or equal (signed <=) */

loc_001A0A0D:
    edx = (int32_t)MEMF(ebx + 0x30); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_001A0A20;

    /* nop */
    /* nop */

loc_001A0A20:
    esi = ZX8(MEM8(eax + ebp + 6));
    ecx = ZX8(MEM8(eax + ebp + 0x1E));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x118);
    esi = esi + 0x6137E4;
    edi = MEM32(esi + 0x40);
    edi = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edi + ecx * 4), edx)) goto loc_001A0A50; /* je: equal / zero */

loc_001A0A41:
    ecx = ZX8(MEM8(eax + 0x48));
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_001A0A20; /* jl: less (signed <) */

loc_001A0A4A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001A0A50:
    SET_LO8(ecx, MEM8(esp + 0x14));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A0A9D; /* jne: not equal / not zero */

loc_001A0A58:
    SET_LO8(ecx, MEM8(esp + 0x18));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A0A9D; /* jne: not equal / not zero */

loc_001A0A60:
    eax = ZX8(MEM8(eax + ebp + 0x1E));
    edx = ebx + 0x24;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(ebx + 0x4D));
    PUSH32(esp, eax);
    ecx = ebx + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edi = esi;
    PUSH32(esp, 0); sub_001A6680(); /* call 0x001A6680 */

loc_001A0A7A:
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x4C));
    ecx = eax;
    eax = MEM32(esp + 0x10);
    MEM8(ebx + 0x48) = LO8(ecx);
    eax = ZX8(MEM8(eax + ebp + 0x1E));
    edi = ebx + 0x47;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001A6860(); /* call 0x001A6860 */

loc_001A0A96:
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esp + 0x10);

loc_001A0A9D:
    SET_LO8(edx, MEM8(ebx + 0x4C));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ZX8(MEM8(eax + ebp + 0x1E));
    ecx = ZX8(MEM8(ebx + 0x48));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A0AB1; /* je: equal / zero */

loc_001A0AAD:
    eax = eax - ecx;
    goto loc_001A0AB3;

loc_001A0AB1:
    eax = eax + ecx;

loc_001A0AB3:
    eax = MEM32(esi + eax * 4);
    ecx = MEM32(eax);
    eax = MEM32(ebx + 0x38);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001A0AF1; /* jne: not equal / not zero */

loc_001A0AC1:
    SET_LO8(eax, MEM8(0x649B97));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A0AF1; /* jne: not equal / not zero */

loc_001A0ACA:
    SET_LO8(eax, MEM8(0x649B98));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A0AF1; /* jne: not equal / not zero */

loc_001A0AD3:
    eax = 0x649B28;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001A0ADD:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */

loc_001A0AF1:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A0AF3:
    POP32(esp, ebp);

loc_001A0AF4:
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
