#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001ED770
 * Original: 0x001ED770 - 0x001ED7BB (75 bytes, 25 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED770(void)
{
    int _flags = 0; /* fallback flag var */

loc_001ED770:
    PUSH32(esp, 0);
    PUSH32(esp, 0x2087B0);
    PUSH32(esp, 0x1ED3D0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_001D94A0(); /* call 0x001D94A0 */

loc_001ED785:
    esp = esp + 0x14;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x41B298) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_001ED794; /* jge: greater or equal (signed >=) */

loc_001ED791:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001ED794:
    PUSH32(esp, 0);
    PUSH32(esp, 0x2087B0);
    PUSH32(esp, 0x1ED3F0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_001F0DE0(); /* call 0x001F0DE0 */

loc_001ED7A9:
    ecx = 0; /* xor self */
    esp = esp + 0x14;
    /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    MEM32(0x41B29C) = eax;
    eax = ecx;
    esp += 4; return; /* ret */

}
