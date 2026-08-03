#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002EBE0
 * Original: 0x0002EBE0 - 0x0002ECB3 (211 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EBE0(void)
{
    recomp_xmm_t xmm0, xmm1;

loc_0002EBE0:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1758); /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x30) = 0;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AAFE8);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002EC46:
    MEM32(edi + 0x40) = eax;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(edi + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(edi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B18B4); /* movss */
    MEMF(edi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x7C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x80) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x84) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x94) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x98) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
