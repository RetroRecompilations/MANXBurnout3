#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225980
 * Original: 0x00225980 - 0x002259EE (110 bytes, 37 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00225980:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002259BC; /* je: equal / zero */

loc_0022598C:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AB59(); /* call 0x0031AB59 */

loc_00225992:
    PUSH32(esp, edi);

loc_00225993:
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_0022599C:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_002259A7:
    if (TEST_Z(edi, edi)) goto loc_00225993; /* je: equal / zero */

loc_002259AB:
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0031AA8B(); /* call 0x0031AA8B */

loc_002259B4:
    MEM32(esi + 0x10) = 0;
    POP32(esp, edi);

loc_002259BC:
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_002259D0; /* je: equal / zero */

loc_002259C3:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA8B(); /* call 0x0031AA8B */

loc_002259C9:
    MEM32(esi + 0xC) = 0;

loc_002259D0:
    eax = MEM32(esi + 0x55F8);
    if (TEST_Z(eax, eax)) goto loc_002259EA; /* je: equal / zero */

loc_002259DA:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA8B(); /* call 0x0031AA8B */

loc_002259E0:
    MEM32(esi + 0x55F8) = 0;

loc_002259EA:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
