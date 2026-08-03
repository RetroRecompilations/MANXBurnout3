#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158CC0
 * Original: 0x00158CC0 - 0x00158D01 (65 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158CC0:
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    PUSH32(esp, edi);
    MEM32(ecx) = MEM32(ecx) + edx;
    esi = esi + edx;
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = esi;
    if (CMP_LE(eax & eax, 0)) goto loc_00158CFE; /* jle: less or equal (signed <=) */

loc_00158CD5:
    esi = 0; /* xor self */
    PUSH32(esp, ebx);

loc_00158CD8:
    eax = MEM32(ecx);
    ebx = MEM32(eax + esi);
    eax = eax + esi;
    ebx = ebx + edx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = MEM32(eax + 4) + edx;
    MEM32(eax + 8) = MEM32(eax + 8) + edx;
    eax = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    MEM32(esi + eax + 0xC) = ebx;
    eax = MEM32(ecx + 8);
    edi++;
    esi = esi + 0x14;
    if (CMP_L(edi, eax)) goto loc_00158CD8; /* jl: less (signed <) */

loc_00158CFD:
    POP32(esp, ebx);

loc_00158CFE:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
