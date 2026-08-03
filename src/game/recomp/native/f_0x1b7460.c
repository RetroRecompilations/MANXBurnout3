#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7460
 * Original: 0x001B7460 - 0x001B79BC (1372 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7460:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    /* cmp esi, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_LE(esi, edx)) goto loc_001B748A; /* jle: less or equal (signed <=) */

loc_001B746F:
    ecx = edi + 8;

loc_001B7472:
    ebp = MEM32(ebx + eax * 4);
    MEM32(ecx + 0x24) = ebp;
    MEM32(ecx) = edx;
    MEM32(ecx + 0x48) = edx;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, esi)) goto loc_001B7472; /* jl: less (signed <) */

loc_001B7485:
    if (CMP_GE(eax, 8)) goto loc_001B74A3; /* jge: greater or equal (signed >=) */

loc_001B748A:
    ebx = 8;
    ecx = edi + eax * 4 + 8;
    ebx = ebx - eax;

loc_001B7495:
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx) = edx;
    MEM32(ecx + 0x48) = edx;
    ecx = ecx + 4;
    ebx--;
    if ((ebx != 0)) goto loc_001B7495; /* jne: not equal / not zero */

loc_001B74A3:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x84) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x74) = esi;
    MEM32(edi + 0x4C) = esi;
    MEM32(edi + 0x98) = ecx;
    MEM32(edi + 0x9C) = eax;
    MEM32(edi + 0x28) = edx;
    MEM32(edi + 0x70) = edx;
    MEM32(edi + 0x7C) = edx;
    MEM32(edi + 0x94) = edx;
    MEM32(edi + 0x320) = edx;
    esi = 2;
    eax = edi + 0xA8;
    ecx = ecx | 0xFFFFFFFFu;
    /* nop */

loc_001B74F0:
    ebx = MEM32(edi + 0x98);
    ebp = esi + -2;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(edi + 0x84));
    ebp = ebp + ebx;
    MEM32(eax + 4) = ebp;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = edx;
    MEM32(eax) = ecx;
    MEM8(eax + 8) = 1;
    ebx = MEM32(edi + 0x98);
    ebp = esi + -1;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(edi + 0x84));
    ebp = ebp + ebx;
    MEM32(eax + 0x18) = ebp;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x1C) = 1;
    ebp = MEM32(edi + 0x84);
    ebx = MEM32(edi + 0x98);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)esi);
    ebp = ebp + ebx;
    MEM32(eax + 0x2C) = ebp;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x30) = 1;
    ebx = MEM32(edi + 0x98);
    ebp = esi + 1;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(edi + 0x84));
    ebp = ebp + ebx;
    esi = esi + 4;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ebp;
    MEM8(eax + 0x44) = 1;
    ebx = esi + -2;
    eax = eax + 0x50;
    if (CMP_L(ebx, 0x20)) goto loc_001B74F0; /* jl: less (signed <) */

