#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FB100
 * Original: 0x001FB100 - 0x001FB13E (62 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB100:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_001FB126; /* je: equal / zero */

loc_001FB108:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x28;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FC690(); /* call 0x001FC690 */

loc_001FB118:
    ecx = MEM32(0x41B880);
    esp = esp + 8;
    MEM32(esi + 0x74) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FB126:
    edx = MEM32(esp + 4);
    edx = edx + 0x28;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_001FC690(); return; /* tail jmp 0x001FC690 */

}
