#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001066A0
 * Original: 0x001066A0 - 0x00106716 (118 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001066A0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001066A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    edx = MEM32(ecx + 0x204);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0xB0), 16); /* movaps */
    edx = edx + 0x30;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEM32(esp + 0x18) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xD0), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
