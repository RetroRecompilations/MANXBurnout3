#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5680
 * Original: 0x001A5680 - 0x001A578F (271 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5680(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A5680:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x9C) = eax;
    MEM32(edi + 0xA0) = eax;
    MEM32(edi + 0xA4) = eax;
    MEM32(edi + 0xA8) = eax;
    MEM32(edi + 0xAC) = eax;
    MEM32(edi + 0xB0) = eax;
    MEM32(edi + 0xB4) = eax;
    MEM32(edi + 0xB8) = eax;
    MEM32(edi + 0xBC) = eax;
    MEM32(edi + 0xC0) = eax;
    MEM32(edi + 0xC4) = eax;
    MEM32(edi + 0xC8) = eax;
    MEM32(edi + 0xCC) = eax;
    MEM32(edi + 0xD0) = eax;
    MEM32(edi + 0xD4) = eax;
    MEM32(edi + 0xD8) = eax;
    MEM32(edi + 0xDC) = eax;
    MEM32(edi + 0xE0) = eax;
    MEM32(edi + 0xE4) = eax;
    MEM32(edi + 0xE8) = eax;
    MEM32(edi + 0xEC) = eax;
    MEM32(edi + 0xF0) = eax;
    MEM32(edi + 0xF4) = eax;
    MEM32(edi + 0xF8) = eax;
    MEM32(edi + 0xFC) = eax;
    MEM32(edi + 0x100) = eax;
    MEM32(edi + 0x104) = eax;
    MEM32(edi + 0x108) = eax;
    MEM32(edi + 0x40) = edx;
    SET_LO8(eax, MEM8(edx + 0xC));
    ebx = 0; /* xor self */
    if (TEST_NZ(LO8(eax), 3)) goto loc_001A573E; /* jne: not equal / not zero */

loc_001A573A:
    eax = 0; /* xor self */
    goto loc_001A5743;

loc_001A573E:
    eax = 1;

loc_001A5743:
    MEM8(edi + 0x114) = LO8(eax);
    ecx = 0; /* xor self */
    eax = edi + 0x94;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    if (CMP_LE(MEM32(edx + 8), ebx)) goto loc_001A577B; /* jle: less or equal (signed <=) */

loc_001A575B:
    eax = edi + 0x50;
    PUSH32(esp, esi);
    /* nop */

loc_001A5760:
    MEM32(eax + -8) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(edi + ecx + 0x10C) = LO8(ebx);
    esi = MEM32(edx + 8);
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, esi)) goto loc_001A5760; /* jl: less (signed <) */

loc_001A577A:
    POP32(esp, esi);

loc_001A577B:
    if (CMP_NE(MEM8(0x649B98), LO8(ebx))) goto loc_001A578A; /* jne: not equal / not zero */

loc_001A5783:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001A5790(); /* call 0x001A5790 */

loc_001A578A:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