loc_001B7588:
    MEM8(edi + 0x3A0) = LO8(edx);
    MEM32(edi + 0x3A4) = ecx;
    MEM32(edi + 0x3A8) = ecx;
    MEM8(edi + 0x3A3) = LO8(ecx);
    MEM8(edi + 0x3A2) = LO8(edx);
    MEM8(edi + 0x3B0) = LO8(edx);
    MEM32(edi + 0x3B4) = ecx;
    MEM32(edi + 0x3B8) = ecx;
    MEM8(edi + 0x3B3) = LO8(ecx);
    MEM8(edi + 0x3B2) = LO8(edx);
    MEM8(edi + 0x3C0) = LO8(edx);
    MEM32(edi + 0x3C4) = ecx;
    MEM32(edi + 0x3C8) = ecx;
    MEM8(edi + 0x3C3) = LO8(ecx);
    MEM8(edi + 0x3C2) = LO8(edx);
    SET_LO8(ebx, 0xFF);
    MEM8(edi + 0x3A1) = LO8(ebx);
    MEM8(edi + 0x3B1) = LO8(ebx);
    MEM8(edi + 0x3C1) = LO8(ebx);
    eax = 0xFFFF;
    MEM16(edi + 0x3AC) = LO16(eax);
    MEM16(edi + 0x3BC) = LO16(eax);
    MEM16(edi + 0x3CC) = LO16(eax);
    MEM8(edi + 0x3D0) = LO8(edx);
    MEM32(edi + 0x3D4) = ecx;
    MEM32(edi + 0x3D8) = ecx;
    MEM8(edi + 0x3D1) = LO8(ebx);
    MEM16(edi + 0x3DC) = LO16(eax);
    MEM8(edi + 0x3D3) = LO8(ecx);
    MEM8(edi + 0x3D2) = LO8(edx);
    MEM8(edi + 0x3E0) = LO8(edx);
    MEM32(edi + 0x3E4) = ecx;
    MEM32(edi + 0x3E8) = ecx;
    MEM8(edi + 0x3E1) = LO8(ebx);
    MEM16(edi + 0x3EC) = LO16(eax);
    MEM8(edi + 0x3E3) = LO8(ecx);
    MEM8(edi + 0x3E2) = LO8(edx);
    MEM8(edi + 0x3F0) = LO8(edx);
    MEM32(edi + 0x3F4) = ecx;
    MEM32(edi + 0x3F8) = ecx;
    MEM8(edi + 0x3F1) = LO8(ebx);
    MEM16(edi + 0x3FC) = LO16(eax);
    MEM8(edi + 0x3F3) = LO8(ecx);
    MEM8(edi + 0x3F2) = LO8(edx);
    MEM8(edi + 0x400) = LO8(edx);
    MEM32(edi + 0x404) = ecx;
    MEM32(edi + 0x408) = ecx;
    MEM8(edi + 0x401) = LO8(ebx);
    MEM16(edi + 0x40C) = LO16(eax);
    MEM8(edi + 0x403) = LO8(ecx);
    MEM8(edi + 0x402) = LO8(edx);
    MEM8(edi + 0x410) = LO8(edx);
    MEM32(edi + 0x414) = ecx;
    MEM32(edi + 0x418) = ecx;
    MEM8(edi + 0x411) = LO8(ebx);
    MEM16(edi + 0x41C) = LO16(eax);
    MEM8(edi + 0x413) = LO8(ecx);
    MEM8(edi + 0x412) = LO8(edx);
    MEM8(edi + 0x420) = LO8(edx);
    MEM32(edi + 0x424) = ecx;
    MEM32(edi + 0x428) = ecx;
    MEM8(edi + 0x421) = LO8(ebx);
    MEM16(edi + 0x42C) = LO16(eax);
    MEM8(edi + 0x423) = LO8(ecx);
    MEM8(edi + 0x422) = LO8(edx);
    MEM8(edi + 0x430) = LO8(edx);
    MEM32(edi + 0x434) = ecx;
    MEM32(edi + 0x438) = ecx;
    MEM8(edi + 0x431) = LO8(ebx);
    MEM16(edi + 0x43C) = LO16(eax);
    MEM8(edi + 0x433) = LO8(ecx);
    MEM8(edi + 0x432) = LO8(edx);
    MEM8(edi + 0x440) = LO8(edx);
    MEM32(edi + 0x444) = ecx;
    MEM32(edi + 0x448) = ecx;
    MEM8(edi + 0x441) = LO8(ebx);
    MEM16(edi + 0x44C) = LO16(eax);
    MEM8(edi + 0x443) = LO8(ecx);
    MEM8(edi + 0x442) = LO8(edx);
    MEM8(edi + 0x450) = LO8(edx);
    MEM32(edi + 0x454) = ecx;
    MEM32(edi + 0x458) = ecx;
    MEM8(edi + 0x451) = LO8(ebx);
    MEM16(edi + 0x45C) = LO16(eax);
    MEM8(edi + 0x453) = LO8(ecx);
    MEM8(edi + 0x452) = LO8(edx);
    MEM8(edi + 0x460) = LO8(edx);
    MEM32(edi + 0x464) = ecx;
    MEM32(edi + 0x468) = ecx;
    MEM8(edi + 0x461) = LO8(ebx);
    MEM16(edi + 0x46C) = LO16(eax);
    MEM8(edi + 0x463) = LO8(ecx);
    MEM8(edi + 0x462) = LO8(edx);
    MEM8(edi + 0x470) = LO8(edx);
    MEM32(edi + 0x474) = ecx;
    MEM32(edi + 0x478) = ecx;
    MEM8(edi + 0x471) = LO8(ebx);
    MEM16(edi + 0x47C) = LO16(eax);
    MEM8(edi + 0x473) = LO8(ecx);
    MEM8(edi + 0x472) = LO8(edx);
    MEM8(edi + 0x480) = LO8(edx);
    MEM32(edi + 0x484) = ecx;
    MEM32(edi + 0x488) = ecx;
    MEM8(edi + 0x481) = LO8(ebx);
    MEM16(edi + 0x48C) = LO16(eax);
    MEM8(edi + 0x483) = LO8(ecx);
    MEM8(edi + 0x482) = LO8(edx);
    MEM8(edi + 0x490) = LO8(edx);
    MEM32(edi + 0x494) = ecx;
    MEM32(edi + 0x498) = ecx;
    MEM8(edi + 0x491) = LO8(ebx);
    MEM16(edi + 0x49C) = LO16(eax);
    MEM8(edi + 0x493) = LO8(ecx);
    MEM8(edi + 0x492) = LO8(edx);
    MEM8(edi + 0x4A0) = LO8(edx);
    MEM32(edi + 0x4A4) = ecx;
    MEM32(edi + 0x4A8) = ecx;
    MEM8(edi + 0x4A1) = LO8(ebx);
    MEM16(edi + 0x4AC) = LO16(eax);
    MEM8(edi + 0x4A3) = LO8(ecx);
    MEM8(edi + 0x4A2) = LO8(edx);
    MEM8(edi + 0x4B0) = LO8(edx);
    MEM32(edi + 0x4B4) = ecx;
    MEM32(edi + 0x4B8) = ecx;
    MEM8(edi + 0x4B1) = LO8(ebx);
    MEM16(edi + 0x4BC) = LO16(eax);
    MEM8(edi + 0x4B3) = LO8(ecx);
    MEM8(edi + 0x4B2) = LO8(edx);
    MEM8(edi + 0x4C0) = LO8(edx);
    MEM32(edi + 0x4C4) = ecx;
    MEM32(edi + 0x4C8) = ecx;
    MEM8(edi + 0x4C1) = LO8(ebx);
    MEM16(edi + 0x4CC) = LO16(eax);
    MEM8(edi + 0x4C3) = LO8(ecx);
    MEM8(edi + 0x4C2) = LO8(edx);
    MEM8(edi + 0x4D0) = LO8(edx);
    MEM32(edi + 0x4D4) = ecx;
    MEM32(edi + 0x4D8) = ecx;
    MEM8(edi + 0x4D1) = LO8(ebx);
    MEM16(edi + 0x4DC) = LO16(eax);
    MEM8(edi + 0x4D3) = LO8(ecx);
    MEM8(edi + 0x4D2) = LO8(edx);
    MEM32(edi + 0x324) = ecx;
    MEM32(edi + 0x328) = ecx;
    MEM32(edi + 0x32C) = ecx;
    MEM32(edi + 0x330) = ecx;
    MEM32(edi + 0x334) = ecx;
    MEM32(edi + 0x338) = ecx;
    MEM32(edi + 0x33C) = ecx;
    MEM32(edi + 0x340) = ecx;
    MEM32(edi + 0x344) = ecx;
    MEM32(edi + 0x348) = ecx;
    MEM32(edi + 0x34C) = ecx;
    MEM32(edi + 0x350) = ecx;
    MEM32(edi + 0x354) = ecx;
    MEM32(edi + 0x358) = ecx;
    MEM32(edi + 0x35C) = ecx;
    MEM32(edi + 0x360) = ecx;
    MEM32(edi + 0x364) = ecx;
    MEM32(edi + 0x368) = ecx;
    MEM32(edi + 0x36C) = ecx;
    MEM32(edi + 0x370) = ecx;
    MEM32(edi + 0x374) = ecx;
    MEM32(edi + 0x378) = ecx;
    MEM32(edi + 0x37C) = ecx;
    MEM32(edi + 0x380) = ecx;
    MEM32(edi + 0x384) = ecx;
    MEM32(edi + 0x388) = ecx;
    MEM32(edi + 0x38C) = ecx;
    MEM32(edi + 0x390) = ecx;
    MEM32(edi + 0x394) = ecx;
    MEM32(edi + 0x398) = ecx;
    esi = edi + 0x4E0;
    MEM32(edi + 0x39C) = edx;
    PUSH32(esp, 0); sub_001B6900(); /* call 0x001B6900 */

loc_001B79B0:
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
