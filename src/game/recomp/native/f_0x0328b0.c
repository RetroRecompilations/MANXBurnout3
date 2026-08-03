#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000328B0
 * Original: 0x000328B0 - 0x000328E8 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000328B0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_000328B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    PUSH32(esp, esi);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
