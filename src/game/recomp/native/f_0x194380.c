#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00194380
 * Original: 0x00194380 - 0x001943F4 (116 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194380(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00194380:
    PUSH32(esp, esi);
    esi = MEM32(0x73A188);
    if (TEST_NZ(esi, esi)) goto loc_00194390; /* jne: not equal / not zero */

loc_0019438B:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00194390:
    eax = MEM32(ecx + 0x34C);
    /* test eax, eax - flags set for next jcc */
    edx = MEM32(0x73A184);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_001943A9; /* je: equal / zero */

loc_001943A3:
    xmm2.f[0] = MEMF(edx + eax * 8 + -8); /* movss */

loc_001943A9:
    xmm1.f[0] = MEMF(edx + eax * 8); /* movss */
    SET_LO8(eax, MEM8(0x73A198));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001943CD; /* je: equal / zero */

loc_001943BB:
    xmm0.f[0] = MEMF(ecx + 0x348); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001943CD:
    eax = MEM32(ecx + 0x350);
    xmm3.f[0] = MEMF(ecx + 0x348); /* movss */
    eax++;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + esi * 8 + -8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
