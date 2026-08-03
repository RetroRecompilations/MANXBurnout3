#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DCA0
 * Original: 0x0017DCA0 - 0x0017DCEB (75 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DCA0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0017DCA0:
    eax = eax + edx;
    if (CMP_EQ(ecx, 0xFFFFFFFEu)) goto loc_0017DCCD; /* je: equal / zero */

loc_0017DCA7:
    if (CMP_EQ(ecx, 2)) goto loc_0017DCBF; /* je: equal / zero */

loc_0017DCAC:
    if (CMP_NE(ecx, 4)) goto loc_0017DCDD; /* jne: not equal / not zero */

loc_0017DCB1:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1690); /* mulss */
    goto loc_0017DCD9;

loc_0017DCBF:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    goto loc_0017DCD9;

loc_0017DCCD:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */

loc_0017DCD9:
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */

loc_0017DCDD:
    ecx = MEM32(0x739C6C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0017DCEA; /* je: equal / zero */

loc_0017DCE8:
    eax = ecx;

loc_0017DCEA:
    esp += 4; return; /* ret */

}
