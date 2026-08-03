#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0016AFD0
 * Original: 0x0016AFD0 - 0x0016C36A (5018 bytes, 1361 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AFD0:
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm1.f[0] = MEMF(0x3A69B4); /* movss */
    xmm5.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1824); /* movss */
    MEMF(eax + 0x18) = xmm5.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17E8); /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1690); /* movss */
    ecx = eax + 0x14;
    MEM32(esp + 0x98) = ecx;
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    ecx = eax + 0x18;
    MEM32(esp + 0x18) = ecx;
    xmm3.f[0] = MEMF(0x3B1870); /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    ecx = eax + 0x1C;
    MEM32(esp + 0x118) = ecx;
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    ecx = eax + 0x20;
    MEM32(esp + 0x20) = ecx;
    ecx = eax + 0x24;
    MEM32(esp + 0xA0) = ecx;
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1684); /* movss */
    ecx = eax + 0x28;
    MEM32(esp + 0x28) = ecx;
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    ecx = eax + 0x2C;
    MEM32(esp + 0xE0) = ecx;
    xmm4.f[0] = MEMF(0x3A292C); /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    ecx = eax + 0x30;
    MEM32(esp + 0x30) = ecx;
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    ecx = eax + 0x34;
    MEM32(esp + 0xA8) = ecx;
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1B7C); /* movss */
    ecx = eax + 0x38;
    MEM32(esp + 0x38) = ecx;
    edi = eax + 8;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17E4); /* movss */
    MEMF(eax + 0x40) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16D4); /* movss */
    ebx = eax + 0xC;
    ecx = eax + 0x3C;
    MEM32(esp + 0x100) = ecx;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = eax + 0x40;
    MEM32(esp + 0x40) = ecx;
    MEMF(eax + 0x44) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A7950); /* movss */
    ecx = eax + 0x44;
    MEM32(esp + 0xB0) = ecx;
    ecx = eax + 0x74;
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x48) = ecx;
    ecx = eax + 0x78;
    MEM32(esp + 0xE8) = ecx;
    MEMF(ecx) = xmm6.f[0]; /* movss */
    ecx = eax + 0x48;
    MEM32(esp + 0x50) = ecx;
    MEMF(ecx) = xmm3.f[0]; /* movss */
    ecx = eax + 0x4C;
    MEM32(esp + 0xB8) = ecx;
    MEMF(ecx) = xmm4.f[0]; /* movss */
    esi = eax + 4;
    ebp = eax + 0x10;
    ecx = eax + 0x50;
    MEMF(esi) = xmm2.f[0]; /* movss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x58) = ecx;
    xmm4.f[0] = MEMF(0x3B1884); /* movss */
    xmm7.f[0] = MEMF(0x3B1694); /* movss */
    MEMF(eax + 0x54) = xmm7.f[0]; /* movss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3A795C); /* movss */
    MEMF(eax + 0x58) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3A7964); /* movss */
    ecx = eax + 0x54;
    MEM32(esp + 0x110) = ecx;
    xmm7.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    ecx = eax + 0x58;
    MEM32(esp + 0x60) = ecx;
    ecx = eax + 0x5C;
    MEM32(esp + 0xC0) = ecx;
    MEMF(eax + 0x6C) = xmm4.f[0]; /* movss */
    ecx = eax + 0x60;
    MEM32(esp + 0x68) = ecx;
    MEMF(eax + 0x70) = xmm1.f[0]; /* movss */
    ecx = eax + 0x64;
    MEM32(esp + 0xF0) = ecx;
    MEMF(eax + 0x7C) = xmm2.f[0]; /* movss */
    ecx = eax + 0x68;
    MEM32(esp + 0x70) = ecx;
    ecx = eax + 0x6C;
    MEM32(esp + 0xC8) = ecx;
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B1B78); /* movss */
    ecx = eax + 0x70;
    MEM32(esp + 0x78) = ecx;
    ecx = eax + 0x7C;
    MEM32(esp + 0x108) = ecx;
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    ecx = eax + 0x80;
    MEM32(esp + 0x80) = ecx;
    MEMF(eax + 0x8C) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B16E8); /* movss */
    ecx = eax + 0x84;
    MEM32(esp + 0xD0) = ecx;
    ecx = eax + 0x88;
    MEM32(esp + 0x88) = ecx;
    MEMF(eax + 0x98) = xmm4.f[0]; /* movss */
    ecx = eax + 0x8C;
    MEM32(esp + 0xF8) = ecx;
    MEMF(eax + 0x90) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3A69C4); /* movss */
    ecx = eax + 0x98;
    MEM32(esp + 0x90) = ecx;
    MEMF(eax + 0x94) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x3B16DC); /* movss */
    ecx = eax + 0x90;
    MEM32(esp + 0xD8) = ecx;
    ecx = eax + 0x94;
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + 0x9C) = xmm7.f[0]; /* movss */
    ecx = eax + 0x9C;
    MEM32(esp + 0x14) = ecx;
    MEMF(eax + 0xA0) = xmm3.f[0]; /* movss */
    ecx = eax + 0xA0;
    MEM32(esp + 0x1C) = ecx;
    ecx = eax + 0xA4;
    MEM32(esp + 0x24) = ecx;
    MEM32(ecx) = 0;
    ecx = eax + 0xA8;
    MEM32(esp + 0x34) = ecx;
    MEM32(ecx) = 5;
    ecx = eax + 0xAC;
    MEM32(esp + 0x2C) = ecx;
    MEM32(ecx) = 0;
    ecx = eax + 0xB0;
    MEM32(esp + 0x3C) = ecx;
    MEM32(ecx) = 0;
    ecx = eax + 0xB4;
    MEM32(esp + 0x44) = ecx;
    MEMF(ecx) = xmm3.f[0]; /* movss */
    ecx = eax + 0xB8;
    MEM32(esp + 0x4C) = ecx;
    xmm7.f[0] = MEMF(0x3B1884); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC4) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(eax + 0xC0) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xCC) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A795C); /* movss */
    MEMF(eax + 0xD0) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(eax + 0xC8) = xmm6.f[0]; /* movss */
    ecx = eax + 0xBC;
    MEM32(esp + 0x54) = ecx;
    MEMF(eax + 0xD4) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B17E8); /* movss */
    ecx = eax + 0xC0;
    MEM32(esp + 0x5C) = ecx;
    ecx = eax + 0xC4;
    MEM32(esp + 0x64) = ecx;
    MEMF(eax + 0xD8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A69B8); /* movss */
    ecx = eax + 0xCC;
    MEM32(esp + 0x74) = ecx;
    ecx = eax + 0xC8;
    MEM32(esp + 0x6C) = ecx;
    MEMF(eax + 0xDC) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1B74); /* movss */
    ecx = eax + 0xD0;
    MEM32(esp + 0x7C) = ecx;
    ecx = eax + 0xD4;
    MEM32(esp + 0x84) = ecx;
    MEMF(eax + 0xE0) = xmm4.f[0]; /* movss */
    ecx = eax + 0xD8;
    MEM32(esp + 0x8C) = ecx;
    MEMF(eax + 0xE4) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1708); /* movss */
    ecx = eax + 0xDC;
    MEM32(esp + 0x94) = ecx;
    MEMF(eax + 0xE8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1698); /* movss */
    ecx = eax + 0xE0;
    MEM32(esp + 0x9C) = ecx;
    ecx = eax + 0xE4;
    MEM32(esp + 0xA4) = ecx;
    MEMF(eax + 0xEC) = xmm3.f[0]; /* movss */
    ecx = eax + 0xE8;
    MEM32(esp + 0xAC) = ecx;
    MEMF(eax + 0xF0) = xmm3.f[0]; /* movss */
    ecx = eax + 0xEC;
    MEM32(esp + 0xB4) = ecx;
    ecx = eax + 0xF0;
    MEM32(esp + 0xBC) = ecx;
    MEMF(eax + 0xF4) = xmm5.f[0]; /* movss */
    ecx = eax + 0xF4;
    MEM32(esp + 0xC4) = ecx;
    MEMF(eax + 0xF8) = xmm5.f[0]; /* movss */
    ecx = eax + 0xF8;
    MEM32(esp + 0xCC) = ecx;
    MEMF(eax + 0xFC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    ecx = eax + 0xFC;
    MEM32(esp + 0xD4) = ecx;
    ecx = eax + 0x100;
    MEM32(esp + 0xDC) = ecx;
    MEMF(ecx) = xmm4.f[0]; /* movss */
    ecx = eax + 0x104;
    MEM32(esp + 0xE4) = ecx;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    ecx = eax + 0x108;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEM32(esp + 0xEC) = ecx;
    ecx = eax + 0x10C;
    MEM32(esp + 0xF4) = ecx;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    ecx = eax + 0x110;
    MEM32(esp + 0xFC) = ecx;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = eax + 0x114;
    MEM32(esp + 0x104) = ecx;
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A5600); /* movss */
    edx = MEM32(0x4A1E94);
    ecx = eax + 0x118;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEM32(esp + 0x10C) = ecx;
    ecx = eax + 0x11C;
    PUSH32(esp, 0);
    MEM32(esp + 0x118) = ecx;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = eax + 0x120;
    PUSH32(esp, 0);
    MEM32(esp + 0x124) = ecx;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    ecx = MEM32(0x3F72BC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    PUSH32(esp, eax);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3B021C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B5AC:
    eax = MEM32(0x3F72BC);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    eax = 0; /* xor self */
    edx = 0x3B0200;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B5D5:
    edx = MEM32(0x3F72BC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3F72A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3B01E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B5FE:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    edx = edx + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3B01D4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B628:
    eax = MEM32(0x3F72BC);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    eax = 0; /* xor self */
    edx = 0x3B01C4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B651:
    edx = MEM32(0x3F72BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = MEM32(esp + 0xA8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    eax = 0; /* xor self */
    edx = 0x3B01A4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B682:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    eax = 0; /* xor self */
    edx = 0x3B0184;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B6B0:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x118);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    eax = 0; /* xor self */
    edx = 0x3B0168;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B6E1:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72A0);
    eax = 0; /* xor self */
    edx = 0x3B0148;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B70F:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xA0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7294);
    eax = 0; /* xor self */
    edx = 0x3B0138;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B740:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7294);
    eax = 0; /* xor self */
    edx = 0x3B0120;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B76E:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xE8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7294);
    eax = 0; /* xor self */
    edx = 0x3B0108;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B79F:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7294);
    eax = 0; /* xor self */
    edx = 0x3B00F0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B7CD:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xA8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7294);
    eax = 0; /* xor self */
    edx = 0x3B00D4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B7FE:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7294);
    eax = 0; /* xor self */
    edx = 0x3B00B4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B82C:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x100);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3B0094;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B85D:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = ecx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3B0074;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B88B:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xB0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3B0050;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B8BC:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x48);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3B0028;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B8EA:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xE8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3B0000;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B91B:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x50);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFFE8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B949:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xB8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFFCC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B97A:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x58);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFF9C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B9A8:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x110);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFF70;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016B9D9:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFF4C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BA07:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xC0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFF30;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BA38:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x68);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFF14;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BA66:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xF0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFEF8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BA97:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = MEM32(0x4A1E94);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFEDC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BAC5:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xC8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFEC4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BAF6:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x78);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFEA4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BB24:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x108);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFE80;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BB55:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x80);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFE5C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BB86:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xD0);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFE38;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BBB7:
    edx = MEM32(0x3F72BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x94);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F7298);
    eax = 0; /* xor self */
    edx = 0x3AFE14;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BBE8:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xF8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    eax = 0; /* xor self */
    edx = 0x3AFDEC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BC19:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x90);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    eax = 0; /* xor self */
    edx = 0x3AFDD4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BC4A:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0xD8);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    eax = 0; /* xor self */
    edx = 0x3AFDB8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BC7B:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    eax = 0; /* xor self */
    edx = 0x3AFD98;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BCA9:
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    eax = 0; /* xor self */
    edx = 0x3AFD70;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BCD7:
    PUSH32(esp, 0);
    edx = MEM32(0x3F72BC);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    eax = 0; /* xor self */
    edx = 0x3AFD30;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BD05:
    edx = MEM32(0x3F729C);
    edi = MEM32(0x4A1E94);
    ebx = MEM32(0x3F72BC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AFCF8);
    ebp = ebx;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016BD29:
    esi = eax;
    eax = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0016BD48:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0016BD50:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016BD5D; /* jne: not equal / not zero */

