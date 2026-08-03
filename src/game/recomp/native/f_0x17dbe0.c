#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DBE0
 * Original: 0x0017DBE0 - 0x0017DC37 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DBE0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0017DBE0:
    edx = ZX8(MEM8(eax + ecx + 0x4F2));
    /* test edx, edx - flags set for next jcc */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    if (CMP_LE(edx & edx, 0)) goto loc_0017DC32; /* jle: less or equal (signed <=) */

loc_0017DBEF:
    xmm1.f[0] = MEMF(0x3A3408); /* movss */
    xmm2.f[0] = MEMF(0x3A340C); /* movss */
    xmm3.f[0] = MEMF(0x3A35E4); /* movss */
    eax = eax + eax * 4 + 0x10E;
    ecx = ecx + eax * 4;

loc_0017DC11:
    eax = MEM32(ecx);
    eax--;
    if ((eax == 0)) goto loc_0017DC28; /* je: equal / zero */

loc_0017DC16:
    eax--;
    if ((eax == 0)) goto loc_0017DC22; /* je: equal / zero */

loc_0017DC19:
    eax--;
    if ((eax != 0)) goto loc_0017DC2C; /* jne: not equal / not zero */

loc_0017DC1C:
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    goto loc_0017DC2C;

loc_0017DC22:
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_0017DC2C;

loc_0017DC28:
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0017DC2C:
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0017DC11; /* jne: not equal / not zero */

loc_0017DC32:
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}
