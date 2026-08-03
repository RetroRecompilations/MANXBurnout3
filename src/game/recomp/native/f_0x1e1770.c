#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1770
 * Original: 0x001E1770 - 0x001E17AD (61 bytes, 17 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1770(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1770:
    eax = MEM32(0x3C0B68);
    ecx = MEM32(0x3C0B64);
    PUSH32(esp, 0x40000);
    PUSH32(esp, 0x41AC6C);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0); sub_001E0FD0(); /* call 0x001E0FD0 */

loc_001E1790:
    esp = esp + 0x18;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x41AC90) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001E179D; /* jne: not equal / not zero */

loc_001E179C:
    esp += 4; return; /* ret */

loc_001E179D:
    MEM32(0x41AC98) = 0;
    eax = 1;
    esp += 4; return; /* ret */

}
