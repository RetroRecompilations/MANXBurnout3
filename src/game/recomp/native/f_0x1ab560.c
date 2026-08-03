#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AB560
 * Original: 0x001AB560 - 0x001AB5E3 (131 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB560(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001AB560:
    SET_LO8(eax, MEM8(0x5A3759));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3A5FF0); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AB579; /* je: equal / zero */

loc_001AB571:
    xmm0.f[0] = MEMF(0x3A5FF4); /* movss */

loc_001AB579:
    SET_LO8(eax, MEM8(edi + 0x144333));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AB5E2; /* jne: not equal / not zero */

loc_001AB583:
    xmm1.f[0] = MEMF(edi + 0x20); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001AB5E2; /* jbe: below or equal (unsigned <=) */

loc_001AB58D:
    eax = MEM32(edi + 0x12B7C0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AB5E1; /* jle: less or equal (signed <=) */

loc_001AB59A:
    PUSH32(esp, esi);
    esi = edi + 0x12DFA0;

loc_001AB5A1:
    eax = MEM32(esi + -5880);
    if (TEST_NZ(eax, eax)) goto loc_001AB5CF; /* jne: not equal / not zero */

loc_001AB5AB:
    SET_LO16(eax, 6);
    SET_LO16(eax, LO16(eax) - MEM16(esi));
    PUSH32(esp, 2);
    MEM16(esi + -5888) = LO16(eax);
    eax = esi + -10192;
    PUSH32(esp, 0); sub_0018E050(); /* call 0x0018E050 */

loc_001AB5C6:
    ecx = MEM32(edi + 0x20);
    MEM32(esi + -4340) = ecx;

loc_001AB5CF:
    eax = MEM32(edi + 0x12B7C0);
    ebx++;
    esi = esi + 0x27E0;
    if (CMP_L(ebx, eax)) goto loc_001AB5A1; /* jl: less (signed <) */

loc_001AB5E0:
    POP32(esp, esi);

loc_001AB5E1:
    POP32(esp, ebx);

loc_001AB5E2:
    esp += 4; return; /* ret */

}
