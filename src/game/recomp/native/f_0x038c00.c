#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00038C00
 * Original: 0x00038C00 - 0x00038C5C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm4, xmm5, xmm6, xmm7;

loc_00038C00:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    memcpy(xmm4.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);

loc_00038C20:
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm7.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    edi = edi + 0x10;
    esi = esi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00038C20; /* jne: not equal / not zero */

loc_00038C58:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
