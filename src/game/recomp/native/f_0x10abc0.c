#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010ABC0
 * Original: 0x0010ABC0 - 0x0010AC1A (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010ABC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0010ABC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x150), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x60), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1D9C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0xC))) goto loc_0010AC0D; /* jbe: below or equal (unsigned <=) */

loc_0010AC07:
    SET_LO8(eax, 0); /* xor self */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010AC0D:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010AC20(); /* call 0x0010AC20 */

loc_0010AC13:
    esp = esp + 4;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
