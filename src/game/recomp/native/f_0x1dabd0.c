#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DABD0
 * Original: 0x001DABD0 - 0x001DABF2 (34 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DABD0:
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(0x41AABC), eax)) goto loc_001DABF1; /* je: equal / zero */

loc_001DABDC:
    PUSH32(esp, eax);
    MEM32(0x41AABC) = eax;
    PUSH32(esp, 0); sub_0034E790(); /* call 0x0034E790 */

loc_001DABE7:
    eax = MEM32(0x35FD78);
    MEM32(0x75D6C0) = eax;

loc_001DABF1:
    esp += 4; return; /* ret */

}
