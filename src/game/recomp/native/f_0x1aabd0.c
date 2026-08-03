#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AABD0
 * Original: 0x001AABD0 - 0x001AACAA (218 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AABD0:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(0x479530) = ebx;
    MEM32(0x479548) = ebx;
    MEM32(0x479534) = ebx;
    MEM32(0x47954C) = ebx;
    MEM32(0x479538) = ebx;
    MEM32(0x479550) = ebx;
    MEM32(0x47953C) = ebx;
    MEM32(0x479554) = ebx;
    MEM32(0x479540) = ebx;
    MEM32(0x479558) = ebx;
    MEM32(0x479544) = ebx;
    MEM32(0x47955C) = ebx;
    MEM8(esi + 0x126B49) = LO8(ebx);
    MEM8(esi + 0x126B4A) = LO8(ebx);
    MEM32(esi + 0x126B3C) = 9;
    MEM32(esi + 0x126B40) = 3;
    MEM8(esi + 0x126B4B) = LO8(ebx);
    eax = MEM32(0x4A1D04);
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0x19;
    MEM32(0x3F9D24) = 2;
    MEM32(0x60E180) = edi;
    if (CMP_EQ(eax, ebx)) goto loc_001AAC66; /* je: equal / zero */

loc_001AAC60:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034C8A0(); /* call 0x0034C8A0 */

loc_001AAC66:
    eax = MEM32(0x4A1D08);
    if (CMP_EQ(eax, ebx)) goto loc_001AAC75; /* je: equal / zero */

loc_001AAC6F:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034C8A0(); /* call 0x0034C8A0 */

loc_001AAC75:
    eax = MEM32(esi + 0x12B790);
    eax = eax | MEM32(esi + 0x12B794);
    MEM8(esi + 0x129D59) = LO8(ebx);
    MEM8(esi + 0x12ADA9) = LO8(ebx);
    MEM32(esi + 0x12ADB8) = edi;
    if ((eax == 0)) goto loc_001AACA7; /* je: equal / zero */

loc_001AAC95:
    MEM32(esi + 0x12ADD8) = edi;
    MEM32(esi + 0x12AFA4) = edi;
    MEM32(esi + 0x12B250) = edi;

loc_001AACA7:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
