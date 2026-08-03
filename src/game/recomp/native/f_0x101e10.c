#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101E10
 * Original: 0x00101E10 - 0x00101F91 (385 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101E10:
    eax = MEM32(0x731F9C);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_00101E28; /* jne: not equal / not zero */

loc_00101E1F:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00101E28:
    PUSH32(esp, esi);
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00101E33:
    edx = MEM32(0x5729A8);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10;
    eax = eax + 8;
    MEM32(esp + 0xC) = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00101E61; /* jle: less or equal (signed <=) */

loc_00101E4F:
    /* nop */

loc_00101E50:
    esi = MEM32(eax * 4 + 0x572988);
    if (TEST_Z(esi, esi)) goto loc_00101E5C; /* je: equal / zero */

loc_00101E5B:
    ecx++;

loc_00101E5C:
    eax++;
    if (CMP_L(eax, edx)) goto loc_00101E50; /* jl: less (signed <) */

loc_00101E61:
    PUSH32(esp, ebp);
    ebp = MEM32(0x731F9C);
    esi = 0; /* xor self */
    /* test ebp, ebp - flags set for next jcc */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00101F85; /* jle: less or equal (signed <=) */

loc_00101E7D:
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x28);
    MEM32(esp + 0x10) = ecx;
    goto loc_00101E91;

loc_00101E8D:
    ecx = MEM32(esp + 0x10);

loc_00101E91:
    edi = MEM32(esi * 4 + 0x731E90);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00101EAE; /* jle: less or equal (signed <=) */

loc_00101E9E:
    ecx = ecx + 8;

loc_00101EA1:
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_00101EB1; /* je: equal / zero */

loc_00101EA6:
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_00101EA1; /* jl: less (signed <) */

loc_00101EAE:
    eax = eax | 0xFFFFFFFFu;

loc_00101EB1:
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x242B);
    if (CMP_NE(ecx, eax)) goto loc_00101EC3; /* jne: not equal / not zero */

loc_00101EBC:
    if (CMP_GE(ebx, MEM32(esp + 0x14))) goto loc_00101EC8; /* jge: greater or equal (signed >=) */

loc_00101EC2:
    ebx++;

loc_00101EC3:
    esi++;
    if (CMP_L(esi, ebp)) goto loc_00101E8D; /* jl: less (signed <) */

loc_00101EC8:
    if (TEST_Z(ebx, ebx)) goto loc_00101F85; /* je: equal / zero */

loc_00101ED0:
    edx = MEM32(esp + 0x20);
    fp_push(MEMF(0x39A34C)); /* fld float */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x16);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* test ebx, ebx - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x6EA);
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = ebx;
    /* FPU: fdivr dword ptr [0x3b17e8] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_00101F10; /* jge: greater or equal (signed >=) */

loc_00101F0A:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00101F10:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    esp = esp - 8;
    fp_push(MEMF(0x3B17E8)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00243373(); /* call 0x00243373 */

loc_00101F27:
    esp = esp + 8;
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00101F2F:
    edx = MEM32(0x4A1D84);
    if (CMP_NE(LO16(edx), 0xFFFF)) goto loc_00101F3E; /* jne: not equal / not zero */

loc_00101F3C:
    edx = 0; /* xor self */

loc_00101F3E:
    edi = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edi + 0x6E8));
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_00101F7E; /* je: equal / zero */

loc_00101F52:
    if (CMP_AE(LO16(edx), 0x5555)) goto loc_00101F67; /* jae: above or equal (unsigned >=) */

loc_00101F59:
    if (CMP_BE(LO16(esi), 0xAAAA)) goto loc_00101F67; /* jbe: below or equal (unsigned <=) */

loc_00101F60:
    ecx = edx;
    ecx = ecx - esi;
    ecx--;
    goto loc_00101F6B;

loc_00101F67:
    ecx = edx;
    ecx = ecx - esi;

loc_00101F6B:
    ecx = ZX16(LO16(ecx));
    if (CMP_GE(ecx, eax)) goto loc_00101F7E; /* jge: greater or equal (signed >=) */

loc_00101F72:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00101F7E:
    MEM16(edi + 0x6E8) = LO16(edx);

loc_00101F85:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
