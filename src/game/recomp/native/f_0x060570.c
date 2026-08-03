#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00060570
 * Original: 0x00060570 - 0x00060DB3 (2115 bytes, 453 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060570(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060570:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000B95B0(); /* call 0x000B95B0 */

loc_0006057A:
    eax = edi + 0x7580;
    ebx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ebp = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ebp++;
    MEM32(0x557A54) = ebp;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    eax = edi + 0x70;
    PUSH32(esp, 0); sub_000D7F00(); /* call 0x000D7F00 */

loc_000605B6:
    eax = edi + 0x5D60;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    esi = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ebp = 3;
    esi = esi + ebp;
    MEM32(0x557A54) = esi;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    esi = edi + 0x60C0;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM32(eax + 0x44) = ebx;
    MEM32(eax + 0x48) = ebx;
    MEM32(eax + 0x4C) = ebx;
    MEM32(eax + 0x50) = ebx;
    PUSH32(esp, 0); sub_000BFC40(); /* call 0x000BFC40 */

loc_00060617:
    MEM8(edi + 0xA6A) = LO8(ebx);
    MEM8(edi + 0xA6B) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0xA68) = LO16(ecx);
    edx = MEM32(0x557A54);
    eax = edi + 0xA60;
    edx++;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = ebx;
    eax = edi + 0xA7C;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    esi = 2;
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0x4160;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + esi;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x864) = ebx;
    MEM32(eax + 0x860) = ebx;
    MEM32(eax + 0x868) = ebx;
    eax = edi + 0x61C0;
    PUSH32(esp, 0); sub_000BCB10(); /* call 0x000BCB10 */

loc_000606E7:
    eax = edi + 0xA98;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + ebp;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0x5B58;
    PUSH32(esp, 0); sub_000E9D20(); /* call 0x000E9D20 */

loc_00060731:
    eax = edi + 0x6ED0;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 1;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0xAC4;
    PUSH32(esp, 0); sub_000F0DF0(); /* call 0x000F0DF0 */

loc_00060773:
    eax = edi + 0xC8C;
    PUSH32(esp, 0); sub_000E2D30(); /* call 0x000E2D30 */

loc_0006077E:
    eax = edi + 0xB9C;
    PUSH32(esp, 0); sub_000EF060(); /* call 0x000EF060 */

loc_00060789:
    MEM8(edi + 0xCF2) = LO8(ebx);
    MEM8(edi + 0xCF3) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0xCF0) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    eax = edi + 0xCE8;
    ecx++;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    eax = edi + 0xD08;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 1;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    eax = edi + 0xF08;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    ecx = ecx + esi;
    edx = MEM32(0x557A58);
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    eax = edi + 0xE38;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 1;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    eax = edi + 0x4B00;
    PUSH32(esp, 0); sub_000C2360(); /* call 0x000C2360 */

loc_00060870:
    MEM8(edi + 0x68FA) = LO8(ebx);
    MEM8(edi + 0x68FB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x68F8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    eax = edi + 0x68F0;
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x8C) = ebx;
    MEM8(edi + 0x49DA) = LO8(ebx);
    MEM8(edi + 0x49DB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x49D8) = LO16(ecx);
    edx = MEM32(0x557A54);
    eax = edi + 0x49D0;
    edx = edx + esi;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM8(edi + 0x4A1A) = LO8(ebx);
    MEM8(edi + 0x4A1B) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x4A18) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    eax = edi + 0x4A10;
    ecx++;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x14) = ebx;
    MEM8(edi + 0x5A8A) = LO8(ebx);
    MEM8(edi + 0x5A8B) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x5A88) = LO16(ecx);
    edx = MEM32(0x557A54);
    eax = edi + 0x5A80;
    edx = edx + ebp;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x30) = ebx;
    eax = edi + 0x4BF0;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + ebp;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xE70) = ebx;
    MEM32(eax + 0xE6C) = ebx;
    MEM8(edi + 0x4A3A) = LO8(ebx);
    MEM8(edi + 0x4A3B) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x4A38) = LO16(ecx);
    edx = MEM32(0x557A54);
    eax = edi + 0x4A30;
    edx = edx + esi;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(edi + 0x4A88) = ebx;
    MEM32(edi + 0x4A8C) = ebx;
    MEM8(edi + 0x4A7A) = LO8(ebx);
    MEM8(edi + 0x4A7B) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    eax = edi + 0x4A70;
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    eax = edi + 0x6078;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 1;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    ecx = edi + 0x5AD0;
    MEM32(0x557A58) = eax;
    PUSH32(esp, 0); sub_000C4620(); /* call 0x000C4620 */

loc_00060A70:
    eax = edi + 0x6428;
    PUSH32(esp, 0); sub_000BEB80(); /* call 0x000BEB80 */

loc_00060A7B:
    eax = edi + 0x6548;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + ebp;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xD4) = 1;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x30) = ebx;
    eax = edi + 0x6620;
    PUSH32(esp, 0); sub_000E3E90(); /* call 0x000E3E90 */

loc_00060ADE:
    eax = edi + 0x5D20;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + esi;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0xF40;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + ebp;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x48) = ebx;
    MEM32(eax + 0x4C) = ebx;
    MEM8(edi + 0x4ADA) = LO8(ebx);
    MEM8(edi + 0x4ADB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x4AD8) = LO16(ecx);
    ebp = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    eax = edi + 0x4AD0;
    ebp = ebp + esi;
    MEM32(0x557A54) = ebp;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM8(edi + 0x4AAA) = LO8(ebx);
    MEM8(edi + 0x4AAB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x4AA8) = LO16(ecx);
    edx = MEM32(0x557A54);
    eax = edi + 0x4AA0;
    edx = edx + esi;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    eax = edi + 0x5B3C;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0xD80;
    PUSH32(esp, 0); sub_000D3EA0(); /* call 0x000D3EA0 */

loc_00060C40:
    eax = edi + 0x6468;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ebp = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ebp = ebp + esi;
    MEM32(0x557A54) = ebp;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    eax = edi + 0x6828;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 1;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM8(edi + 0x6872) = LO8(ebx);
    MEM8(edi + 0x6873) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x6870) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    eax = edi + 0x6868;
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM8(edi + 0x6EFA) = LO8(ebx);
    MEM8(edi + 0x6EFB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x6EF8) = LO16(ecx);
    ebp = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    eax = edi + 0x6EF0;
    ebp++;
    MEM32(0x557A54) = ebp;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x680) = ebx;
    MEM32(eax + 0x684) = ebx;
    MEM32(eax + 0x688) = ebx;
    MEM8(edi + 0x763E) = LO8(ebx);
    MEM8(edi + 0x763F) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(edi + 0x763C) = LO16(ecx);
    edx = MEM32(0x557A54);
    eax = edi + 0x7634;
    edx = edx + esi;
    MEM32(0x557A54) = edx;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0xE70;
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    edx = MEM32(0x557A58);
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    POP32(esp, esi);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x80) = ebx;
    MEM32(eax + 0x84) = ebx;
    POP32(esp, ebp);
    eax = edi + 0x5E20;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000C2D90(); return; /* tail jmp 0x000C2D90 */

}
