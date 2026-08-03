#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AED70
 * Original: 0x001AED70 - 0x001AEDAB (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AED70:
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    edx = edx << 5;
    SET_LO8(ebx, MEM8(edx + esi + 0x1E));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001AEDA5; /* je: equal / zero */

loc_001AED85:
    esi = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    /* nop */

loc_001AED90:
    eax++;
    if (CMP_L(eax, esi)) goto loc_001AED97; /* jl: less (signed <) */

loc_001AED95:
    eax = 0; /* xor self */

loc_001AED97:
    edi = eax;
    edi = edi << 5;
    SET_LO8(ebx, MEM8(edi + edx + 0x1E));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001AED90; /* jne: not equal / not zero */

loc_001AEDA4:
    POP32(esp, edi);

loc_001AEDA5:
    POP32(esp, esi);
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
