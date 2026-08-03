#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002429F0
 * Original: 0x002429F0 - 0x00242A1B (43 bytes, 17 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002429F0:
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_002429FE:
    eax = MEM32(edi);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00242A10; /* je: equal / zero */

loc_00242A07:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243150(); /* call 0x00243150 */

loc_00242A0D:
    esp = esp + 4;

loc_00242A10:
    ecx = 0xD;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
