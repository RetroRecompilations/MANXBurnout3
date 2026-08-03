#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004BF10
 * Original: 0x0004BF10 - 0x0004BFA9 (153 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BF10(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0004BF10:
    xmm0.f[0] = MEMF(0x3B17CC); /* movss */
    ecx = eax + 0x290;
    edx = 0x14;
    goto loc_0004BF30;

    /* nop */
    /* nop */

loc_0004BF30:
    MEMF(ecx + -640) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = ecx + 0x20;
    edx--;
    if ((edx != 0)) goto loc_0004BF30; /* jne: not equal / not zero */

loc_0004BF42:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEMF(eax + 0x500) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x504) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x508) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x510) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x514) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x518) = LO8(ecx);
    MEM8(eax + 0x519) = LO8(ecx);
    MEM8(eax + 0x51A) = LO8(ecx);
    MEM8(eax + 0x51B) = LO8(ecx);
    MEMF(eax + 0x51C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x520) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x524) = xmm0.f[0]; /* movss */

}
