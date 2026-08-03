#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012E3A0
 * Original: 0x0012E3A0 - 0x0012E448 (168 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E3A0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0012E3A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x14);
    eax = esi + 0x1C;
    eax = eax << 6;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edi), 16); /* movaps */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012E3C5:
    ecx = MEM32(esi * 4 + 0x3EBF8C);
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    ecx = ecx << 6;
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + edi + 0x730), 16); /* movaps */
    edx = esi;
    edx = edx << 6;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + edi + 0x730), 16); /* movaps */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    PUSH32(esp, ebx);
    edx = esi;
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001293D0(); /* call 0x001293D0 */

loc_0012E443:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
