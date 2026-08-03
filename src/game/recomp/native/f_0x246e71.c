#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246E71
 * Original: 0x00246E71 - 0x00246E7F (14 bytes, 6 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E71:
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_00246E7E; /* je: equal / zero */

loc_00246E76:
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_00246E7D:
    POP32(esp, ecx);

loc_00246E7E:
    esp += 4; return; /* ret */

}
