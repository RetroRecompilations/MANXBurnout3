#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00248F42
 * Original: 0x00248F42 - 0x00248F73 (49 bytes, 19 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248F42(void)
{
    int _flags = 0; /* fallback flag var */

loc_00248F42:
    /* cmp MEM32(0x3C64F0), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(MEM32(0x3C64F0), 1)) goto loc_00248F5C; /* jle: less or equal (signed <=) */

loc_00248F50:
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00248569(); /* call 0x00248569 */

loc_00248F58:
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00248F68;

loc_00248F5C:
    eax = MEM32(0x3C64E8);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 1;

loc_00248F68:
    /* test eax, eax - flags set for next jcc */
    eax = esi + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_00248F71; /* jne: not equal / not zero */

loc_00248F6F:
    eax = esi;

loc_00248F71:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
