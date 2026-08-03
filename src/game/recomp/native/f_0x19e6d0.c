#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E6D0
 * Original: 0x0019E6D0 - 0x0019E7F5 (293 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E6D0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0019E6D0:
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x14));
    eax = eax - 0;
    xmm2.f[0] = MEMF(esp + 8); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((eax == 0)) goto loc_0019E7A8; /* je: equal / zero */

loc_0019E6F1:
    eax--;
    if ((eax == 0)) goto loc_0019E747; /* je: equal / zero */

loc_0019E6F4:
    eax--;
    if ((eax != 0)) goto loc_0019E7F1; /* jne: not equal / not zero */

loc_0019E6FB:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019E860(); /* call 0x0019E860 */

loc_0019E701:
    xmm0.f[0] = MEMF(esp); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + 0xC))) goto loc_0019E7F1; /* jb: below (unsigned <) */

loc_0019E710:
    eax = MEM32(esi + 4);
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0019E78F; /* ja: above (unsigned >) */

loc_0019E720:
    xmm1.f[0] = MEMF(eax + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019E7F1; /* jbe: below or equal (unsigned <=) */

loc_0019E72E:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEM8(esi + 0x14) = 1;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0019E747:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019E860(); /* call 0x0019E860 */

loc_0019E74D:
    xmm0.f[0] = MEMF(esp); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + 0xC))) goto loc_0019E7F1; /* jb: below (unsigned <) */

loc_0019E75C:
    eax = MEM32(esi + 4);
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019E785; /* jbe: below or equal (unsigned <=) */

loc_0019E76C:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEM8(esi + 0x14) = 2;
    edx = MEM32(eax + 4);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC) = edx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0019E785:
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019E7F1; /* jbe: below or equal (unsigned <=) */

loc_0019E78F:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEM8(esi + 0x14) = 0;
    eax = MEM32(eax + 8);
    MEM32(esi + 0xC) = eax;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0019E7A8:
    edx = esi;
    PUSH32(esp, 0); sub_0019E800(); /* call 0x0019E800 */

loc_0019E7AF:
    /* comiss xmm1.f[0], MEMF(esi + 0xC) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(esi + 0xC))) goto loc_0019E7F1; /* jb: below (unsigned <) */

loc_0019E7B5:
    eax = MEM32(esi + 4);
    xmm1.f[0] = MEMF(eax + 0xC); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019E7D8; /* jbe: below or equal (unsigned <=) */

loc_0019E7C5:
    MEM8(esi + 0x14) = 1;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0019E7D8:
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019E7F1; /* jbe: below or equal (unsigned <=) */

loc_0019E7E2:
    MEM8(esi + 0x14) = 0;
    edx = MEM32(eax + 4);
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    MEM32(esi + 0xC) = edx;

loc_0019E7F1:
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
