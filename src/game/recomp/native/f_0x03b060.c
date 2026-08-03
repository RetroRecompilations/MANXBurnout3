#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B060
 * Original: 0x0003B060 - 0x0003B0A8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0003B060:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0xC))) goto loc_0003B0A2; /* jbe: below or equal (unsigned <=) */

loc_0003B09C:
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003B0A2:
    SET_LO8(eax, 0); /* xor self */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
