#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FFC80
 * Original: 0x000FFC80 - 0x000FFD13 (147 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000FFC80:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    ecx = MEM32(eax);
    MEM32(esi + 0xB0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xB4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0xB8) = ecx;
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0xC))) goto loc_000FFCF9; /* jbe: below or equal (unsigned <=) */

loc_000FFCD9:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + 0x204);
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0xC0), xmm0.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FFCF9:
    eax = esi + 0xC0;
    memcpy((void *)XBOX_PTR(eax), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_000FFD07:
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
