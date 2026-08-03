#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001552E0
 * Original: 0x001552E0 - 0x00155328 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001552E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001552E0:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x5E0);
    if (TEST_Z(esi, esi)) goto loc_0015531C; /* je: equal / zero */

loc_001552F0:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001CEA80(); /* call 0x001CEA80 */

loc_001552F6:
    eax = MEM32(ebp + 0x5E0);
    PUSH32(esp, 0); sub_001CE920(); /* call 0x001CE920 */

loc_00155301:
    edi = MEM32(ebp + 0x5E0);
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE180(); /* call 0x001CE180 */

loc_00155311:
    MEM32(ebp + 0x5E0) = 0;
    POP32(esp, edi);

loc_0015531C:
    POP32(esp, esi);
    MEM8(ebp + 0x56C) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
