#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00106590
 * Original: 0x00106590 - 0x001065FA (106 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106590(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00106590:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    ecx = MEM32(eax + 0x204);
    ecx = ecx + 0x30;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 4) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEM32(esp + 8) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(esp + 0xC) = eax;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    eax = MEM32(ebp + 8);
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
