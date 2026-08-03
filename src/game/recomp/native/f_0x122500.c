#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00122500
 * Original: 0x00122500 - 0x00122702 (514 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122500(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00122500:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(esi + 0x215) = LO8(ebx);
    MEM32(esi + 0x204) = ebx;
    MEM32(esi + 0x200) = 0x5A3AA0;
    PUSH32(esp, esi);
    MEM32(0x5A3AA0) = ebx;
    MEM32(0x5A3AA4) = 0x5A3AB0;
    MEM32(0x5A3AA8) = 0x5A52B0;
    PUSH32(esp, 0); sub_00109270(); /* call 0x00109270 */

loc_00122539:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x88C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x890) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B17B4); /* movss */
    MEMF(esi + 0x870) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xCC8) = ebx;
    MEMF(esi + 0x94C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x950) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x930) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xCCC) = ebx;
    MEMF(esi + 0xA0C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9F0) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xCD0) = ebx;
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAB0) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xCD4) = ebx;
    MEMF(esi + 0xB8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB70) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xCD8) = ebx;
    MEMF(esi + 0xC4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B174C); /* movss */
    xmm3.f[0] = MEMF(0x3A3408); /* movss */
    MEMF(esi + 0xC30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A69B4); /* movss */
    MEM32(esi + 0xCDC) = ebx;
    MEM8(esi + 0x1169) = LO8(ebx);
    MEM8(esi + 0x116A) = LO8(ebx);
    MEMF(esi + 0xCA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xCB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1164) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1168) = LO8(ebx);
    MEMF(esi + 0xCAC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xCA8) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xCA4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xCBC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xCB8) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xCB4) = xmm3.f[0]; /* movss */
    MEM8(esi + 0x1352) = 1;
    MEM8(esi + 0x1160) = LO8(ebx);
    MEM8(esi + 0x238) = LO8(ebx);
    MEM8(esi + 0x239) = LO8(ebx);
    MEM8(esi + 0x23A) = LO8(ebx);
    MEM8(esi + 0x20C) = 2;
    eax = esi + 0x220;
    MEM32(esi + 0x208) = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A3830), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x1E0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A3830), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x1D0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x4A3830); /* movss */
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4A3834); /* movss */
    MEMF(esi + 0x1C4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4A3838); /* movss */
    MEMF(esi + 0x1C8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
