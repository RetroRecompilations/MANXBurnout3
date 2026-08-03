#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246F00
 * Original: 0x00246F00 - 0x002471A4 (676 bytes, 246 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F00(void)
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

loc_00246F00:
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(ecx + 0xC) = eax;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    ebx++;
    /* test LO8(ecx), 0x10 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00246F32; /* je: equal / zero */

loc_00246F25:
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | ebx;
    MEM32(ebp + 0x10) = 0xC000008Fu;

loc_00246F32:
    if (TEST_Z(LO8(ecx), 2)) goto loc_00246F45; /* je: equal / zero */

loc_00246F37:
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    MEM32(ebp + 0x10) = 0xC0000093u;

loc_00246F45:
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_00246F57; /* je: equal / zero */

loc_00246F49:
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 4;
    MEM32(ebp + 0x10) = 0xC0000091u;

loc_00246F57:
    if (TEST_Z(LO8(ecx), 4)) goto loc_00246F6A; /* je: equal / zero */

loc_00246F5C:
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 8;
    MEM32(ebp + 0x10) = 0xC000008Eu;

loc_00246F6A:
    if (TEST_Z(LO8(ecx), 8)) goto loc_00246F7D; /* je: equal / zero */

loc_00246F6F:
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10;
    MEM32(ebp + 0x10) = 0xC0000090u;

loc_00246F7D:
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 4;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    PUSH32(esp, 2);
    ecx = ecx & 0x10;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 1;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    POP32(esp, edi);
    ecx = ecx & 8;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & 4;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 3;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & edi;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 5;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & ebx;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    PUSH32(esp, 0); sub_002476C1(); /* call 0x002476C1 */

loc_00246FE3:
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00246FEE; /* je: equal / zero */

loc_00246FE7:
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x10;

loc_00246FEE:
    if (TEST_Z(LO8(eax), 4)) goto loc_00246FF9; /* je: equal / zero */

loc_00246FF2:
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;

loc_00246FF9:
    if (TEST_Z(LO8(eax), 8)) goto loc_00247004; /* je: equal / zero */

loc_00246FFD:
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;

loc_00247004:
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0024700E; /* je: equal / zero */

loc_00247008:
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | edi;

loc_0024700E:
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00247018; /* je: equal / zero */

loc_00247012:
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | ebx;

loc_00247018:
    eax = MEM32(esi);
    ecx = 0xC00;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00247057; /* je: equal / zero */

loc_00247023:
    if (CMP_EQ(eax, 0x400)) goto loc_00247049; /* je: equal / zero */

loc_0024702A:
    if (CMP_EQ(eax, 0x800)) goto loc_0024703D; /* je: equal / zero */

loc_00247031:
    if (CMP_NE(eax, ecx)) goto loc_0024705D; /* jne: not equal / not zero */

loc_00247035:
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) | 3;
    goto loc_0024705D;

loc_0024703D:
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFEu;
    ecx = ecx | edi;
    goto loc_00247053;

loc_00247049:
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx | ebx;

loc_00247053:
    MEM32(eax) = ecx;
    goto loc_0024705D;

loc_00247057:
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFCu;

loc_0024705D:
    eax = MEM32(esi);
    ecx = 0x300;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00247088; /* je: equal / zero */

loc_00247068:
    if (CMP_EQ(eax, 0x200)) goto loc_0024707B; /* je: equal / zero */

loc_0024706F:
    if (CMP_NE(eax, ecx)) goto loc_00247095; /* jne: not equal / not zero */

loc_00247073:
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFE3u;
    goto loc_00247095;

loc_0024707B:
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFE7u;
    ecx = ecx | 4;
    goto loc_00247093;

loc_00247088:
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFEBu;
    ecx = ecx | 8;

loc_00247093:
    MEM32(eax) = ecx;

loc_00247095:
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx << 5;
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x1FFE0;
    MEM32(eax) = MEM32(eax) ^ ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) | ebx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | edi;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 0x18);
    fp_push(MEMD(eax)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x10) = fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | ebx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x60);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | edi;
    edi = MEM32(ebp + 0x1C);
    MEM32(eax + 0x60) = ecx;
    fp_push(MEMD(edi)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x50) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002476CC(); /* call 0x002476CC */

loc_002470EB:
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_001D1706(); /* call 0x001D1706 */

loc_002470FA:
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM8(eax + 8), 0x10)) goto loc_00247106; /* je: equal / zero */

loc_00247103:
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu;

loc_00247106:
    if (TEST_Z(MEM8(eax + 8), 8)) goto loc_0024710F; /* je: equal / zero */

loc_0024710C:
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFBu;

loc_0024710F:
    if (TEST_Z(MEM8(eax + 8), 4)) goto loc_00247118; /* je: equal / zero */

loc_00247115:
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u;

loc_00247118:
    if (TEST_Z(MEM8(eax + 8), 2)) goto loc_00247121; /* je: equal / zero */

loc_0024711E:
    MEM32(esi) = MEM32(esi) & 0xFFFFFFEFu;

loc_00247121:
    if (TEST_Z(MEM8(eax + 8), LO8(ebx))) goto loc_00247129; /* je: equal / zero */

loc_00247126:
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu;

loc_00247129:
    ecx = MEM32(eax);
    ecx = ecx & 3;
    ecx = ecx - 0;
    edx = 0xFFFFF3FFu;
    if ((ecx == 0)) goto loc_00247169; /* je: equal / zero */

loc_00247138:
    ecx--;
    if ((ecx == 0)) goto loc_00247157; /* je: equal / zero */

loc_0024713B:
    ecx--;
    if ((ecx == 0)) goto loc_00247147; /* je: equal / zero */

loc_0024713E:
    ecx--;
    if ((ecx != 0)) goto loc_0024716B; /* jne: not equal / not zero */

loc_00247141:
    MEM8(esi + 1) = MEM8(esi + 1) | 0xC;
    goto loc_0024716B;

loc_00247147:
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFFBFFu;
    ecx = ecx | 0x800;
    goto loc_00247165;

loc_00247157:
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFF7FFu;
    ecx = ecx | 0x400;

loc_00247165:
    MEM32(esi) = ecx;
    goto loc_0024716B;

loc_00247169:
    MEM32(esi) = MEM32(esi) & edx;

loc_0024716B:
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    ecx = ecx & 7;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0024718E; /* je: equal / zero */

loc_00247178:
    ecx--;
    if ((ecx == 0)) goto loc_00247182; /* je: equal / zero */

loc_0024717B:
    ecx--;
    if ((ecx != 0)) goto loc_0024719A; /* jne: not equal / not zero */

loc_0024717E:
    MEM32(esi) = MEM32(esi) & edx;
    goto loc_0024719A;

loc_00247182:
    ecx = MEM32(esi);
    ecx = ecx & edx;
    ecx = ecx | 0x200;
    goto loc_00247198;

loc_0024718E:
    ecx = MEM32(esi);
    ecx = ecx & edx;
    ecx = ecx | 0x300;

loc_00247198:
    MEM32(esi) = ecx;

loc_0024719A:
    fp_push(MEMD(eax + 0x50)); /* fld double */
    MEMD(edi) = fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
