#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00063050
 * Original: 0x00063050 - 0x00063584 (1332 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063050(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00063050:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x464730);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x77);
    eax = esi + 0x1A0;
    PUSH32(esp, eax);
    ecx = 0x3000;
    edx = 0x64;
    PUSH32(esp, 0); sub_001C6660(); /* call 0x001C6660 */

loc_00063071:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = MEMF(0x3B16C4); /* movss */
    xmm4.f[0] = MEMF(0x3B1CCC); /* movss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    MEM32(esi + 0x1E4) = 6;
    xmm3.f[0] = MEMF(0x3B0400); /* movss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x1DC) = xmm2.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1CC8); /* movss */
    xmm6.f[0] = MEMF(0x3B1CC4); /* movss */
    xmm7.f[0] = MEMF(0x3B1CC0); /* movss */
    ebx = 0; /* xor self */
    MEM32(esi + 0x1F0) = ebx;
    MEM32(esi + 0x1D8) = ebx;
    MEM8(esi + 0x19FF) = LO8(ebx);
    MEMF(esi + 0x10) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1CBC); /* movss */
    MEMF(esi + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B16E8); /* movss */
    MEMF(esi + 0x2C) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1CB8); /* movss */
    xmm5.f[0] = MEMF(0x3B1CB4); /* movss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1CB0); /* movss */
    MEMF(esi + 0x34) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1A04); /* movss */
    MEMF(esi + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1CAC); /* movss */
    MEMF(esi + 0x44) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1CA8); /* movss */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1CA4); /* movss */
    MEMF(esi + 0x58) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1CA0); /* movss */
    MEMF(esi + 0x50) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C9C); /* movss */
    MEMF(esi + 0x68) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1C98); /* movss */
    MEMF(esi + 0x74) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1708); /* movss */
    MEMF(esi + 0x78) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C94); /* movss */
    MEMF(esi + 0x84) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C90); /* movss */
    MEMF(esi + 0x88) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C8C); /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C88); /* movss */
    MEMF(esi + 0x94) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C84); /* movss */
    MEMF(esi + 0x98) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C80); /* movss */
    MEMF(esi + 0xA0) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C7C); /* movss */
    MEMF(esi + 0xA4) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C78); /* movss */
    MEMF(esi + 0xA8) = xmm6.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3A49FC); /* movss */
    MEMF(esi + 0xB0) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1C74); /* movss */
    MEMF(esi + 0xB4) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(esi + 0xB8) = xmm6.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1C70); /* movss */
    MEMF(esi + 0x124) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm0.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1C6C); /* movss */
    MEMF(esi + 0x128) = xmm7.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1850); /* movss */
    MEMF(esi + 0x120) = xmm6.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1C68); /* movss */
    MEMF(esi + 0x130) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1C64); /* movss */
    MEMF(esi + 0x134) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1C60); /* movss */
    MEMF(esi + 0x138) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x144) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x35BF1C); /* movss */
    xmm7.f[0] = MEMF(0x3B1C5C); /* movss */
    MEMF(esi + 0x148) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1C58); /* movss */
    MEMF(esi + 0x140) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x14C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x150) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1C54); /* movss */
    MEMF(esi + 0x154) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1C50); /* movss */
    MEMF(esi + 0x158) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x164) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1C4C); /* movss */
    MEMF(esi + 0x168) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1CC0); /* movss */
    MEMF(esi + 0x160) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x16C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x174) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B17C8); /* movss */
    MEMF(esi + 0x178) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B178C); /* movss */
    MEMF(esi + 0x170) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esi + 0xC4) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x397540); /* movss */
    MEMF(esi + 0xC8) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1C70); /* movss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1C6C); /* movss */
    MEMF(esi + 0xD8) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1770); /* movss */
    MEMF(esi + 0xD0) = xmm6.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1C48); /* movss */
    MEMF(esi + 0xE4) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x395BE4); /* movss */
    MEMF(esi + 0xE8) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x395BE0); /* movss */
    MEMF(esi + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esi + 0xFC) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x100) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x110) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x118) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x180) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x18C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x190) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x194) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x198) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x19C) = xmm0.f[0]; /* movss */
    eax = esi;
    ecx = 0x1A;
    goto loc_00063540;

    /* nop */

loc_00063540:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3FFE70), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00063540; /* jne: not equal / not zero */

loc_00063556:
    PUSH32(esp, 0); sub_000F2010(); /* call 0x000F2010 */

loc_0006355B:
    edi = 0x54FF30;
    PUSH32(esp, 0); sub_00060570(); /* call 0x00060570 */

loc_00063565:
    MEM8(esi + 0x19FD) = LO8(ebx);
    MEM8(esi + 0x19FE) = LO8(ebx);
    MEM32(0x559668) = ebx;
    MEM32(0x55966C) = ebx;
    POP32(esp, edi);

}
