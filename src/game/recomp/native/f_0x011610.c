#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00011610
 * Original: 0x00011610 - 0x00011638 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011610(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_00011610:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
