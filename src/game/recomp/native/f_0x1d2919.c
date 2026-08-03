#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D2919
 * Original: 0x001D2919 - 0x001D2933 (26 bytes, 7 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2919(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D2919:
    /* test MEM8(esp + 0xB), 0x80 - flags set for next jcc */
    PUSH32(esp, MEM32(esp + 4));
    if (TEST_Z(MEM8(esp + 0xB), 0x80)) goto loc_001D292B; /* je: equal / zero */

loc_001D2924:
    PUSH32(esp, 0); sub_001CFF7A(); /* call 0x001CFF7A */

loc_001D2929:
    goto loc_001D2930;

loc_001D292B:
    PUSH32(esp, 0); sub_001D4099(); /* call 0x001D4099 */

loc_001D2930:
    esp += 12; return; /* ret 8 */

}
