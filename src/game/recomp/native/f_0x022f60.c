#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022F60
 * Original: 0x00022F60 - 0x000237D0 (2160 bytes, 402 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022F60:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C3E00);
    MEM32(esi + 0x984) = ebx;
    MEM32(esi + 0x988) = edi;
    PUSH32(esp, 0); sub_001CFF0A(); /* call 0x001CFF0A */

loc_00022F88:
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A37000);
    MEM32(esi + 0x9EC) = eax;
    PUSH32(esp, 0); sub_001CFF0A(); /* call 0x001CFF0A */

loc_00022F9C:
    PUSH32(esp, 0x404);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20C00);
    MEM32(esi + 0x9F0) = eax;
    PUSH32(esp, 0); sub_001CFF0A(); /* call 0x001CFF0A */

loc_00022FB3:
    edx = MEM32(esi + 0x9EC);
    ecx = MEM32(esi + 0x9F0);
    MEM32(esi + 0x9F4) = eax;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = 0x180000;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = 0x41800;
    ebp = edx + 0x180000;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = 0x1000;
    ebp = edx + 0x1C1800;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = 0x5000;
    ebp = edx + 0x1C2800;
    MEM32(esi + 0x40) = ebp;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = 0x9800;
    ebp = edx + 0x1C7800;
    MEM32(esi + 0x50) = ebp;
    MEM32(esi + 0x9BC) = edi;
    MEM32(esi + 0x9C0) = ebx;
    MEM32(esi + 0x9C4) = 0x801C0;
    ebp = edx + 0x1D1000;
    MEM32(esi + 0x9C8) = ebp;
    MEM32(esi + 0x9CC) = edi;
    MEM32(esi + 0x9D0) = ebx;
    MEM32(esi + 0x9D4) = 0x20000;
    ebp = edx + 0x251200;
    MEM32(esi + 0x9D8) = ebp;
    MEM32(esi + 0x9DC) = edi;
    MEM32(esi + 0x9E0) = ebx;
    MEM32(esi + 0x9E4) = 0x102000;
    ebp = edx + 0x271200;
    MEM32(esi + 0x9E8) = ebp;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = 0x8000;
    ebp = edx + 0x373200;
    MEM32(esi + 0x60) = ebp;
    MEM32(esi + 0x64) = edi;
    ebp = edx + 0x37B600;
    MEM32(esi + 0x70) = ebp;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = 0x4000;
    MEM32(esi + 0x98C) = edi;
    MEM32(esi + 0x998) = eax;
    MEM32(esi + 0x990) = ebx;
    MEM32(esi + 0x994) = 0x20C00;
    MEM32(esi + 0xF8) = ebx;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xFC) = 0x20800;
    eax = edx + 0x3A3600;
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xA4) = edi;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xB4) = edi;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xE8) = ebx;
    eax = edx + 0x37F600;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0xE4) = edi;
    ebp = edx + 0x383E00;
    MEM32(esi + 0x90) = ebp;
    ebp = edx + 0x388600;
    MEM32(esi + 0xA0) = ebp;
    ebp = edx + 0x38CE00;
    MEM32(esi + 0xB0) = ebp;
    eax = 0x4800;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xEC) = eax;
    ebp = edx + 0x391600;
    MEM32(esi + 0xC0) = ebp;
    ebp = edx + 0x395E00;
    MEM32(esi + 0xD0) = ebp;
    ebp = edx + 0x39A600;
    MEM32(esi + 0xE0) = ebp;
    edx = edx + 0x39EE00;
    MEM32(esi + 0xF0) = edx;
    MEM32(esi + 0x8F0) = ecx;
    MEM32(esi + 0x8E4) = edi;
    MEM32(esi + 0x8E8) = edi;
    MEM32(esi + 0x8F4) = edi;
    MEM32(esi + 0x8F8) = edi;
    ebx = 0x9D800;
    MEM32(esi + 0x8EC) = ebx;
    MEM32(esi + 0x8FC) = ebx;
    edx = ecx + 0x9D800;
    MEM32(esi + 0x900) = edx;
    MEM32(esi + 0x904) = edi;
    MEM32(esi + 0x908) = edi;
    MEM32(esi + 0x90C) = 0x20000;
    eax = ecx + 0x13B000;
    MEM32(esi + 0x910) = eax;
    MEM32(esi + 0x924) = edi;
    MEM32(esi + 0x928) = edi;
    edx = ecx + 0x15B000;
    MEM32(esi + 0x930) = edx;
    edx = 0x80000;
    MEM32(esi + 0x92C) = edx;
    MEM32(esi + 0x934) = edi;
    eax = ecx + 0x1DB000;
    MEM32(esi + 0x940) = eax;
    MEM32(esi + 0x938) = edi;
    MEM32(esi + 0x93C) = 0x100000;
    eax = ecx + 0x2DB000;
    MEM32(esi + 0x950) = eax;
    MEM32(esi + 0x944) = edi;
    MEM32(esi + 0x948) = edi;
    MEM32(esi + 0x94C) = 0xA00000;
    eax = ecx + 0xCDB400;
    MEM32(esi + 0x964) = edi;
    MEM32(esi + 0x970) = eax;
    MEM32(esi + 0x968) = edi;
    MEM32(esi + 0x96C) = 0x500000;
    MEM32(esi + 0x974) = edi;
    MEM32(esi + 0x978) = edi;
    MEM32(esi + 0x97C) = 0x64000;
    eax = ecx + 0x11DB400;
    MEM32(esi + 0x980) = eax;
    MEM32(esi + 0x954) = edi;
    MEM32(esi + 0x958) = edi;
    MEM32(esi + 0x95C) = 0x400;
    eax = ecx + 0xCDB000;
    MEM32(esi + 0x960) = eax;
    MEM32(esi + 0x110) = ecx;
    MEM32(esi + 0x104) = edi;
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x114) = edi;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x124) = edi;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x134) = edi;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x144) = edi;
    MEM32(esi + 0x14C) = ebx;
    MEM32(esi + 0x154) = edi;
    MEM32(esi + 0x15C) = ebx;
    eax = 1;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x148) = eax;
    MEM32(esi + 0x158) = eax;
    ebp = ecx + 0x9D800;
    MEM32(esi + 0x120) = ebp;
    ebp = ecx + 0x13B000;
    MEM32(esi + 0x130) = ebp;
    ebp = ecx + 0x1D8800;
    MEM32(esi + 0x140) = ebp;
    ebp = ecx + 0x276000;
    MEM32(esi + 0x150) = ebp;
    ebp = ecx + 0x313800;
    MEM32(esi + 0x160) = ebp;
    MEM32(esi + 0x9A4) = edx;
    MEM32(esi + 0x99C) = edi;
    MEM32(esi + 0x9A0) = eax;
    ebp = ecx + 0x3B1000;
    MEM32(esi + 0x9A8) = ebp;
    MEM32(esi + 0x174) = edi;
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x17C) = 0xD00000;
    edx = ecx + 0x431000;
    MEM32(esi + 0x180) = edx;
    edx = ecx + 0x1131000;
    MEM32(esi + 0x190) = edx;
    ebp = ecx + 0x1159000;
    MEM32(esi + 0x1A0) = ebp;
    ebp = ecx + 0x1181000;
    MEM32(esi + 0x1B0) = ebp;
    edx = 0x28000;
    MEM32(esi + 0x184) = edi;
    ebp = ecx + 0x11A9000;
    MEM32(esi + 0x1C0) = ebp;
    MEM32(esi + 0x188) = eax;
    MEM32(esi + 0x18C) = edx;
    MEM32(esi + 0x194) = edi;
    ebp = ecx + 0x11D1000;
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = edx;
    MEM32(esi + 0x1A4) = edi;
    MEM32(esi + 0x1D0) = ebp;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1AC) = edx;
    MEM32(esi + 0x1B4) = edi;
    ebp = ecx + 0x11F9000;
    MEM32(esi + 0x1B8) = eax;
    MEM32(esi + 0x1BC) = edx;
    MEM32(esi + 0x1C4) = edi;
    MEM32(esi + 0x1C8) = eax;
    MEM32(esi + 0x1CC) = edx;
    MEM32(esi + 0x1D4) = edi;
    MEM32(esi + 0x1E0) = ebp;
    MEM32(esi + 0x1DC) = edx;
    ebp = ecx + 0x1221000;
    MEM32(esi + 0x1F0) = ebp;
    MEM32(esi + 0x1EC) = edx;
    ebp = ecx + 0x1249000;
    MEM32(esi + 0x200) = ebp;
    MEM32(esi + 0x1FC) = edx;
    MEM32(esi + 0x1D8) = eax;
    MEM32(esi + 0x20C) = edx;
    ebp = ecx + 0x1271000;
    MEM32(esi + 0x1E4) = edi;
    MEM32(esi + 0x1E8) = eax;
    MEM32(esi + 0x21C) = edx;
    MEM32(esi + 0x210) = ebp;
    edx = ecx + 0x12C1000;
    MEM32(esi + 0x1F4) = edi;
    MEM32(esi + 0x1F8) = eax;
    ebp = ecx + 0x1299000;
    MEM32(esi + 0x204) = edi;
    MEM32(esi + 0x208) = eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esi + 0x214) = edi;
    MEM32(esi + 0x220) = ebp;
    MEM32(esi + 0x218) = eax;
    edx = esi + 0x228;
    MEM32(esp + 0x14) = 0x12;
    /* nop */

