#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00040AE0
 * Original: 0x00040AE0 - 0x00040B8B (171 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040AE0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00040AE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = edx;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    edi = esp + 0x20;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ecx;
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    xmm1.f[0] = MEMF(esi + 0x34); /* movss */
    xmm2.f[0] = MEMF(esi + 0x38); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* shufps xmm1, xmm1, 0 */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    eax = edx + 0x30;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = 0x80000000u;
    esi = MEM32(esp + 0xC);
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
