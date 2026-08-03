#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00129640
 * Original: 0x00129640 - 0x00129764 (292 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129640(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00129640:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xAC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_00129664:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x74), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x94), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x64), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    memcpy((void *)XBOX_PTR(esp + 0x58), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x38), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x48), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_001296F6:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    xmm1.f[0] = MEMF(ebp + 0x10); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0x50) (packed 4xfloat) */
    edi = ebx;
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    ecx = 0x10;
    esi = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
