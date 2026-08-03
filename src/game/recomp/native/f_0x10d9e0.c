#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010D9E0
 * Original: 0x0010D9E0 - 0x0010DAB8 (216 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0010D9E0:
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    xmm1.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x18); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    esp = esp & 0xFFFFFFF0u;
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0010DA3D; /* jbe: below or equal (unsigned <=) */

loc_0010DA28:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010DA35; /* jbe: below or equal (unsigned <=) */

loc_0010DA2D:
    MEM32(edx) = 0;
    goto loc_0010DA50;

loc_0010DA35:
    MEM32(edx) = 2;
    goto loc_0010DA50;

loc_0010DA3D:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010DA4A; /* jbe: below or equal (unsigned <=) */

loc_0010DA42:
    MEM32(edx) = 3;
    goto loc_0010DA50;

loc_0010DA4A:
    MEM32(edx) = 1;

loc_0010DA50:
    xmm2.f[0] = MEMF(0x3B1750); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    MEM32(esi) = 0;
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0010DA89; /* jbe: below or equal (unsigned <=) */

loc_0010DA63:
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0010DA74; /* jbe: below or equal (unsigned <=) */

loc_0010DA68:
    MEM32(esi) = 2;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010DA74:
    /* comiss xmm0.f[0], MEMF(0x3B17D8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B17D8))) goto loc_0010DAB2; /* jbe: below or equal (unsigned <=) */

loc_0010DA7D:
    MEM32(esi) = 1;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010DA89:
    xmm3.f[0] = MEMF(0x3B17D8); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_0010DAB2; /* jbe: below or equal (unsigned <=) */

loc_0010DA96:
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0010DAA7; /* jbe: below or equal (unsigned <=) */

loc_0010DA9B:
    MEM32(esi) = 4;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010DAA7:
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_0010DAB2; /* jbe: below or equal (unsigned <=) */

loc_0010DAAC:
    MEM32(esi) = 3;

loc_0010DAB2:
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
