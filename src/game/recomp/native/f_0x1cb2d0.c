#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB2D0
 * Original: 0x001CB2D0 - 0x001CB47E (430 bytes, 157 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB2D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001CB2D0:
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x2E));
    eax--;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_001CB3A4; /* je: equal / zero */

loc_001CB2DD:
    eax = eax - 2;
    if ((eax != 0)) goto loc_001CB47B; /* jne: not equal / not zero */

loc_001CB2E6:
    if (TEST_NZ(MEM8(esi + 0x31), 8)) goto loc_001CB2F3; /* jne: not equal / not zero */

loc_001CB2EC:
    MEM8(esi + 0x2E) = 0;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CB2F3:
    SET_LO8(eax, MEM8(esi + 0x2F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CB334; /* jne: not equal / not zero */

loc_001CB2FA:
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB305:
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BD30(); /* call 0x0020BD30 */

loc_001CB312:
    eax = MEM32(esi + 0x20);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001CB334; /* je: equal / zero */

loc_001CB31C:
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB324:
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BD30(); /* call 0x0020BD30 */

loc_001CB331:
    esp = esp + 0x10;

loc_001CB334:
    if (CMP_AE(MEM8(esi + 0x2F), 5)) goto loc_001CB399; /* jae: above or equal (unsigned >=) */

loc_001CB33A:
    ecx = esi;
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_001CB341:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CB399; /* je: equal / zero */

loc_001CB345:
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BCD0(); /* call 0x0020BCD0 */

loc_001CB34E:
    eax = ZX8(MEM8(esi + 0x2F));
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* fstp st(0) */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CB376:
    eax = MEM32(esi + 0x20);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001CB409; /* je: equal / zero */

loc_001CB384:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CB38B:
    SET_LO8(eax, MEM8(esi + 0x2F));
    esp = esp + 8;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x2F) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CB399:
    MEM8(esi + 0x2E) = 0;
    MEM8(esi + 0x2F) = 0;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CB3A4:
    if (CMP_AE(MEM8(esi + 0x2F), 5)) goto loc_001CB43F; /* jae: above or equal (unsigned >=) */

loc_001CB3AE:
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BD20(); /* call 0x0020BD20 */

loc_001CB3B7:
    esp = esp + 4;
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001CB40F; /* je: equal / zero */

loc_001CB3C1:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCD0(); /* call 0x0020BCD0 */

loc_001CB3C7:
    ecx = ZX8(MEM8(esi + 0x2F));
    edx = MEM32(esi + 0x14);
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x3b168c] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* fstp st(0) */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CB3F5:
    eax = MEM32(esi + 0x20);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001CB409; /* je: equal / zero */

loc_001CB3FF:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CB406:
    esp = esp + 8;

loc_001CB409:
    MEM8(esi + 0x2F) = MEM8(esi + 0x2F) + 1;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CB40F:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(esi + 0x2F) = 0;
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB41B:
    eax = MEM32(esi + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB430; /* je: equal / zero */

loc_001CB425:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB42D:
    esp = esp + 8;

loc_001CB430:
    SET_LO8(eax, MEM8(esi + 0x31));
    SET_LO8(eax, LO8(eax) & 0xF7);
    MEM8(esi + 0x2E) = 2;
    MEM8(esi + 0x31) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CB43F:
    SET_LO8(eax, MEM8(esi + 0x31));
    ecx = MEM32(esi + 0x14);
    SET_LO8(eax, LO8(eax) | 8);
    PUSH32(esp, ecx);
    MEM8(esi + 0x31) = LO8(eax);
    PUSH32(esp, 0); sub_0020BDB0(); /* call 0x0020BDB0 */

loc_001CB450:
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB45E:
    eax = MEM32(esi + 0x20);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001CB473; /* je: equal / zero */

loc_001CB468:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB470:
    esp = esp + 8;

loc_001CB473:
    MEM8(esi + 0x2E) = 2;
    MEM8(esi + 0x2F) = 0;

loc_001CB47B:
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
