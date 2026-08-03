#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF7B7
 * Original: 0x001CF7B7 - 0x001CF7E1 (42 bytes, 14 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF7B7(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CF7B7:
    /* cmp MEM32(esp + 8), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_001CF7D0; /* je: equal / zero */

loc_001CF7C3:
    PUSH32(esp, MEM32(esp + 0xC));
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D701E(); /* call 0x001D701E */

loc_001CF7D0:
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_001CF7DB:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
