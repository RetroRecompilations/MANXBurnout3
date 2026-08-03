#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0DE6
 * Original: 0x001D0DE6 - 0x001D0E3C (86 bytes, 28 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DE6(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D0DE6:
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    /* cmp edx, 0x434F4E54 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(edx, 0x434F4E54)) goto loc_001D0E24; /* je: equal / zero */

loc_001D0DF7:
    if (CMP_EQ(edx, 0x4E49434B)) goto loc_001D0E14; /* je: equal / zero */

loc_001D0DFF:
    if (CMP_EQ(edx, 0x53425645)) goto loc_001D0E24; /* je: equal / zero */

loc_001D0E07:
    if (CMP_NE(edx, 0xBE4BEA00u)) goto loc_001D0E38; /* jne: not equal / not zero */

loc_001D0E0F:
    esi = MEM32(ecx + 0xC);
    goto loc_001D0E27;

loc_001D0E14:
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_001D0E1F:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D0E38;

loc_001D0E24:
    esi = MEM32(ecx + 4);

loc_001D0E27:
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_001D0E32:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0E38:
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
