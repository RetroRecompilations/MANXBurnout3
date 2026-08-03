#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013FE10
 * Original: 0x0013FE10 - 0x0014010F (767 bytes, 248 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FE10(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013FE10:
    esp = esp - 0x20;
    xmm0.f[0] = MEMF(0x3A5600); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    edx = eax + 0x28;
    MEM32(esp) = edx;
    edx = eax + 0x2C;
    MEM32(esp + 4) = edx;
    MEMF(edx) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    edx = eax + 0x30;
    MEM32(esp + 0xC) = edx;
    MEMF(edx) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    edx = eax + 0x34;
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = edx;
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = eax + 0x38;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edx;
    MEMF(edx) = xmm1.f[0]; /* movss */
    edx = eax + 0x3C;
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = edx;
    MEMF(edx) = xmm1.f[0]; /* movss */
    edx = eax + 0x40;
    ecx = eax + 0x20;
    PUSH32(esp, ebx);
    esi = eax + 0x58;
    edi = eax + 0x5C;
    ebp = eax + 0x24;
    MEM32(esp + 0x30) = edx;
    MEMF(edx) = xmm1.f[0]; /* movss */
    edx = eax + 0x44;
    MEM32(eax + 0x78) = ebx;
    MEM32(eax + 0x7C) = ebx;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + 0x54) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 0x69) = LO8(ebx);
    eax = MEM32(0x3EC258);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(ecx) = xmm2.f[0]; /* movss */
    ecx = MEM32(0x4A1E94);
    ecx = ecx + 0x10;
    MEM32(esp + 0x40) = edx;
    MEMF(edx) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    eax = 0; /* xor self */
    edx = 0x3AE2F0;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FEEF:
    edx = MEM32(0x3EC258);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE2D8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FF15:
    ecx = MEM32(0x3EC258);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE2C4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FF3F:
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x14);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE2AC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FF69:
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x18);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE298;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FF93:
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE280;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FFBD:
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x20);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE264;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0013FFE7:
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x24);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE248;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00140011:
    PUSH32(esp, ebx);
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE22C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_0014003B:
    ecx = MEM32(0x3EC258);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE210;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00140065:
    ecx = MEM32(0x3EC258);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC268);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE1F8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00140090:
    eax = MEM32(0x3EC258);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC26C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC260);
    eax = 0; /* xor self */
    edx = 0x3AE1DC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_001400BA:
    edx = MEM32(0x3EC258);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC25C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE1CC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_001400E0:
    ecx = MEM32(0x3EC258);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC25C);
    edx = edx + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AE1C0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00140107:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}
