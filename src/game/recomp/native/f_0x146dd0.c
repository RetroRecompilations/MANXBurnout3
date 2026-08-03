#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146DD0
 * Original: 0x00146DD0 - 0x00146FA0 (464 bytes, 111 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146DD0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00146DD0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC8);
    eax = eax | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    /* cmp edi, ebx - flags set for next jcc */
    MEM8(esi + 0x12C) = LO8(eax);
    MEM32(esi + 0x110) = eax;
    MEM8(esi + 0x124) = LO8(ebx);
    if (CMP_EQ(edi, ebx)) goto loc_00146E23; /* je: equal / zero */

loc_00146DF3:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00146DFD:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00146E07:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0xC8) = ebx;

loc_00146E23:
    edi = MEM32(esi + 0xC0);
    if (CMP_EQ(edi, ebx)) goto loc_00146E5D; /* je: equal / zero */

loc_00146E2D:
    edx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00146E37:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00146E41:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0xC0) = ebx;

loc_00146E5D:
    edi = MEM32(esi + 0xC4);
    if (CMP_EQ(edi, ebx)) goto loc_00146E97; /* je: equal / zero */

loc_00146E67:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00146E71:
    edx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00146E7B:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0xC4) = ebx;

loc_00146E97:
    xmm5.f[0] = MEMF(0x3B1684); /* movss */
    xmm6.f[0] = MEMF(0x3B16B8); /* movss */
    xmm7.f[0] = MEMF(0x3A2808); /* movss */
    MEMF(esi + 0x50) = xmm5.f[0]; /* movss */
    if (CMP_EQ(MEM8(0x752D80), LO8(ebx))) goto loc_00146EC3; /* je: equal / zero */

loc_00146EBC:
    MEMF(esi + 0x5C) = xmm7.f[0]; /* movss */
    goto loc_00146EC8;

loc_00146EC3:
    MEMF(esi + 0x5C) = xmm6.f[0]; /* movss */

loc_00146EC8:
    xmm1.f[0] = MEMF(0x3B16D8); /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(0x3B185C); /* movss */
    xmm3.f[0] = MEMF(0x3B16EC); /* movss */
    xmm4.f[0] = MEMF(0x39B2B0); /* movss */
    ecx = 2;
    eax = 3;
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x78) = eax;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm5.f[0]; /* movss */
    SET_LO8(edx, MEM8(0x752D80));
    POP32(esp, edi);
    /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00146F39; /* je: equal / zero */

loc_00146F2F:
    MEMF(esi + 0x88) = xmm7.f[0]; /* movss */
    goto loc_00146F41;

loc_00146F39:
    MEMF(esi + 0x88) = xmm6.f[0]; /* movss */

loc_00146F41:
    MEM32(esi + 0xA4) = eax;
    MEMF(esi + 0x8C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xA0) = ecx;
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
