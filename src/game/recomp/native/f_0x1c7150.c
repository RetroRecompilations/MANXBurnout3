#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C7150
 * Original: 0x001C7150 - 0x001C72E4 (404 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7150(void)
{
    recomp_xmm_t xmm0;

loc_001C7150:
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x4A1B94);
    PUSH32(esp, 0x3F7B18);
    PUSH32(esp, 0x3A7C14);
    PUSH32(esp, 0); sub_0034F440(); /* call 0x0034F440 */

loc_001C7168:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = 0x304;
    MEM32(0x4A1AA0) = ecx;
    MEM32(0x4A1AA4) = ecx;
    MEM32(0x4A1AA8) = ecx;
    ecx = 0x8006;
    eax = 0x302;
    MEM32(0x4A1B00) = ecx;
    MEM32(0x4A1B04) = ecx;
    MEM32(0x4A1B0C) = ecx;
    MEM32(0x4A1B10) = ecx;
    MEM32(0x4A1B14) = ecx;
    MEM32(0x4A1B1C) = ecx;
    ecx = 0x10101;
    MEM32(0x4A1A90) = eax;
    MEM32(0x4A1A94) = eax;
    MEM32(0x4A1A98) = eax;
    eax = 1;
    edx = 0x800B;
    MEM32(0x4A1B34) = ecx;
    MEM32(0x4A1B38) = ecx;
    MEM32(0x4A1B3C) = ecx;
    MEM32(0x4A1B40) = ecx;
    MEM32(0x4A1B44) = ecx;
    MEM32(0x4A1B48) = ecx;
    MEM32(0x4A1B4C) = ecx;
    ecx = 3;
    MEM32(0x4A1B9C) = esi;
    MEM32(0x4A1B78) = esi;
    MEM32(0x4A1ABC) = esi;
    MEM32(0x4A1ACC) = esi;
    MEM32(0x4A1AD0) = 0xA;
    MEM32(0x4A1A9C) = eax;
    MEM32(0x4A1AAC) = eax;
    MEM32(0x4A1AB0) = 0x303;
    MEM32(0x4A1AB4) = eax;
    MEM32(0x4A1AB8) = eax;
    MEM32(0x4A1AC0) = 0x305;
    MEM32(0x4A1AC4) = eax;
    MEM32(0x4A1AC8) = eax;
    MEM32(0x4A1B08) = edx;
    MEM32(0x4A1B18) = edx;
    MEM32(0x4A1B50) = 0x1000000;
    MEM32(0x4A1B54) = 2;
    MEM32(0x4A1B58) = eax;
    MEM32(0x4A1B24) = ecx;
    MEM32(0x4A1B28) = eax;
    MEM32(0x4A1B2C) = ecx;
    MEM32(0x4A1B30) = eax;
    MEM32(0x4A1B68) = ecx;
    MEM32(0x4A1B6C) = eax;
    MEM32(0x4A1B70) = eax;
    MEM32(0x4A1B74) = ecx;
    MEMF(0x4A1AE0) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AE4) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AE8) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AEC) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AF0) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AF4) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AF8) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AFC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
