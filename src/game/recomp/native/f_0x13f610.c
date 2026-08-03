#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013F610
 * Original: 0x0013F610 - 0x0013F83B (555 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F610(void)
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

loc_0013F610:
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(0x4D5370);
    if (CMP_EQ(edi, 0x4D4290)) goto loc_0013F834; /* je: equal / zero */

loc_0013F626:
    /* cmp edi, 0x4D4008 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    MEM32(esp + 0xC) = eax;
    MEM32(ebx) = 1;
    if (CMP_EQ(edi, 0x4D4008)) goto loc_0013F805; /* je: equal / zero */

loc_0013F643:
    edx = MEM32(edi + 0xA8);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0013F669; /* jle: less or equal (signed <=) */

loc_0013F64F:
    ecx = 0x73B3BE;

loc_0013F654:
    SET_LO8(eax, LO8(eax) | MEM8(ecx));
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0013F654; /* jne: not equal / not zero */

loc_0013F65F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F669; /* je: equal / zero */

loc_0013F663:
    MEM32(ebx) = 3;

loc_0013F669:
    edx = MEM32(edi + 0xA8);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0013F692; /* jle: less or equal (signed <=) */

loc_0013F675:
    ecx = 0x73B669;
    /* nop */

loc_0013F680:
    SET_LO8(eax, LO8(eax) | MEM8(ecx));
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0013F680; /* jne: not equal / not zero */

loc_0013F68B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F692; /* je: equal / zero */

loc_0013F68F:
    MEM32(ebx) = MEM32(ebx) | 4;

loc_0013F692:
    edx = MEM32(edi + 0xA8);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0013F6B5; /* jle: less or equal (signed <=) */

loc_0013F69E:
    ecx = 0x73B66A;

loc_0013F6A3:
    SET_LO8(eax, LO8(eax) | MEM8(ecx));
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0013F6A3; /* jne: not equal / not zero */

loc_0013F6AE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F6B5; /* je: equal / zero */

loc_0013F6B2:
    MEM32(ebx) = MEM32(ebx) | 0x20;

loc_0013F6B5:
    edx = MEM32(edi + 0xA8);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0013F6D8; /* jle: less or equal (signed <=) */

loc_0013F6C1:
    ecx = 0x73B668;

loc_0013F6C6:
    SET_LO8(eax, LO8(eax) | MEM8(ecx));
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0013F6C6; /* jne: not equal / not zero */

loc_0013F6D1:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F6D8; /* je: equal / zero */

loc_0013F6D5:
    MEM32(ebx) = MEM32(ebx) | 0x40;

loc_0013F6D8:
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0xA8);
    SET_LO8(ecx, 0); /* xor self */
    eax = 0; /* xor self */
    /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(ebp & ebp, 0)) goto loc_0013F716; /* jle: less or equal (signed <=) */

loc_0013F6E8:
    esi = 0x667E90;
    /* nop */

loc_0013F6F0:
    edx = 0; /* xor self */
    /* cmp eax, MEM32(0x731F90) - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(eax, MEM32(0x731F90))) ? 1 : 0); /* setge */
    edx--;
    edx = edx & esi;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx + 0x210));
    eax++;
    esi = esi + 0x4AD0;
    if (CMP_L(eax, ebp)) goto loc_0013F6F0; /* jl: less (signed <) */

loc_0013F70F:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0013F716; /* je: equal / zero */

loc_0013F713:
    MEM32(ebx) = MEM32(ebx) | 8;

loc_0013F716:
    eax = MEM32(edi + 0xA8);
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0013F7A1; /* jle: less or equal (signed <=) */

loc_0013F728:
    xmm0.f[0] = MEMF(0x3EC240); /* movss */
    edx = 0x73BB8C;

loc_0013F735:
    ebp = MEM32(edi + 0xAC);
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    eax = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0013F780; /* jle: less or equal (signed <=) */

loc_0013F744:
    ecx = ecx * 4 + 0x740A34;
    goto loc_0013F750;

    /* nop */

loc_0013F750:
    xmm1.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x10))) goto loc_0013F77E; /* ja: above (unsigned >) */

loc_0013F76B:
    ebp = MEM32(edi + 0xAC);
    eax++;
    ecx = ecx + 0x2470;
    if (CMP_L(eax, ebp)) goto loc_0013F750; /* jl: less (signed <) */

loc_0013F77C:
    goto loc_0013F780;

loc_0013F77E:
    SET_LO8(ebx, 1);

loc_0013F780:
    eax = MEM32(edi + 0xA8);
    esi++;
    edx = edx + 0x27E0;
    if (CMP_L(esi, eax)) goto loc_0013F735; /* jl: less (signed <) */

loc_0013F791:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0013F7A1; /* je: equal / zero */

loc_0013F795:
    esi = MEM32(esp + 0x1C);
    MEM32(esi) = MEM32(esi) | 0x80;
    goto loc_0013F7A5;

loc_0013F7A1:
    esi = MEM32(esp + 0x1C);

loc_0013F7A5:
    if (CMP_EQ(MEM32(0x60EA18), 1)) goto loc_0013F7B1; /* je: equal / zero */

loc_0013F7AE:
    MEM32(esi) = MEM32(esi) | 0x10;

loc_0013F7B1:
    eax = 0x40FBB0;
    PUSH32(esp, 0); sub_00146480(); /* call 0x00146480 */

loc_0013F7BB:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F7C5; /* je: equal / zero */

loc_0013F7BF:
    MEM32(esi) = MEM32(esi) | 0x100;

loc_0013F7C5:
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x60EA20) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x60EA20))) goto loc_0013F7D9; /* jbe: below or equal (unsigned <=) */

loc_0013F7D3:
    MEM32(esi) = MEM32(esi) | 0x200;

loc_0013F7D9:
    SET_LO8(eax, MEM8(esi + 0x3D3D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013F7F9; /* jne: not equal / not zero */

loc_0013F7E3:
    SET_LO8(eax, MEM8(0x752D31));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013F7F9; /* jne: not equal / not zero */

loc_0013F7EC:
    SET_LO8(eax, MEM8(0x752D30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F7FF; /* je: equal / zero */

loc_0013F7F5:
    esi = MEM32(esp + 0x1C);

loc_0013F7F9:
    MEM32(esi) = 0x800;

loc_0013F7FF:
    ebx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0013F805:
    eax = MEM32(ebx + 0x3AA8);
    if (TEST_Z(eax, eax)) goto loc_0013F824; /* je: equal / zero */

loc_0013F80F:
    if (CMP_NE(MEM32(eax + 0x24), 0xB)) goto loc_0013F824; /* jne: not equal / not zero */

loc_0013F815:
    SET_LO8(eax, MEM8(0x4AE1D5));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0013F824; /* jle: less or equal (signed <=) */

loc_0013F81E:
    MEM32(ebx) = MEM32(ebx) | 0x400;

loc_0013F824:
    ecx = MEM32(esp + 0xC);
    if (CMP_EQ(MEM32(ebx), ecx)) goto loc_0013F833; /* je: equal / zero */

loc_0013F82C:
    eax = ebx;
    PUSH32(esp, 0); sub_0013F840(); /* call 0x0013F840 */

loc_0013F833:
    POP32(esp, ebx);

loc_0013F834:
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
