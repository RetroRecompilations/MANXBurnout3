#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00189A90
 * Original: 0x00189A90 - 0x00189C3E (430 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A90:
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = MEMF(0x3B1990); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00189AE7; /* jbe: below or equal (unsigned <=) */

loc_00189AA6:
    xmm2.f[0] = MEMF(0x3B198C); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    ecx = 3;
    eax = 2;
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00189AD2; /* jbe: below or equal (unsigned <=) */

loc_00189ABD:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1988); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1984); /* mulss */
    goto loc_00189C22;

loc_00189AD2:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1980); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B197C); /* mulss */
    goto loc_00189C22;

loc_00189AE7:
    xmm2.f[0] = MEMF(0x3B1978); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00189B46; /* jbe: below or equal (unsigned <=) */

loc_00189AF4:
    /* comiss xmm0.f[0], MEMF(0x38F6A4) - sets EFLAGS */
    ecx = 2;
    eax = 1;
    if ((xmm0.f[0] <= MEMF(0x38F6A4))) goto loc_00189B31; /* jbe: below or equal (unsigned <=) */

loc_00189B07:
    xmm2.f[0] = MEMF(0x3B1974); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00189B1C; /* jbe: below or equal (unsigned <=) */

loc_00189B14:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    goto loc_00189C22;

loc_00189B1C:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1970); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B196C); /* mulss */
    goto loc_00189C22;

loc_00189B31:
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B1968); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1964); /* mulss */
    goto loc_00189C1F;

loc_00189B46:
    eax = 0; /* xor self */
    /* comiss xmm0.f[0], MEMF(0x3A2928) - sets EFLAGS */
    ecx = 1;
    if ((xmm0.f[0] <= MEMF(0x3A2928))) goto loc_00189C0F; /* jbe: below or equal (unsigned <=) */

loc_00189B5A:
    xmm2.f[0] = MEMF(0x3B1960); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00189B6F; /* jbe: below or equal (unsigned <=) */

loc_00189B67:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    goto loc_00189C22;

loc_00189B6F:
    /* comiss xmm1.f[0], MEMF(0x39A858) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x39A858))) goto loc_00189B85; /* jbe: below or equal (unsigned <=) */

loc_00189B78:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_00189C22;

loc_00189B85:
    edx = MEM32(0x754818);
    if (TEST_NZ(LO8(edx), 1)) goto loc_00189BAB; /* jne: not equal / not zero */

loc_00189B90:
    xmm3.f[0] = MEMF(0x3B195C); /* movss */
    edx = edx | 1;
    MEM32(0x754818) = edx;
    MEMF(0x754814) = xmm3.f[0]; /* movss */
    goto loc_00189BB3;

loc_00189BAB:
    xmm3.f[0] = MEMF(0x754814); /* movss */

loc_00189BB3:
    if (TEST_NZ(LO8(edx), 2)) goto loc_00189BD3; /* jne: not equal / not zero */

loc_00189BB8:
    xmm2.f[0] = MEMF(0x3B1958); /* movss */
    edx = edx | 2;
    MEM32(0x754818) = edx;
    MEMF(0x754810) = xmm2.f[0]; /* movss */
    goto loc_00189BDB;

loc_00189BD3:
    xmm2.f[0] = MEMF(0x754810); /* movss */

loc_00189BDB:
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3A35E0); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B0434); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_00189C22;

loc_00189C0F:
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B1774); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16D0); /* mulss */

loc_00189C1F:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_00189C22:
    eax = eax + eax * 2;
    ecx = ecx + ecx * 2;
    eax = eax * 4 + 0x3A3FA4;
    ecx = ecx * 4 + 0x3A3FA4;
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    g_seh_ebp = ebp; sub_00189C40(); return; /* tail jmp 0x00189C40 */

}
