#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00106500
 * Original: 0x00106500 - 0x0010658A (138 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106500(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00106500:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x110), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x110), xmm1.b, 16); /* movaps */
    edx = MEM32(eax + 0x204);
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
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEM32(esp + 0x18) = esi;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* shufps xmm1, xmm1, 0xd2 */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* shufps xmm3, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x120), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x120), xmm1.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
