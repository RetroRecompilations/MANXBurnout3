#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000D3EA0
 * Original: 0x000D3EA0 - 0x000D3F25 (133 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EA0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000D3EA0:
    edx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(edx);
    MEM8(eax + 0xB) = LO8(edx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 1;
    ecx = MEM32(0x557A58);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    MEM32(0x557A58) = eax;
    esi = 0; /* xor self */
    /* nop */

loc_000D3ED0:
    MEM32(eax + ecx * 4 + 0x1C) = edx;
    MEM32(eax + ecx * 4 + 0x48) = edx;
    ecx = ecx + 1;
    esi = esi + edx + _cf; /* adc */
    if ((esi != 0)) goto loc_000D3EE4; /* jne: not equal / not zero */

loc_000D3EDF:
    if (CMP_B(ecx, 0xB)) goto loc_000D3ED0; /* jb: below (unsigned <) */

loc_000D3EE4:
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x88) = edx;
    MEM32(eax + 0x78) = edx;
    MEM32(eax + 0x8C) = edx;
    MEM32(eax + 0x7C) = edx;
    MEM32(eax + 0x90) = edx;
    MEM32(eax + 0x80) = edx;
    MEM32(eax + 0x94) = edx;
    MEM32(eax + 0x84) = edx;
    MEM32(eax + 0x98) = edx;
    MEM32(eax + 0x9C) = edx;
    MEM32(eax + 0xA0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
