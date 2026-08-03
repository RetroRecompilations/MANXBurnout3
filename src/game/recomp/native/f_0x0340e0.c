#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000340E0
 * Original: 0x000340E0 - 0x0003412E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000340E0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_000340E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(ebp + 0x10); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