loc_00023550:
    ebp = MEM32(esp + 0x10);
    MEM32(edx + 8) = ebp;
    ebp = ebp + 0x18000;
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x14);
    MEM32(edx + -4) = edi;
    MEM32(edx) = eax;
    MEM32(edx + 4) = 0x18000;
    edx = edx + 0x10;
    ebp--;
    MEM32(esp + 0x14) = ebp;
    if ((ebp != 0)) goto loc_00023550; /* jne: not equal / not zero */

loc_0002357B:
    edx = ecx + 0x1471000;
    MEM32(esi + 0x350) = edx;
    MEM32(esi + 0x344) = edi;
    MEM32(esi + 0x348) = eax;
    MEM32(esi + 0x34C) = 0x176000;
    edx = ecx + 0x15E7000;
    MEM32(esi + 0x360) = edx;
    MEM32(esi + 0x354) = edi;
    MEM32(esi + 0x358) = eax;
    MEM32(esi + 0x35C) = 0x18000;
    ebp = ecx + 0x15FF000;
    edx = esi + 0x368;
    MEM32(esp + 0x14) = 0xC;
    goto loc_000235E0;

loc_000235D5:
    ebp = MEM32(esp + 0x10);
    /* nop */

loc_000235E0:
    MEM32(edx + 8) = ebp;
    ebp = ebp + 0x5A000;
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x14);
    MEM32(edx + -4) = edi;
    MEM32(edx) = eax;
    MEM32(edx + 4) = 0x5A000;
    edx = edx + 0x10;
    ebp--;
    MEM32(esp + 0x14) = ebp;
    if ((ebp != 0)) goto loc_000235D5; /* jne: not equal / not zero */

