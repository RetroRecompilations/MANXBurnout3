#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE140
 * Original: 0x001FE140 - 0x001FE16B (43 bytes, 21 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE140(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE140:
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_001FE15E; /* je: equal / zero */

loc_001FE152:
    eax = MEM32(eax + 4);
    ecx++;
    if (CMP_EQ(eax, edx)) goto loc_001FE167; /* je: equal / zero */

loc_001FE15A:
    if (CMP_NE(ecx, esi)) goto loc_001FE152; /* jne: not equal / not zero */

loc_001FE15E:
    if (TEST_Z(eax, eax)) goto loc_001FE167; /* je: equal / zero */

loc_001FE162:
    eax = MEM32(eax + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FE167:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
