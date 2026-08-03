#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153580
 * Original: 0x00153580 - 0x001535B4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153580(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00153580:
    SET_LO8(ecx, MEM8(eax + 0x538));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001535A2; /* je: equal / zero */

loc_0015358A:
    ecx = MEM32(eax + 0x53C);
    if (TEST_Z(ecx, ecx)) goto loc_0015359F; /* je: equal / zero */

loc_00153594:
    eax = MEM32(ecx + 0x238);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x20));
    esp += 4; return; /* ret */

loc_0015359F:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001535A2:
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5A8A08); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}
