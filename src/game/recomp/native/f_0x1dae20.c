#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DAE20
 * Original: 0x001DAE20 - 0x001DAE51 (49 bytes, 15 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE20(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DAE20:
    ecx = MEM32(0x41AACC);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001DAE4D; /* je: equal / zero */

loc_001DAE34:
    PUSH32(esp, 0); sub_001E17F0(); /* call 0x001E17F0 */

loc_001DAE39:
    PUSH32(esp, 0); sub_00020CD0(); /* call 0x00020CD0 */

loc_001DAE3E:
    PUSH32(esp, 0); sub_001E1000(); /* call 0x001E1000 */

loc_001DAE43:
    MEM32(0x7593F0) = 0;

loc_001DAE4D:
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