loc_00023607:
    MEM32(esi + 0x430) = ecx;
    MEM32(esi + 0x42C) = ebx;
    MEM32(esi + 0x424) = edi;
    eax = ecx + 0x9D800;
    MEM32(esi + 0x440) = eax;
    MEM32(esi + 0x43C) = ebx;
    MEM32(esi + 0x434) = edi;
    edx = 2;
    MEM32(esi + 0x428) = edx;
    MEM32(esi + 0x438) = edx;
    eax = ecx + 0x13B000;
    MEM32(esi + 0x450) = eax;
    MEM32(esi + 0x44C) = ebx;
    MEM32(esi + 0x444) = edi;
    MEM32(esi + 0x448) = edx;
    MEM32(esi + 0x45C) = ebx;
    MEM32(esi + 0x454) = edi;
    eax = ecx + 0x1D8800;
    MEM32(esi + 0x460) = eax;
    MEM32(esi + 0x458) = edx;
    MEM32(esi + 0x46C) = ebx;
    MEM32(esi + 0x464) = edi;
    MEM32(esi + 0x468) = edx;
    eax = ecx + 0x276000;
    MEM32(esi + 0x470) = eax;
    MEM32(esi + 0x47C) = ebx;
    MEM32(esi + 0x474) = edi;
    MEM32(esi + 0x478) = edx;
    eax = ecx + 0x313800;
    MEM32(esi + 0x480) = eax;
    eax = ecx + 0x3B1000;
    MEM32(esi + 0x9B8) = eax;
    MEM32(esi + 0x9AC) = edi;
    MEM32(esi + 0x9B0) = edx;
    MEM32(esi + 0x9B4) = 0x80000;
    eax = ecx + 0x431000;
    MEM32(esi + 0x4A0) = eax;
    MEM32(esi + 0x494) = edi;
    MEM32(esi + 0x498) = edx;
    MEM32(esi + 0x49C) = 0xA00000;
    ebx = ecx + 0xE31000;
    eax = esi + 0x4A8;
    ebp = 0x13;
    /* nop */

loc_00023710:
    MEM32(eax + 8) = ebx;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0x28000;
    eax = eax + 0x10;
    ebx = ebx + 0x28000;
    ebp--;
    if ((ebp != 0)) goto loc_00023710; /* jne: not equal / not zero */

loc_0002372B:
    ebx = ecx + 0x1129000;
    eax = esi + 0x5D8;
    ebp = 0x23;
    /* nop */

loc_00023740:
    MEM32(eax + 8) = ebx;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0x18000;
    eax = eax + 0x10;
    ebx = ebx + 0x18000;
    ebp--;
    if ((ebp != 0)) goto loc_00023740; /* jne: not equal / not zero */

loc_0002375B:
    eax = ecx + 0x1471000;
    MEM32(esi + 0x810) = eax;
    MEM32(esi + 0x804) = edi;
    MEM32(esi + 0x808) = edx;
    MEM32(esi + 0x80C) = 0x176000;
    eax = ecx + 0x15E7000;
    MEM32(esi + 0x820) = eax;
    MEM32(esi + 0x814) = edi;
    MEM32(esi + 0x818) = edx;
    MEM32(esi + 0x81C) = 0x18000;
    ecx = ecx + 0x15FF000;
    esi = esi + 0x828;
    eax = 0xC;
    ebx = 0x5A000;

loc_000237B5:
    MEM32(esi + 8) = ecx;
    MEM32(esi + -4) = edi;
    MEM32(esi) = edx;
    MEM32(esi + 4) = ebx;
    esi = esi + 0x10;
    ecx = ecx + ebx;
    eax--;
    if ((eax != 0)) goto loc_000237B5; /* jne: not equal / not zero */

loc_000237C8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
