#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001596B0
 * Original: 0x001596B0 - 0x0015970B (91 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001596B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001596B0:
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ecx = ecx + edi;
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(ebx) = ecx;
    MEM32(esp + 4) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_00159708; /* jle: less or equal (signed <=) */

loc_001596C5:
    PUSH32(esp, esi);

loc_001596C6:
    ecx = MEM32(ebx);
    edx = MEM32(ecx + ebp + 0x10);
    eax = MEM32(ecx + ebp + 0x14);
    ecx = ecx + ebp;
    edx = edx + edi;
    MEM32(ecx + 0x10) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001596F4; /* jle: less or equal (signed <=) */

loc_001596DD:
    esi = 0; /* xor self */
    /* nop */

loc_001596E0:
    eax = MEM32(ecx + 0x10);
    MEM32(eax + esi + 0x34) = MEM32(eax + esi + 0x34) + edi;
    eax = eax + esi;
    eax = MEM32(ecx + 0x14);
    edx++;
    esi = esi + 0x40;
    if (CMP_L(edx, eax)) goto loc_001596E0; /* jl: less (signed <) */

loc_001596F4:
    eax = MEM32(esp + 8);
    ecx = MEM32(ebx + 4);
    eax++;
    ebp = ebp + 0x18;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_L(eax, ecx)) goto loc_001596C6; /* jl: less (signed <) */

loc_00159707:
    POP32(esp, esi);

loc_00159708:
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
