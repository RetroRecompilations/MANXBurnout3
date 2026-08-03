#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BEEF0
 * Original: 0x001BEEF0 - 0x001BEF22 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEEF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BEEF0:
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    edx = edx + eax;
    MEM32(eax + 0xC) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001BEF21; /* jle: less or equal (signed <=) */

loc_001BEF01:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_001BEF05:
    ecx = MEM32(eax + 0xC);
    edi = MEM32(esi + ecx + 8);
    ecx = esi + ecx + 8;
    edi = edi + eax;
    MEM32(ecx) = edi;
    ecx = MEM32(eax + 8);
    edx++;
    esi = esi + 0x10;
    if (CMP_L(edx, ecx)) goto loc_001BEF05; /* jl: less (signed <) */

loc_001BEF1F:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001BEF21:
    esp += 4; return; /* ret */

}
