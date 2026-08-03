#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DABA0
 * Original: 0x001DABA0 - 0x001DABB8 (24 bytes, 7 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DABA0:
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(0x41AAB8), eax)) goto loc_001DABB7; /* je: equal / zero */

loc_001DABAC:
    PUSH32(esp, eax);
    MEM32(0x41AAB8) = eax;
    PUSH32(esp, 0); sub_0034F6D0(); /* call 0x0034F6D0 */

loc_001DABB7:
    esp += 4; return; /* ret */

}
