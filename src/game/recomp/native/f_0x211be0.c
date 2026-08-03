#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211BE0
 * Original: 0x00211BE0 - 0x00211C1F (63 bytes, 26 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211BE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00211BE0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00211C1D; /* je: equal / zero */

loc_00211BE9:
    eax = MEM32(esi + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00211BF7; /* jne: not equal / not zero */

loc_00211BF0:
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_00211C00; /* je: equal / zero */

loc_00211BF7:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00211800(); /* call 0x00211800 */

loc_00211BFD:
    esp = esp + 4;

loc_00211C00:
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_00211C10; /* je: equal / zero */

loc_00211C07:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021EB80(); /* call 0x0021EB80 */

loc_00211C0D:
    esp = esp + 4;

loc_00211C10:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00210EA0(); /* call 0x00210EA0 */

loc_00211C16:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_00211C1A:
    esp = esp + 8;

loc_00211C1D:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
