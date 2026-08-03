#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000D7F00
 * Original: 0x000D7F00 - 0x000D80D2 (466 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7F00:
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 0x15;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0x188) = ecx;
    MEM32(eax + 0x228) = ecx;
    MEM32(eax + 0x214) = ecx;
    MEM32(eax + 0x218) = ecx;
    MEM32(eax + 0x17C) = ecx;
    MEM32(eax + 0x180) = ecx;
    MEM32(eax + 0x164) = ecx;
    MEM32(eax + 0x168) = ecx;
    MEM32(eax + 0x16C) = ecx;
    MEM32(eax + 0x170) = ecx;
    MEM32(eax + 0x174) = ecx;
    MEM32(eax + 0x178) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    edx = 0; /* xor self */
    MEM32(eax + 0x18C) = edx;
    MEM32(eax + 0x190) = edx;
    MEM32(eax + 0x194) = edx;
    MEM32(eax + 0x198) = edx;
    MEM32(eax + 0x19C) = edx;
    MEM32(eax + 0x1A0) = edx;
    MEM32(eax + 0x1A4) = edx;
    MEM32(eax + 0x1A8) = edx;
    MEM32(eax + 0x1AC) = edx;
    MEM32(eax + 0x1B0) = edx;
    MEM32(eax + 0x1B4) = edx;
    MEM32(eax + 0x1B8) = edx;
    MEM32(eax + 0x1BC) = ecx;
    MEM32(eax + 0x24C) = ecx;
    MEM32(eax + 0x230) = ecx;
    MEM32(eax + 0x234) = ecx;
    MEM32(eax + 0x238) = ecx;
    MEM32(eax + 0x23C) = ecx;
    MEM32(eax + 0x240) = ecx;
    MEM32(eax + 0x244) = ecx;
    MEM32(eax + 0x248) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    edx = eax + 0xA4;
    esi = 0xC;
    /* nop */

loc_000D8030:
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    edx = edx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_000D8030; /* jne: not equal / not zero */

loc_000D803B:
    edx = 0; /* xor self */
    MEM32(eax + 0x1C0) = edx;
    MEM32(eax + 0x1C4) = edx;
    MEM32(eax + 0x1C8) = edx;
    MEM32(eax + 0x1CC) = edx;
    MEM32(eax + 0x1D0) = edx;
    MEM32(eax + 0x1D4) = edx;
    MEM32(eax + 0x1D8) = edx;
    MEM32(eax + 0x1DC) = edx;
    MEM32(eax + 0x1E0) = edx;
    MEM32(eax + 0x1E4) = edx;
    MEM32(eax + 0x1E8) = edx;
    MEM32(eax + 0x1EC) = edx;
    MEM32(eax + 0x1F0) = ecx;
    MEM32(eax + 0x1F4) = ecx;
    MEM32(eax + 0x1F8) = ecx;
    MEM32(eax + 0x1FC) = ecx;
    MEM32(eax + 0x200) = ecx;
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 0x268) = edx;
    MEM32(eax + 0x26C) = edx;
    MEM32(eax + 0x270) = edx;
    MEM8(eax + 0x274) = LO8(ecx);
    MEM8(eax + 0x275) = LO8(ecx);
    MEM8(eax + 0x276) = LO8(ecx);
    MEM32(eax + 0x300) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
