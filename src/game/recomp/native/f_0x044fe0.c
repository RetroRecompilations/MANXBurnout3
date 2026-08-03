#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00044FE0
 * Original: 0x00044FE0 - 0x0004504E (110 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044FE0(void)
{
    recomp_xmm_t xmm0;

loc_00044FE0:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x20) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x12) = 0;
    MEM16(eax + 0x10) = 0;
    ecx = eax + 0x20;
    MEM32(eax + 0x440) = ecx;
    edx = eax + 0x230;
    MEM32(eax + 0x444) = edx;
    MEM32(edx) = 0;
    edx = (uint32_t)(int32_t)SMEM16(0x46076A);
    ecx = MEM32(0x460768);
    ecx = ecx << 0x10;
    ecx = ecx + edx;
    edx = MEM32(0x46076C);
    ecx = ecx + edx;
    MEM32(0x460768) = ecx;
    edx = edx + ecx;
    ecx = ecx & 3;
    MEM32(0x46076C) = edx;
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
