#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001293D0
 * Original: 0x001293D0 - 0x001295AE (478 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001293D0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001293D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = edx;
    eax = eax << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + ecx + 0x710), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ecx + 0x730), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    esi = MEM32(ebp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    edx = edx + 0x1C;
    edx = edx << 6;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + ecx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEM32(esp + 0x2C) = edx;
    edx = esp + 0x20;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ecx + 0x720), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = esp + 0x40;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001294A3:
    eax = esp + 0x50;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001294B2:
    ecx = esp + 0x40;
    eax = esp + 0x50;
    ebx = esp + 0xB0;
    PUSH32(esp, 0); sub_000BFB50(); /* call 0x000BFB50 */

loc_001294C6:
    eax = MEM32(esp + 0x2C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x28);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + ecx + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(edx + 0x14);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    ecx = ecx + eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = esp + 0x20;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esp + 0x24);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + eax + 0x710), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = ecx + eax + 0x710;
    esi = esp + 0x1C;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    edx = MEM32(edx + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edx + 0x720), 16); /* movaps */
    eax = ecx + edx + 0x720;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    POP32(esp, edi);
    /* shufps xmm0, xmm0, 0 */
    POP32(esp, esi);
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
