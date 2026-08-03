#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211690
 * Original: 0x00211690 - 0x002116C4 (52 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00211690:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002116C0; /* je: equal / zero */

loc_0021169C:
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C270(); /* call 0x0021C270 */

loc_002116A9:
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021C2D0(); /* call 0x0021C2D0 */

loc_002116B4:
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C310(); /* call 0x0021C310 */

loc_002116BD:
    esp = esp + 0x1C;

loc_002116C0:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
