#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F8720
 * Original: 0x001F8720 - 0x001F8746 (38 bytes, 18 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8720(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F8720:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = eax + 0x10;
    /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, esi)) goto loc_001F8741; /* je: equal / zero */

loc_001F8730:
    edi = MEM32(esp + 0x10);

loc_001F8734:
    edx = ecx + -24;
    /* cmp edx, edi - flags set for next jcc */
    ecx = MEM32(ecx);
    if (CMP_EQ(edx, edi)) goto loc_001F8743; /* je: equal / zero */

loc_001F873D:
    if (CMP_NE(ecx, esi)) goto loc_001F8734; /* jne: not equal / not zero */

loc_001F8741:
    eax = 0; /* xor self */

loc_001F8743:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
