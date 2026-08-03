#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B3D60
 * Original: 0x001B3D60 - 0x001B3DFE (158 bytes, 61 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3D60:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_001D1470(); /* call 0x001D1470 */

loc_001B3D74:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0); sub_001D1470(); /* call 0x001D1470 */

loc_001B3D80:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B3CA0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0); sub_001D18B0(); /* call 0x001D18B0 */

loc_001B3D92:
    PUSH32(esp, 0xFFFFFFFEu);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0); sub_001D16B2(); /* call 0x001D16B2 */

loc_001B3D9C:
    if (CMP_GE(eax, 2)) goto loc_001B3DA2; /* jge: greater or equal (signed >=) */

loc_001B3DA1:
    eax++;

loc_001B3DA2:
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1660(); /* call 0x001D1660 */

loc_001B3DAC:
    /* cmp ebp, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ebx;
    if (CMP_BE(ebp, ebx)) goto loc_001B3DE7; /* jbe: below or equal (unsigned <=) */

loc_001B3DBA:
    ecx = 0; /* xor self */
    edx = ebp;
    edi = edi;

loc_001B3DC0:
    eax = MEM32(esi + 0x1C);
    eax = eax + ecx;
    ecx = ecx + 0x160;
    edx--;
    MEM32(eax + 0x148) = esi;
    MEM32(eax + 0x30) = 0xFFFFFFFFu;
    MEM32(eax + 0x140) = ebx;
    MEM8(eax + 0x144) = LO8(ebx);
    if ((edx != 0)) goto loc_001B3DC0; /* jne: not equal / not zero */

loc_001B3DE7:
    ecx = MEM32(esp + 0x18);
    eax = ebp;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0); sub_001B3320(); /* call 0x001B3320 */

loc_001B3DF8:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
