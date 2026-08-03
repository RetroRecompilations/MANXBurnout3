#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E160
 * Original: 0x0019E160 - 0x0019E201 (161 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E160(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0019E160:
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 4);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(edx + ecx * 8 + -8); /* divss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    if (CMP_LE(eax & eax, 0)) goto loc_0019E18A; /* jle: less or equal (signed <=) */

loc_0019E182:
    xmm1.f[0] = MEMF(edx + eax * 8 + -8); /* movss */
    goto loc_0019E18F;

loc_0019E18A:
    xmm1.f[0] = MEMF(edx + eax * 8); /* movss */

loc_0019E18F:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019E1B7; /* jbe: below or equal (unsigned <=) */

loc_0019E194:
    if (CMP_LE(eax & eax, 0)) goto loc_0019E1B2; /* jle: less or equal (signed <=) */

loc_0019E198:
    ecx = edx + eax * 8 + -8;
    /* nop */

loc_0019E1A0:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_0019E1D2; /* ja: above (unsigned >) */

loc_0019E1A5:
    xmm1.f[0] = MEMF(ecx + -8); /* movss */
    eax--;
    ecx = ecx - 8;
    if (CMP_G(eax & eax, 0)) goto loc_0019E1A0; /* jg: greater (signed >) */

loc_0019E1B2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019E1B7:
    if (CMP_GE(eax, ecx)) goto loc_0019E1D2; /* jge: greater or equal (signed >=) */

loc_0019E1BB:
    edx = edx + eax * 8 + -8;
    /* nop */

loc_0019E1C0:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_0019E1D2; /* jae: above or equal (unsigned >=) */

loc_0019E1C5:
    xmm1.f[0] = MEMF(edx + 8); /* movss */
    eax++;
    edx = edx + 8;
    if (CMP_L(eax, ecx)) goto loc_0019E1C0; /* jl: less (signed <) */

loc_0019E1D2:
    if (CMP_LE(eax & eax, 0)) goto loc_0019E1B2; /* jle: less or equal (signed <=) */

loc_0019E1D6:
    ecx = MEM32(esi + 4);
    eax--;
    xmm2.f[0] = MEMF(ecx + eax * 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + eax * 8 + -8); /* subss */
    ecx = ecx + eax * 8;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