loc_0016BD54:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0016BD5B:
    goto loc_0016BD63;

loc_0016BD5D:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016BD63:
    ecx = MEM32(0x3F729C);
    eax = MEM32(0x3F72BC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AFCB0);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016BD87:
    edx = MEM32(esp + 0x2C);
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = edx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0016BDA6:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0016BDAE:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016BDBB; /* jne: not equal / not zero */

loc_0016BDB2:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0016BDB9:
    goto loc_0016BDC1;

loc_0016BDBB:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016BDC1:
    ecx = MEM32(0x3F729C);
    eax = MEM32(0x3F72BC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AFC68);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016BDE5:
    edx = MEM32(esp + 0x34);
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = edx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0016BE04:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0016BE0C:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016BE19; /* jne: not equal / not zero */

loc_0016BE10:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0016BE17:
    goto loc_0016BE1F;

loc_0016BE19:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016BE1F:
    ecx = MEM32(0x3F729C);
    eax = MEM32(0x3F72BC);
    edi = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edi = edi + 0x10;
    PUSH32(esp, 0x3AFC10);
    ebx = eax;
    ebp = eax;
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_0016BE43:
    edx = MEM32(esp + 0x3C);
    esi = eax;
    ebx = 0; /* xor self */
    MEM8(esi + 0x1E) = 1;
    MEM32(esi) = edx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0016BE62:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0016BE6A:
    if (CMP_NE(LO8(eax), 1)) goto loc_0016BE77; /* jne: not equal / not zero */

