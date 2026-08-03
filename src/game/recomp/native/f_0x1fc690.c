#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FC690
 * Original: 0x001FC690 - 0x001FC6C5 (53 bytes, 20 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC690:
    eax = MEM32(esp + 8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001FC6BC; /* je: equal / zero */

loc_001FC699:
    eax--;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_001FC6B1; /* je: equal / zero */

loc_001FC69D:
    eax--;
    if ((eax != 0)) goto loc_001FC6AF; /* jne: not equal / not zero */

loc_001FC6A0:
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x62), 1)) goto loc_001FC6AF; /* je: equal / zero */

loc_001FC6AA:
    PUSH32(esp, 0); sub_001FC130(); /* call 0x001FC130 */

loc_001FC6AF:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FC6B1:
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001FC070(); /* call 0x001FC070 */

loc_001FC6BA:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FC6BC:
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001FC640(); return; /* tail jmp 0x001FC640 */

}
