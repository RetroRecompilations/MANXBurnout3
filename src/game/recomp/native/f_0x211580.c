#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211580
 * Original: 0x00211580 - 0x002115B1 (49 bytes, 20 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00211580:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_002115AD; /* je: equal / zero */

loc_0021158E:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021E1A0(); /* call 0x0021E1A0 */

loc_0021159C:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002115AD; /* je: equal / zero */

loc_002115A3:
    eax = MEM32(eax + 0x100);
    if (TEST_NZ(eax, eax)) goto loc_002115AF; /* jne: not equal / not zero */

loc_002115AD:
    eax = esi;

loc_002115AF:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
