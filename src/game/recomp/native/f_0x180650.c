#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00180650
 * Original: 0x00180650 - 0x001807B7 (359 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180650(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00180650:
    esp = esp - 0x18;
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = MEMF(eax + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7547DC); /* subss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x41A558); /* mulss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x41A554); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x41A550); /* mulss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_00180728; /* jbe: below or equal (unsigned <=) */

loc_0018071F:
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    goto loc_0018072C;

loc_00180728:
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0018072C:
    xmm0.f[0] = MEMF(0x41A548); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x41A54C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
