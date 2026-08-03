#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146480
 * Original: 0x00146480 - 0x001464D0 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146480(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00146480:
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    esi = esi + 0x100;

loc_00146494:
    eax = MEM32(esi + -16);
    if (TEST_Z(eax, eax)) goto loc_001464BA; /* je: equal / zero */

loc_0014649B:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001464BA; /* je: equal / zero */

loc_001464A1:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001464A6:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001464BA; /* je: equal / zero */

loc_001464AA:
    if (CMP_AE(MEM8(esi + 5), 8)) goto loc_001464BA; /* jae: above or equal (unsigned >=) */

loc_001464B0:
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001464CB; /* ja: above (unsigned >) */

loc_001464BA:
    edi++;
    esi = esi + 0x130;
    if (CMP_L(edi, 0x10)) goto loc_00146494; /* jl: less (signed <) */

loc_001464C6:
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001464CB:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
