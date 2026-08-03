#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001432A0
 * Original: 0x001432A0 - 0x001434DB (571 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001432A0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001432A0:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x10); /* subss */
    if ((xmm3.f[0] > xmm0.f[0])) goto loc_001432B7; /* ja: above (unsigned >) */

loc_001432B1:
    xmm3.f[0] = MEMF(esp + 0x10); /* movss */

loc_001432B7:
    /* comiss xmm3.f[0], MEMF(0x47A054) - sets EFLAGS */
    xmm2.f[0] = MEMF(0x39C514); /* movss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] / MEMF(edx + 0x14); /* divss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1858); /* mulss */
    if ((xmm3.f[0] < MEMF(0x47A054))) goto loc_00143356; /* jb: below (unsigned <) */

loc_001432DC:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    xmm1.f[0] = MEMF(edx + 4); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7ED8); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    xmm1.f[0] = MEMF(0x47A044); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x47A034); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00143356:
    xmm0.f[0] = MEMF(0x47A060); /* movss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm3.f[0])) goto loc_001433DD; /* jb: below (unsigned <) */

loc_00143363:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    xmm1.f[0] = MEMF(edx + 4); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7ED8); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    xmm1.f[0] = MEMF(0x47A050); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x47A040); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_001433DD:
    eax = 1;

loc_001433E2:
    /* comiss xmm3.f[0], MEMF(eax * 4 + 0x47A054) - sets EFLAGS */
    if ((xmm3.f[0] >= MEMF(eax * 4 + 0x47A054))) goto loc_001433FC; /* jae: above or equal (unsigned >=) */

loc_001433EC:
    eax++;
    if (CMP_L(eax, 4)) goto loc_001433E2; /* jl: less (signed <) */

loc_001433F2:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x10);
    goto loc_001433FF;

loc_001433FC:
    ecx = eax + -1;

loc_001433FF:
    xmm3.f[0] = xmm3.f[0] - MEMF(eax * 4 + 0x47A054); /* subss */
    xmm0.f[0] = MEMF(ecx * 4 + 0x47A054); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 4 + 0x47A054); /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(edx + 4); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4.f[0] = MEMF(ecx * 4 + 0x47A044); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(0x3B1688); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A7ED8); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(ecx * 4 + 0x47A034); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4.f[0] = MEMF(eax * 4 + 0x47A034); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(eax * 4 + 0x47A044); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}
