#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002264E0
 * Original: 0x002264E0 - 0x002264F8 (24 bytes, 7 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002264E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002264E0:
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_002264F7; /* je: equal / zero */

loc_002264E9:
    eax = eax + 0x10A;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00226AD0(); return; /* tail jmp 0x00226AD0 */

loc_002264F7:
    esp += 4; return; /* ret */

}
