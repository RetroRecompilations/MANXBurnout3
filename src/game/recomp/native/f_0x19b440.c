#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019B440
 * Original: 0x0019B440 - 0x0019B49A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B440(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019B440:
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x10));
    if (CMP_LE(LO16(esi) & LO16(esi), 0)) goto loc_0019B498; /* jle: less or equal (signed <=) */

loc_0019B44A:
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    edx = edx & 0x70000;
    eax = eax + ecx;
    if (CMP_EQ(edx, 0x20000)) goto loc_0019B464; /* je: equal / zero */

loc_0019B45F:
    eax = eax & 0xFFFFFFF;

loc_0019B464:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + ecx;
    edx = 0; /* xor self */
    /* test LO16(esi), LO16(esi) - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (CMP_LE(LO16(esi) & LO16(esi), 0)) goto loc_0019B498; /* jle: less or equal (signed <=) */

loc_0019B471:
    esi = 0; /* xor self */
    PUSH32(esp, edi);

loc_0019B474:
    eax = MEM32(ecx + 0xC);
    edi = MEM32(eax + esi + 0x88);
    eax = eax + esi;
    edi = edi + eax;
    MEM32(eax + 0x88) = edi;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    edx++;
    esi = esi + 0x90;
    if (CMP_L(edx, eax)) goto loc_0019B474; /* jl: less (signed <) */

loc_0019B497:
    POP32(esp, edi);

loc_0019B498:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
