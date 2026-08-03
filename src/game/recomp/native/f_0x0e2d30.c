#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000E2D30
 * Original: 0x000E2D30 - 0x000E2D79 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E2D30:
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0xB) = 0;
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    edx = MEM32(0x557A58);
    PUSH32(esp, esi);
    MEM32(0x557A54) = MEM32(0x557A54) + 2;
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    SET_LO8(edx, MEM8(eax + 0x58));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_000E2D77; /* jle: less or equal (signed <=) */

loc_000E2D62:
    edx = eax + 0x14;

loc_000E2D65:
    MEM32(edx) = 0;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x58);
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, esi)) goto loc_000E2D65; /* jl: less (signed <) */

loc_000E2D77:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
