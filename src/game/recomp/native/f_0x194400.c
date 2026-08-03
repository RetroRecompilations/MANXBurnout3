#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00194400
 * Original: 0x00194400 - 0x00194427 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194400(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00194400:
    xmm0.f[0] = MEMF(ecx + 0x28C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16C0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00194419; /* jp: parity */

loc_00194415:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp += 4; return; /* ret */

loc_00194419:
    PUSH32(esp, 0); sub_00194380(); /* call 0x00194380 */

loc_0019441E:
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x28C); /* subss */
    esp += 4; return; /* ret */

}
