#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128680
 * Original: 0x00128680 - 0x0012882F (431 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00128680:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    eax = ecx;
    eax = eax - 2;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_0012876A; /* je: equal / zero */

loc_00128698:
    eax--;
    if ((eax == 0)) goto loc_001286BD; /* je: equal / zero */

loc_0012869B:
    eax = MEM32(ecx * 4 + 0x3EBFAC);
    ecx = MEM32(esi + 0x18);
    eax = eax << 6;
    esi = eax + ecx + 0x70;
    edi = ebx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001286BD:
    eax = MEM32(esi + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x1E0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x120), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001286DF:
    eax = MEM32(esi + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x1E0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x160), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    ecx = MEM32(esi + 0x18);
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x1E0), 16); /* movaps */
    goto loc_00128812;

loc_0012876A:
    eax = MEM32(esi + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x1A0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0xE0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012878C:
    eax = MEM32(esi + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x1A0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x160), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    ecx = MEM32(esi + 0x18);
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x1A0), 16); /* movaps */

loc_00128812:
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    esi = esp + 0x20;
    edi = ebx;
    ecx = 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
