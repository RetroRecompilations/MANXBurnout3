#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE110
 * Original: 0x001FE110 - 0x001FE134 (36 bytes, 16 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE110(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE110:
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_001FE12F; /* je: equal / zero */

loc_001FE11E:
    esi = MEM32(esp + 0xC);

loc_001FE122:
    if (CMP_EQ(MEM32(ecx + 8), esi)) goto loc_001FE132; /* je: equal / zero */

loc_001FE127:
    ecx = MEM32(ecx + 4);
    eax++;
    if (CMP_NE(ecx, edx)) goto loc_001FE122; /* jne: not equal / not zero */

loc_001FE12F:
    eax = eax | 0xFFFFFFFFu;

loc_001FE132:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