loc_0016BE6E:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0016BE75:
    goto loc_0016BE7D;

loc_0016BE77:
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(edi + 8) = MEM32(edi + 8) - 1;

loc_0016BE7D:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x44);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F729C);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AFBB0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BEA7:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72AC);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AFB60;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BED1:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x54);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72AC);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AFB10;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BEFB:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x5C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72AC);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AFAD4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BF25:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x64);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 2;
    edx = 0x3AFAA8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BF56:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x6C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = eax + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = MEM32(0x3F72B0);
    edx = 0x3AFA7C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BF80:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x74);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AFA50;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BFAA:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x7C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AFA08;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016BFD4:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x84);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF9C0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C001:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x8C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF98C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C02E:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x94);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF938;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C05B:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x9C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = MEM32(0x3F72B0);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF8FC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C088:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xA4);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF8B8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C0B5:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xAC);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF860;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C0E2:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xB4);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B0);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF820;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C10F:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xBC);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF7F4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C13C:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xC4);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF7C8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C169:
    ecx = MEM32(0x3F72BC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0xDC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF794;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C196:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xD4);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF750;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C1C3:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xDC);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF714;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C1F0:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xE4);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF6E4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C21D:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xEC);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF6C4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C24A:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0xF4);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF6A8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C277:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x104);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF68C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C2A4:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x104);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF678;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C2D1:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x10C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF650;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C2FE:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x114);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B4);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 2;
    edx = 0x3AF608;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C332:
    ecx = MEM32(0x3F72BC);
    edx = MEM32(esp + 0x11C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F72B8);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AF5D4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0016C35F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}
