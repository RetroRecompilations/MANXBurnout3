#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D6063
 * Original: 0x001D6063 - 0x001D6076 (19 bytes, 5 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6063(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6063:
    if (CMP_EQ(MEM8(ebp + -25), 0)) goto loc_001D6075; /* je: equal / zero */

loc_001D6069:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_001D6075:
    esp += 4; return; /* ret */

}
