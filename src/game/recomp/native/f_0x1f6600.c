#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6600
 * Original: 0x001F6600 - 0x001F662E (46 bytes, 17 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6600(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6600:
    PUSH32(esp, esi);
    esi = MEM32(0x764168);
    if (CMP_EQ(esi, 0x764168)) goto loc_001F662C; /* je: equal / zero */

loc_001F660F:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_001F6614:
    eax = esi + -16;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE220(); /* call 0x001FE220 */

loc_001F661E:
    esi = MEM32(esi);
    esp = esp + 8;
    if (CMP_NE(esi, 0x764168)) goto loc_001F6614; /* jne: not equal / not zero */

loc_001F662B:
    POP32(esp, edi);

loc_001F662C:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
