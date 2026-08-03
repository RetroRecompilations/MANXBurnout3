#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00030120
 * Original: 0x00030120 - 0x00030150 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030120(void)
{
    int _flags = 0; /* fallback flag var */

loc_00030120:
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0003014F; /* jle: less or equal (signed <=) */

loc_00030130:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_00030134:
    eax = MEM32(ecx + 4);
    edi = MEM32(eax + esi + 0xC);
    eax = eax + esi;
    edi = edi + eax;
    MEM32(eax + 0xC) = edi;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    esi = esi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_00030134; /* jl: less (signed <) */

loc_0003014D:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0003014F:
    esp += 4; return; /* ret */

}
