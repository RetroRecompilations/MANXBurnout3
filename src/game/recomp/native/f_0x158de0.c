#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158DE0
 * Original: 0x00158DE0 - 0x00158E30 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158DE0:
    edx = MEM32(ecx + 0x14);
    eax = MEM32(ecx + 0x18);
    edx = edx + ecx;
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(ecx + 0x20);
    eax = eax + ecx;
    edx = edx + ecx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ecx + 4);
    esi = esi + ecx;
    MEM32(ecx + 0x20) = edx;
    edx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x1C) = esi;
    if (CMP_LE(eax & eax, 0)) goto loc_00158E2E; /* jle: less or equal (signed <=) */

loc_00158E0A:
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    /* nop */

loc_00158E10:
    eax = MEM32(ecx + 0x14);
    edi = MEM32(eax + esi);
    eax = eax + esi;
    edi = edi + eax;
    MEM32(eax) = edi;
    MEM32(eax + 4) = MEM32(eax + 4) + eax;
    MEM32(eax + 8) = MEM32(eax + 8) + eax;
    eax = MEM32(ecx + 4);
    edx++;
    esi = esi + 0x10;
    if (CMP_L(edx, eax)) goto loc_00158E10; /* jl: less (signed <) */

loc_00158E2D:
    POP32(esp, edi);

loc_00158E2E:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
