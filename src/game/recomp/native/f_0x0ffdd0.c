#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FFDD0
 * Original: 0x000FFDD0 - 0x000FFEF4 (292 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFDD0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000FFDD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_000FFE0D:
    PUSH32(esp, ebx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_000FFE1C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm2.f[0] = (float)(int32_t)MEM32(ebp + 8); /* cvtsi2ss */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(ebp + 0x10);
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    edx = esp + 0xC;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* divps: xmm0.f[0] /= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x88), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FF830(); /* call 0x000FF830 */

loc_000FFEBF:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm1.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm2.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm1.b, 16); /* movaps */
    esp = esp + 0x14;
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm3.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
