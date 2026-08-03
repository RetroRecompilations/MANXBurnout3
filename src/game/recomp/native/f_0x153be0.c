#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153BE0
 * Original: 0x00153BE0 - 0x00153E12 (562 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153BE0:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x5F0);
    eax--;
    /* cmp eax, 0x18 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x4D5370);
    if (CMP_A(eax, 0x18)) goto loc_00153DB4; /* ja: above (unsigned >) */

loc_00153BFB:
    eax = ZX8(MEM8(eax + 0x153E34));
    { uint32_t _jt = MEM32(eax * 4 + 0x153E14); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00153C09u) goto loc_00153C09;
    if (_jt == 0x00153C1Du) goto loc_00153C1D;
    if (_jt == 0x00153C3Cu) goto loc_00153C3C;
    if (_jt == 0x00153C46u) goto loc_00153C46;
    if (_jt == 0x00153C67u) goto loc_00153C67;
    if (_jt == 0x00153C71u) goto loc_00153C71;
    if (_jt == 0x00153D68u) goto loc_00153D68;
    if (_jt == 0x00153DB4u) goto loc_00153DB4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00153C09:
    MEM32(esi + 0x5F4) = 0xD;
    MEM32(esi + 0x5F0) = 2;

loc_00153C1D:
    if (CMP_EQ(edi, 0x4D4008)) goto loc_00153C32; /* je: equal / zero */

loc_00153C25:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00153C2A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153D8C; /* je: equal / zero */

loc_00153C32:
    MEM32(esi + 0x5F0) = 3;

loc_00153C3C:
    MEM32(esi + 0x5F0) = 4;

loc_00153C46:
    if (CMP_EQ(edi, 0x4D4798)) goto loc_00153C5D; /* je: equal / zero */

loc_00153C4E:
    eax = esi;
    PUSH32(esp, 0); sub_00152ED0(); /* call 0x00152ED0 */

loc_00153C55:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153D8C; /* je: equal / zero */

loc_00153C5D:
    MEM32(esi + 0x5F0) = 5;

loc_00153C67:
    MEM32(esi + 0x5F0) = 6;

loc_00153C71:
    eax = esi;
    PUSH32(esp, 0); sub_00155330(); /* call 0x00155330 */

loc_00153C78:
    ecx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x4A1BE4);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    MEM32(0x4A1BE0) = eax;
    MEM32(0x4A1BE4) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00153CB0; /* jge: greater or equal (signed >=) */

loc_00153CAA:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00153CB0:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(esi + 0x62E));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x610) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153D5E; /* je: equal / zero */

loc_00153CD6:
    eax = MEM32(esi + 0x5F4);
    if (TEST_Z(eax, eax)) goto loc_00153D5E; /* je: equal / zero */

loc_00153CE0:
    /* cmp MEM32(esp + 0x10), 5 - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x564));
    if (CMP_NE(MEM32(esp + 0x10), 5)) goto loc_00153CF1; /* jne: not equal / not zero */

loc_00153CED:
    SET_LO8(eax, LO8(eax) | 4);
    goto loc_00153CF3;

loc_00153CF1:
    SET_LO8(eax, LO8(eax) & 0xFB);

loc_00153CF3:
    MEM8(esi + 0x564) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153D16; /* je: equal / zero */

loc_00153D03:
    SET_LO8(eax, MEM8(esi + 0x566));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00153D16; /* jne: not equal / not zero */

loc_00153D0D:
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_00153D12:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00153D1C; /* jne: not equal / not zero */

loc_00153D16:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_00153D1C:
    SET_LO8(eax, MEM8(esi + 0xD0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153D32; /* je: equal / zero */

loc_00153D26:
    MEM32(esi + 0x5F4) = 0xB;
    goto loc_00153DAA;

loc_00153D32:
    eax = esi;
    PUSH32(esp, 0); sub_00153230(); /* call 0x00153230 */

loc_00153D39:
    /* cmp MEM32(esi + 0x5F8), 2 - flags set for next jcc */
    MEM32(esi + 0x5F4) = 0;
    if (CMP_NE(MEM32(esi + 0x5F8), 2)) goto loc_00153D5E; /* jne: not equal / not zero */

loc_00153D4C:
    POP32(esp, edi);
    MEM32(esi + 0x5F0) = 0x17;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00153D5E:
    MEM32(esi + 0x5F0) = 7;

loc_00153D68:
    SET_LO8(eax, MEM8(esi + 0x62E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153DA0; /* je: equal / zero */

loc_00153D72:
    eax = esi;
    PUSH32(esp, 0); sub_00152F30(); /* call 0x00152F30 */

loc_00153D79:
    SET_LO8(eax, MEM8(esi + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153D94; /* je: equal / zero */

loc_00153D83:
    if (CMP_EQ(MEM32(esi + 0x544), 2)) goto loc_00153D94; /* je: equal / zero */

loc_00153D8C:
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00153D94:
    MEM32(esi + 0x5F4) = 1;
    goto loc_00153DAA;

loc_00153DA0:
    MEM32(esi + 0x5F4) = 0xD;

loc_00153DAA:
    MEM32(esi + 0x5F0) = 0x17;

loc_00153DB4:
    eax = MEM32(esp + 0x10);
    ecx = esi;
    PUSH32(esp, 0); sub_00154110(); /* call 0x00154110 */

loc_00153DBF:
    edx = (uint32_t)(int32_t)SMEM8(0x4AE1D5);
    xmm1.f[0] = MEMF(0x3EC928); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x620) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC92C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x628) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001553D0(); /* call 0x001553D0 */

loc_00153E0A:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
