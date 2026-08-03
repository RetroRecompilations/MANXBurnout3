#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018BD0
 * Original: 0x00018BD0 - 0x000190E8 (1304 bytes, 431 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018BD0:
    eax = MEM32(ecx + 0x988);
    if (CMP_LE(eax & eax, 0)) goto loc_00018BED; /* jle: less or equal (signed <=) */

loc_00018BDA:
    eax--;
    MEM32(ecx + 0x988) = eax;
    if ((eax != 0)) goto loc_00018BED; /* jne: not equal / not zero */

loc_00018BE3:
    MEM32(ecx + 0x984) = 0xFFFFFFFFu;

loc_00018BED:
    eax = MEM32(ecx + 0x54);
    if (CMP_LE(eax & eax, 0)) goto loc_00018BF8; /* jle: less or equal (signed <=) */

loc_00018BF4:
    eax--;
    MEM32(ecx + 0x54) = eax;

loc_00018BF8:
    eax = MEM32(ecx + 0x64);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C03; /* jle: less or equal (signed <=) */

loc_00018BFF:
    eax--;
    MEM32(ecx + 0x64) = eax;

loc_00018C03:
    eax = MEM32(ecx + 0x74);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C0E; /* jle: less or equal (signed <=) */

loc_00018C0A:
    eax--;
    MEM32(ecx + 0x74) = eax;

loc_00018C0E:
    eax = MEM32(ecx + 0x84);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C1F; /* jle: less or equal (signed <=) */

loc_00018C18:
    eax--;
    MEM32(ecx + 0x84) = eax;

loc_00018C1F:
    eax = MEM32(ecx + 0x94);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C30; /* jle: less or equal (signed <=) */

loc_00018C29:
    eax--;
    MEM32(ecx + 0x94) = eax;

loc_00018C30:
    eax = MEM32(ecx + 0xA4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C41; /* jle: less or equal (signed <=) */

loc_00018C3A:
    eax--;
    MEM32(ecx + 0xA4) = eax;

loc_00018C41:
    eax = MEM32(ecx + 0xB4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C52; /* jle: less or equal (signed <=) */

loc_00018C4B:
    eax--;
    MEM32(ecx + 0xB4) = eax;

loc_00018C52:
    eax = MEM32(ecx + 0xC4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C63; /* jle: less or equal (signed <=) */

loc_00018C5C:
    eax--;
    MEM32(ecx + 0xC4) = eax;

loc_00018C63:
    eax = MEM32(ecx + 0xD4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C74; /* jle: less or equal (signed <=) */

loc_00018C6D:
    eax--;
    MEM32(ecx + 0xD4) = eax;

loc_00018C74:
    eax = MEM32(ecx + 0xE4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C85; /* jle: less or equal (signed <=) */

loc_00018C7E:
    eax--;
    MEM32(ecx + 0xE4) = eax;

loc_00018C85:
    eax = MEM32(ecx + 0xF4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018C96; /* jle: less or equal (signed <=) */

loc_00018C8F:
    eax--;
    MEM32(ecx + 0xF4) = eax;

loc_00018C96:
    eax = MEM32(ecx + 0x14);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CA1; /* jle: less or equal (signed <=) */

loc_00018C9D:
    eax--;
    MEM32(ecx + 0x14) = eax;

loc_00018CA1:
    eax = MEM32(ecx + 0x24);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CAC; /* jle: less or equal (signed <=) */

loc_00018CA8:
    eax--;
    MEM32(ecx + 0x24) = eax;

loc_00018CAC:
    eax = MEM32(ecx + 0x34);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CB7; /* jle: less or equal (signed <=) */

loc_00018CB3:
    eax--;
    MEM32(ecx + 0x34) = eax;

loc_00018CB7:
    eax = MEM32(ecx + 0x344);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CC8; /* jle: less or equal (signed <=) */

loc_00018CC1:
    eax--;
    MEM32(ecx + 0x344) = eax;

loc_00018CC8:
    eax = MEM32(ecx + 0x174);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CD9; /* jle: less or equal (signed <=) */

loc_00018CD2:
    eax--;
    MEM32(ecx + 0x174) = eax;

loc_00018CD9:
    eax = MEM32(ecx + 0x164);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CEA; /* jle: less or equal (signed <=) */

loc_00018CE3:
    eax--;
    MEM32(ecx + 0x164) = eax;

loc_00018CEA:
    eax = MEM32(ecx + 0x354);
    if (CMP_LE(eax & eax, 0)) goto loc_00018CFB; /* jle: less or equal (signed <=) */

loc_00018CF4:
    eax--;
    MEM32(ecx + 0x354) = eax;

loc_00018CFB:
    eax = MEM32(ecx + 0x184);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D0C; /* jle: less or equal (signed <=) */

loc_00018D05:
    eax--;
    MEM32(ecx + 0x184) = eax;

loc_00018D0C:
    eax = MEM32(ecx + 0x194);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D1D; /* jle: less or equal (signed <=) */

loc_00018D16:
    eax--;
    MEM32(ecx + 0x194) = eax;

loc_00018D1D:
    eax = MEM32(ecx + 0x1A4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D2E; /* jle: less or equal (signed <=) */

loc_00018D27:
    eax--;
    MEM32(ecx + 0x1A4) = eax;

loc_00018D2E:
    eax = MEM32(ecx + 0x1B4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D3F; /* jle: less or equal (signed <=) */

loc_00018D38:
    eax--;
    MEM32(ecx + 0x1B4) = eax;

loc_00018D3F:
    eax = MEM32(ecx + 0x1C4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D50; /* jle: less or equal (signed <=) */

loc_00018D49:
    eax--;
    MEM32(ecx + 0x1C4) = eax;

loc_00018D50:
    eax = MEM32(ecx + 0x1D4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D61; /* jle: less or equal (signed <=) */

loc_00018D5A:
    eax--;
    MEM32(ecx + 0x1D4) = eax;

loc_00018D61:
    eax = MEM32(ecx + 0x1E4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D72; /* jle: less or equal (signed <=) */

loc_00018D6B:
    eax--;
    MEM32(ecx + 0x1E4) = eax;

loc_00018D72:
    eax = MEM32(ecx + 0x1F4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D83; /* jle: less or equal (signed <=) */

loc_00018D7C:
    eax--;
    MEM32(ecx + 0x1F4) = eax;

loc_00018D83:
    eax = MEM32(ecx + 0x204);
    if (CMP_LE(eax & eax, 0)) goto loc_00018D94; /* jle: less or equal (signed <=) */

loc_00018D8D:
    eax--;
    MEM32(ecx + 0x204) = eax;

loc_00018D94:
    eax = MEM32(ecx + 0x214);
    if (CMP_LE(eax & eax, 0)) goto loc_00018DA5; /* jle: less or equal (signed <=) */

loc_00018D9E:
    eax--;
    MEM32(ecx + 0x214) = eax;

loc_00018DA5:
    PUSH32(esp, esi);
    eax = ecx + 0x234;
    esi = 3;

loc_00018DB1:
    edx = MEM32(eax + -16);
    if (CMP_LE(edx & edx, 0)) goto loc_00018DBC; /* jle: less or equal (signed <=) */

loc_00018DB8:
    edx--;
    MEM32(eax + -16) = edx;

loc_00018DBC:
    edx = MEM32(eax);
    if (CMP_LE(edx & edx, 0)) goto loc_00018DC5; /* jle: less or equal (signed <=) */

loc_00018DC2:
    edx--;
    MEM32(eax) = edx;

loc_00018DC5:
    edx = MEM32(eax + 0x10);
    if (CMP_LE(edx & edx, 0)) goto loc_00018DD0; /* jle: less or equal (signed <=) */

loc_00018DCC:
    edx--;
    MEM32(eax + 0x10) = edx;

loc_00018DD0:
    edx = MEM32(eax + 0x20);
    if (CMP_LE(edx & edx, 0)) goto loc_00018DDB; /* jle: less or equal (signed <=) */

loc_00018DD7:
    edx--;
    MEM32(eax + 0x20) = edx;

loc_00018DDB:
    edx = MEM32(eax + 0x30);
    if (CMP_LE(edx & edx, 0)) goto loc_00018DE6; /* jle: less or equal (signed <=) */

loc_00018DE2:
    edx--;
    MEM32(eax + 0x30) = edx;

loc_00018DE6:
    edx = MEM32(eax + 0x40);
    if (CMP_LE(edx & edx, 0)) goto loc_00018DF1; /* jle: less or equal (signed <=) */

loc_00018DED:
    edx--;
    MEM32(eax + 0x40) = edx;

loc_00018DF1:
    eax = eax + 0x60;
    esi--;
    if ((esi != 0)) goto loc_00018DB1; /* jne: not equal / not zero */

loc_00018DF7:
    eax = MEM32(ecx + 0x804);
    if (CMP_LE(eax & eax, 0)) goto loc_00018E08; /* jle: less or equal (signed <=) */

loc_00018E01:
    eax--;
    MEM32(ecx + 0x804) = eax;

loc_00018E08:
    eax = MEM32(ecx + 0x494);
    if (CMP_LE(eax & eax, 0)) goto loc_00018E19; /* jle: less or equal (signed <=) */

loc_00018E12:
    eax--;
    MEM32(ecx + 0x494) = eax;

loc_00018E19:
    eax = MEM32(ecx + 0x484);
    if (CMP_LE(eax & eax, 0)) goto loc_00018E2A; /* jle: less or equal (signed <=) */

loc_00018E23:
    eax--;
    MEM32(ecx + 0x484) = eax;

loc_00018E2A:
    eax = MEM32(ecx + 0x814);
    if (CMP_LE(eax & eax, 0)) goto loc_00018E3B; /* jle: less or equal (signed <=) */

loc_00018E34:
    eax--;
    MEM32(ecx + 0x814) = eax;

loc_00018E3B:
    eax = ecx + 0x4A4;
    esi = 0x13;

loc_00018E46:
    edx = MEM32(eax);
    if (CMP_LE(edx & edx, 0)) goto loc_00018E4F; /* jle: less or equal (signed <=) */

loc_00018E4C:
    edx--;
    MEM32(eax) = edx;

loc_00018E4F:
    eax = eax + 0x10;
    esi--;
    if ((esi != 0)) goto loc_00018E46; /* jne: not equal / not zero */

loc_00018E55:
    eax = ecx + 0x5E4;
    esi = 7;

loc_00018E60:
    edx = MEM32(eax + -16);
    if (CMP_LE(edx & edx, 0)) goto loc_00018E6B; /* jle: less or equal (signed <=) */

loc_00018E67:
    edx--;
    MEM32(eax + -16) = edx;

loc_00018E6B:
    edx = MEM32(eax);
    if (CMP_LE(edx & edx, 0)) goto loc_00018E74; /* jle: less or equal (signed <=) */

loc_00018E71:
    edx--;
    MEM32(eax) = edx;

loc_00018E74:
    edx = MEM32(eax + 0x10);
    if (CMP_LE(edx & edx, 0)) goto loc_00018E7F; /* jle: less or equal (signed <=) */

loc_00018E7B:
    edx--;
    MEM32(eax + 0x10) = edx;

loc_00018E7F:
    edx = MEM32(eax + 0x20);
    if (CMP_LE(edx & edx, 0)) goto loc_00018E8A; /* jle: less or equal (signed <=) */

loc_00018E86:
    edx--;
    MEM32(eax + 0x20) = edx;

loc_00018E8A:
    edx = MEM32(eax + 0x30);
    if (CMP_LE(edx & edx, 0)) goto loc_00018E95; /* jle: less or equal (signed <=) */

loc_00018E91:
    edx--;
    MEM32(eax + 0x30) = edx;

loc_00018E95:
    eax = eax + 0x50;
    esi--;
    if ((esi != 0)) goto loc_00018E60; /* jne: not equal / not zero */

loc_00018E9B:
    eax = MEM32(ecx + 4);
    if (CMP_LE(eax & eax, 0)) goto loc_00018EA6; /* jle: less or equal (signed <=) */

loc_00018EA2:
    eax--;
    MEM32(ecx + 4) = eax;

loc_00018EA6:
    eax = MEM32(ecx + 0x44);
    if (CMP_LE(eax & eax, 0)) goto loc_00018EB1; /* jle: less or equal (signed <=) */

loc_00018EAD:
    eax--;
    MEM32(ecx + 0x44) = eax;

loc_00018EB1:
    eax = ecx + 0x824;
    esi = 2;
    /* nop */

loc_00018EC0:
    edx = MEM32(eax + -1216);
    if (CMP_LE(edx & edx, 0)) goto loc_00018ED1; /* jle: less or equal (signed <=) */

loc_00018ECA:
    edx--;
    MEM32(eax + -1216) = edx;

loc_00018ED1:
    edx = MEM32(eax);
    if (CMP_LE(edx & edx, 0)) goto loc_00018EDA; /* jle: less or equal (signed <=) */

loc_00018ED7:
    edx--;
    MEM32(eax) = edx;

loc_00018EDA:
    edx = MEM32(eax + -1200);
    if (CMP_LE(edx & edx, 0)) goto loc_00018EEB; /* jle: less or equal (signed <=) */

loc_00018EE4:
    edx--;
    MEM32(eax + -1200) = edx;

loc_00018EEB:
    edx = MEM32(eax + 0x10);
    if (CMP_LE(edx & edx, 0)) goto loc_00018EF6; /* jle: less or equal (signed <=) */

loc_00018EF2:
    edx--;
    MEM32(eax + 0x10) = edx;

loc_00018EF6:
    edx = MEM32(eax + -1184);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F07; /* jle: less or equal (signed <=) */

loc_00018F00:
    edx--;
    MEM32(eax + -1184) = edx;

loc_00018F07:
    edx = MEM32(eax + 0x20);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F12; /* jle: less or equal (signed <=) */

loc_00018F0E:
    edx--;
    MEM32(eax + 0x20) = edx;

loc_00018F12:
    edx = MEM32(eax + -1168);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F23; /* jle: less or equal (signed <=) */

loc_00018F1C:
    edx--;
    MEM32(eax + -1168) = edx;

loc_00018F23:
    edx = MEM32(eax + 0x30);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F2E; /* jle: less or equal (signed <=) */

loc_00018F2A:
    edx--;
    MEM32(eax + 0x30) = edx;

loc_00018F2E:
    edx = MEM32(eax + -1152);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F3F; /* jle: less or equal (signed <=) */

loc_00018F38:
    edx--;
    MEM32(eax + -1152) = edx;

loc_00018F3F:
    edx = MEM32(eax + 0x40);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F4A; /* jle: less or equal (signed <=) */

loc_00018F46:
    edx--;
    MEM32(eax + 0x40) = edx;

loc_00018F4A:
    edx = MEM32(eax + -1136);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F5B; /* jle: less or equal (signed <=) */

loc_00018F54:
    edx--;
    MEM32(eax + -1136) = edx;

loc_00018F5B:
    edx = MEM32(eax + 0x50);
    if (CMP_LE(edx & edx, 0)) goto loc_00018F66; /* jle: less or equal (signed <=) */

loc_00018F62:
    edx--;
    MEM32(eax + 0x50) = edx;

loc_00018F66:
    eax = eax + 0x60;
    esi--;
    if ((esi != 0)) goto loc_00018EC0; /* jne: not equal / not zero */

loc_00018F70:
    eax = MEM32(ecx + 0x104);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(eax & eax, 0)) goto loc_00018F82; /* jle: less or equal (signed <=) */

loc_00018F7B:
    eax--;
    MEM32(ecx + 0x104) = eax;

loc_00018F82:
    eax = MEM32(ecx + 0x424);
    if (CMP_LE(eax & eax, 0)) goto loc_00018F93; /* jle: less or equal (signed <=) */

loc_00018F8C:
    eax--;
    MEM32(ecx + 0x424) = eax;

loc_00018F93:
    eax = MEM32(ecx + 0x114);
    if (CMP_LE(eax & eax, 0)) goto loc_00018FA4; /* jle: less or equal (signed <=) */

loc_00018F9D:
    eax--;
    MEM32(ecx + 0x114) = eax;

loc_00018FA4:
    eax = MEM32(ecx + 0x434);
    if (CMP_LE(eax & eax, 0)) goto loc_00018FB5; /* jle: less or equal (signed <=) */

loc_00018FAE:
    eax--;
    MEM32(ecx + 0x434) = eax;

loc_00018FB5:
    eax = MEM32(ecx + 0x124);
    if (CMP_LE(eax & eax, 0)) goto loc_00018FC6; /* jle: less or equal (signed <=) */

loc_00018FBF:
    eax--;
    MEM32(ecx + 0x124) = eax;

loc_00018FC6:
    eax = MEM32(ecx + 0x444);
    if (CMP_LE(eax & eax, 0)) goto loc_00018FD7; /* jle: less or equal (signed <=) */

loc_00018FD0:
    eax--;
    MEM32(ecx + 0x444) = eax;

loc_00018FD7:
    eax = MEM32(ecx + 0x134);
    if (CMP_LE(eax & eax, 0)) goto loc_00018FE8; /* jle: less or equal (signed <=) */

loc_00018FE1:
    eax--;
    MEM32(ecx + 0x134) = eax;

loc_00018FE8:
    eax = MEM32(ecx + 0x454);
    if (CMP_LE(eax & eax, 0)) goto loc_00018FF9; /* jle: less or equal (signed <=) */

loc_00018FF2:
    eax--;
    MEM32(ecx + 0x454) = eax;

loc_00018FF9:
    eax = MEM32(ecx + 0x144);
    if (CMP_LE(eax & eax, 0)) goto loc_0001900A; /* jle: less or equal (signed <=) */

loc_00019003:
    eax--;
    MEM32(ecx + 0x144) = eax;

loc_0001900A:
    eax = MEM32(ecx + 0x464);
    if (CMP_LE(eax & eax, 0)) goto loc_0001901B; /* jle: less or equal (signed <=) */

loc_00019014:
    eax--;
    MEM32(ecx + 0x464) = eax;

loc_0001901B:
    eax = MEM32(ecx + 0x154);
    if (CMP_LE(eax & eax, 0)) goto loc_0001902C; /* jle: less or equal (signed <=) */

loc_00019025:
    eax--;
    MEM32(ecx + 0x154) = eax;

loc_0001902C:
    eax = MEM32(ecx + 0x474);
    if (CMP_LE(eax & eax, 0)) goto loc_0001903D; /* jle: less or equal (signed <=) */

loc_00019036:
    eax--;
    MEM32(ecx + 0x474) = eax;

loc_0001903D:
    eax = MEM32(ecx + 0x8E4);
    if (CMP_LE(eax & eax, 0)) goto loc_0001904E; /* jle: less or equal (signed <=) */

loc_00019047:
    eax--;
    MEM32(ecx + 0x8E4) = eax;

loc_0001904E:
    eax = MEM32(ecx + 0x8F4);
    if (CMP_LE(eax & eax, 0)) goto loc_0001905F; /* jle: less or equal (signed <=) */

loc_00019058:
    eax--;
    MEM32(ecx + 0x8F4) = eax;

loc_0001905F:
    eax = MEM32(ecx + 0x924);
    if (CMP_LE(eax & eax, 0)) goto loc_00019070; /* jle: less or equal (signed <=) */

loc_00019069:
    eax--;
    MEM32(ecx + 0x924) = eax;

loc_00019070:
    eax = MEM32(ecx + 0x914);
    if (CMP_LE(eax & eax, 0)) goto loc_00019081; /* jle: less or equal (signed <=) */

loc_0001907A:
    eax--;
    MEM32(ecx + 0x914) = eax;

loc_00019081:
    eax = MEM32(ecx + 0x934);
    if (CMP_LE(eax & eax, 0)) goto loc_00019092; /* jle: less or equal (signed <=) */

loc_0001908B:
    eax--;
    MEM32(ecx + 0x934) = eax;

loc_00019092:
    eax = MEM32(ecx + 0x944);
    if (CMP_LE(eax & eax, 0)) goto loc_000190A3; /* jle: less or equal (signed <=) */

loc_0001909C:
    eax--;
    MEM32(ecx + 0x944) = eax;

loc_000190A3:
    eax = MEM32(ecx + 0x964);
    if (CMP_LE(eax & eax, 0)) goto loc_000190B4; /* jle: less or equal (signed <=) */

loc_000190AD:
    eax--;
    MEM32(ecx + 0x964) = eax;

loc_000190B4:
    eax = MEM32(ecx + 0x974);
    if (CMP_LE(eax & eax, 0)) goto loc_000190C5; /* jle: less or equal (signed <=) */

loc_000190BE:
    eax--;
    MEM32(ecx + 0x974) = eax;

loc_000190C5:
    eax = MEM32(ecx + 0x904);
    if (CMP_LE(eax & eax, 0)) goto loc_000190D6; /* jle: less or equal (signed <=) */

loc_000190CF:
    eax--;
    MEM32(ecx + 0x904) = eax;

loc_000190D6:
    eax = MEM32(ecx + 0x954);
    if (CMP_LE(eax & eax, 0)) goto loc_000190E7; /* jle: less or equal (signed <=) */

loc_000190E0:
    eax--;
    MEM32(ecx + 0x954) = eax;

loc_000190E7:
    esp += 4; return; /* ret */

}
