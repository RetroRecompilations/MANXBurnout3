#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9EE0
 * Original: 0x001F9EE0 - 0x001F9F08 (40 bytes, 18 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F9EE0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x18));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_NZ(LO8(eax), 2)) goto loc_001F9EFF; /* jne: not equal / not zero */

loc_001F9EEF:
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, edi)) goto loc_001F9EFF; /* je: equal / zero */

loc_001F9EF6:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F9EFC:
    esp = esp + 4;

loc_001F9EFF:
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
