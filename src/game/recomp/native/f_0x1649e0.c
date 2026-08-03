#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001649E0
 * Original: 0x001649E0 - 0x00164A53 (115 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001649E0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001649E0:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    MEMF(edx + 0x1008) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x100C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1010) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1014) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1018) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x101C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1020) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1024) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1028) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x102C) = xmm0.f[0]; /* movss */
    esi = MEM32(edx);
    if (CMP_EQ(esi, edx)) goto loc_00164A51; /* je: equal / zero */

loc_00164A3A:
    /* nop */

loc_00164A40:
    eax = esi + -20;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0); sub_00164A60(); /* call 0x00164A60 */

loc_00164A4B:
    esi = MEM32(esi);
    if (CMP_NE(esi, edx)) goto loc_00164A40; /* jne: not equal / not zero */

loc_00164A51:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
