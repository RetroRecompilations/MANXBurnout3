#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA270
 * Original: 0x001CA270 - 0x001CA346 (214 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA270(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_001CA270:
    xmm3.f[0] = MEMF(ecx); /* movss */
    xmm4.f[0] = MEMF(ecx + 4); /* movss */
    xmm5.f[0] = MEMF(ecx + 8); /* movss */
    ecx = MEM32(edx + 8);
    eax = MEM32(edx);
    esp = esp - 0xC;
    /* cmp ecx, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    if (CMP_BE(ecx, 1)) goto loc_001CA341; /* jbe: below or equal (unsigned <=) */

loc_001CA293:
    ecx = MEM32(eax + 8);
    ecx = ecx + 0x30;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm1.f[0] = MEMF(esp + 4); /* movss */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 8);
    xmm2.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    ecx = ecx + 0x30;
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx);
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 8) = edx;
    xmm2.f[0] = MEMF(esp + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(esp + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    MEM32(esp + 0xC) = ecx;
    xmm3.f[0] = MEMF(esp + 0xC); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm4.f[0])) goto loc_001CA341; /* jbe: below or equal (unsigned <=) */

loc_001CA33F:
    eax = esi;

loc_001CA341:
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
