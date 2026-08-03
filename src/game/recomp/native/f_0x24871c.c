#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024871C
 * Original: 0x0024871C - 0x00248741 (37 bytes, 17 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024871C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024871C:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_00248738;

loc_00248724:
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    PUSH32(esp, 0); sub_002486F7(); /* call 0x002486F7 */

loc_00248732:
    /* cmp MEM32(esi), 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_0024873E; /* je: equal / zero */

loc_00248738:
    if (CMP_G(MEM32(ebp + 0xC), 0)) goto loc_00248724; /* jg: greater (signed >) */

loc_0024873E:
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
