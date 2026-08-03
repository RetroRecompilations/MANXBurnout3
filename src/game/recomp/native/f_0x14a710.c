#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014A710
 * Original: 0x0014A710 - 0x0014B3C3 (3251 bytes, 667 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A710(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0014A710:
    xmm4.f[0] = MEMF(0x3B16E8); /* movss */
    xmm5.f[0] = MEMF(0x3B16EC); /* movss */
    xmm1.f[0] = MEMF(0x3A5600); /* movss */
    xmm7.f[0] = MEMF(0x3A2928); /* movss */
    xmm0.f[0] = MEMF(0x3B1B98); /* movss */
    xmm6.f[0] = MEMF(0x3B1B94); /* movss */
    xmm2.f[0] = MEMF(0x3B1A08); /* movss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    MEMF(esi + 0x5AC) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x5E4) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1B90); /* movss */
    MEMF(esi + 0x5A8) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x610) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x614) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3A5A44); /* movss */
    MEMF(esi + 0x600) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x628) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3A2928); /* movss */
    MEMF(esi + 0x6AC) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esi + 0x5A4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7ED8); /* movss */
    MEMF(esi + 0x618) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x61C) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3A69BC); /* movss */
    MEMF(esi + 0x62C) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1824); /* movss */
    MEMF(esi + 0x6E8) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(esi + 0x598) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17BC); /* movss */
    MEMF(esi + 0x5D8) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1A28); /* movss */
    MEMF(esi + 0x5F8) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1750); /* movss */
    MEMF(esi + 0x6A0) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x388F08); /* movss */
    MEMF(esi + 0x6EC) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A69C0); /* movss */
    MEMF(esi + 0x59C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x5A0) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1768); /* movss */
    MEMF(esi + 0x5E0) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B17D8); /* movss */
    MEMF(esi + 0x5FC) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esi + 0x6A4) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B19D0); /* movss */
    MEMF(esi + 0x6F8) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1B94); /* movss */
    MEMF(esi + 0x5BC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5B0) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x5C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5B4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5B8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5D4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x5C8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5CC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5DC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x5D0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5F0) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x5F4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x5E8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5EC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x620) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x624) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x608) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x60C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x604) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x638) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x63C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x630) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x634) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x6B0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x6B4) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x6A8) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x6FC) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A35B8); /* movss */
    MEMF(esi + 0x6D0) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1B8C); /* movss */
    MEMF(esi + 0x6D4) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(esi + 0x6D8) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A2928); /* movss */
    MEMF(esi + 0x700) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A3408); /* movss */
    MEMF(esi + 0x704) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1A3C); /* movss */
    MEMF(esi + 0x714) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1750); /* movss */
    MEMF(esi + 0x708) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x384150); /* movss */
    MEMF(esi + 0x7B8) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x39CC08); /* movss */
    xmm7.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(esi + 0x7C0) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1778); /* movss */
    MEMF(esi + 0x640) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A35E0); /* movss */
    MEMF(esi + 0x644) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esi + 0x6E4) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x654) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x648) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1778); /* movss */
    MEMF(esi + 0x674) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esi + 0x660) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3A3408); /* movss */
    MEMF(esi + 0x668) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x395D58); /* movss */
    MEMF(esi + 0x65C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x664) = xmm5.f[0]; /* movss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x67C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16CC); /* movss */
    MEMF(esi + 0x684) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3A2808); /* movss */
    MEMF(esi + 0x6F0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x6F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6E0) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x6DC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x710) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x70C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x650) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x64C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x658) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x670) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x66C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x678) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x680) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x688) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x68C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x690) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x694) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x698) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x69C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1B0) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1B4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1B8) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1BC) = xmm7.f[0]; /* movss */
    MEM32(esi + 0x1A8) = 0x65F9FEE6;
    MEM32(esi + 0x1AC) = 0xBEADD709u;
    MEMF(esi + 0x1C8) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1CC) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1D0) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C0) = 0xACFD55A6u;
    MEM32(esi + 0x1C4) = 0xCFC16BCBu;
    MEMF(esi + 0x1E0) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1E4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1E8) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1EC) = xmm5.f[0]; /* movss */
    MEM32(esi + 0x1D8) = 0x385610A6;
    MEM32(esi + 0x1DC) = 0x941C524Fu;
    MEMF(esi + 0x1F8) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1FC) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x200) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x204) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1F0) = 0x54C18AA6;
    MEM32(esi + 0x1F4) = 0x537E9066;
    MEMF(esi + 0x210) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x214) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x218) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x21C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x208) = 0x4DB8A626;
    MEM32(esi + 0x20C) = 0x9643AE7Du;
    MEMF(esi + 0x228) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x22C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x230) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x220) = 0xB177D0A6u;
    MEM32(esi + 0x224) = 0xB7923A54u;
    MEMF(esi + 0x240) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x244) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1B88); /* movss */
    MEMF(esi + 0x248) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x24C) = xmm7.f[0]; /* movss */
    MEM32(esi + 0x238) = 0xEDE1FA6;
    MEM32(esi + 0x23C) = 0x595059AF;
    MEMF(esi + 0x7D8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1B84); /* movss */
    MEMF(esi + 0x7DC) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B17BC); /* movss */
    MEMF(esi + 0x7E0) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x7E4) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esi + 0x718) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B17E4); /* movss */
    eax = MEM32(0x3EC32C);
    MEMF(esi + 0x71C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    edx = MEM32(0x4A1E94);
    MEMF(esi + 0x720) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A69C0); /* movss */
    MEMF(esi + 0x724) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x728) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B19D0); /* movss */
    MEMF(esi + 0x72C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A3408); /* movss */
    MEMF(esi + 0x6B8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A340C); /* movss */
    MEMF(esi + 0x6BC) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x6C8) = xmm6.f[0]; /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x6CC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x6C0) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1730); /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x6C4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x7B0) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    MEM8(esi + 0x8E1) = 0;
    ecx = esi + 0x730;
    MEMF(esi + 0x89C) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A4);
    edx = edx + 0x10;
    MEMF(esi + 0x8A0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EC41C); /* movss */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    MEMF(esi + 0x594) = xmm4.f[0]; /* movss */
    MEMF(0x3EC418) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AE10:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x734;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AE3F:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x738;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AE6E:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x73C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AE9D:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x740;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AECC:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x744;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AEFB:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x748;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3A8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AF2A:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x74C;
    PUSH32(esp, ecx);
    edx = edx + 0x10;
    ecx = MEM32(0x3EC3A8);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AF59:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x750;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AF88:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x754;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AFB7:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x758;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014AFE6:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x75C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3AC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B015:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x760;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B044:
    eax = MEM32(0x3EC32C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x764;
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B073:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x768;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B0A2:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x76C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B0D1:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x770;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B100:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x774;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B12F:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x778;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B15E:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = esi + 0x77C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B4);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B18D:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x780;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B1BC:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x784;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B1EB:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x788;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B21A:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x78C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3B8);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B249:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x790;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B278:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x794;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B2A7:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x798;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B2D6:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x79C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3BC);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B305:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x7A0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3C0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDFC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B334:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x7A4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3C0);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEDF0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B363:
    eax = MEM32(0x3EC32C);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x7A8;
    edx = edx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = MEM32(0x3EC3C0);
    edx = 0x3AE674;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B392:
    eax = MEM32(0x3EC32C);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = esi + 0x7AC;
    ecx = ecx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC3C0);
    eax = 0; /* xor self */
    edx = 0x3AE680;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014B3C1:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
