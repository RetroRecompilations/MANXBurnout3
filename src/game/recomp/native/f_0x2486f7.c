#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002486F7
 * Original: 0x002486F7 - 0x0024871C (37 bytes, 15 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486F7(void)
{
    int _flags = 0; /* fallback flag var */

loc_002486F7:
    if (TEST_Z(MEM8(eax + 0xC), 0x40)) goto loc_00248703; /* je: equal / zero */

loc_002486FD:
    if (CMP_EQ(MEM32(eax + 8), 0)) goto loc_00248719; /* je: equal / zero */

loc_00248703:
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0024B687(); /* call 0x0024B687 */

loc_0024870D:
    /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00248719; /* jne: not equal / not zero */

loc_00248715:
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00248719:
    MEM32(esi) = MEM32(esi) + 1;
    esp += 4; return; /* ret */

}
