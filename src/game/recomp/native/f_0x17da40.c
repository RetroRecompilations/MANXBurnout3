#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DA40
 * Original: 0x0017DA40 - 0x0017DAAD (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DA40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017DA40:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x4AF));
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0017DA6C; /* jle: less or equal (signed <=) */

loc_0017DA4F:
    edx = eax + 0x18;

loc_0017DA52:
    if (CMP_EQ(MEM32(edx), edi)) goto loc_0017DA67; /* je: equal / zero */

loc_0017DA56:
    ebx = ZX8(MEM8(eax + 0x4AF));
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, ebx)) goto loc_0017DA52; /* jl: less (signed <) */

loc_0017DA65:
    goto loc_0017DA6C;

loc_0017DA67:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0017DAA8; /* jne: not equal / not zero */

loc_0017DA6C:
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esi + eax + 0x4B0) = LO8(ecx);
    edx = ZX8(MEM8(eax + 0x4AF));
    ecx = MEM32(esp + 0xC);
    MEM32(eax + edx * 4 + 0x18) = edi;
    edx = ZX8(MEM8(ecx + 0x176));
    ecx = ZX8(MEM8(eax + 0x4AF));
    edx = MEM32(edx * 4 + 0x647C00);
    MEM32(eax + ecx * 4 + 0x120) = edx;
    MEM8(eax + 0x4AF) = MEM8(eax + 0x4AF) + 1;

loc_0017DAA8:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
