#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001280C0
 * Original: 0x001280C0 - 0x00128173 (179 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001280C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001280C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    ebx = MEM32(ebx + 8);
    ecx = ecx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + ebx), 16); /* movaps */
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 8);
    eax = eax << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + ebx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    edx = edx << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + ecx), 16); /* movaps */
    edx = MEM32(edi + 4);
    ecx = MEM32(edx + 8);
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm1, 0xd2 */
    esi = esi << 4;
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + ecx), 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm4, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3B16E0))) goto loc_00128169; /* jb: below (unsigned <) */

loc_0012815F:
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00128169:
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
