#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00015570
 * Original: 0x00015570 - 0x00015588 (24 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00015570:
    eax = ecx;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00015587; /* je: equal / zero */

loc_00015579:
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00015587:
    esp += 4; return; /* ret */

}
