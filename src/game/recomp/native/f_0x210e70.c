#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00210E70
 * Original: 0x00210E70 - 0x00210E91 (33 bytes, 13 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00210E70:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x28);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0x40) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_00210E90; /* je: equal / zero */

loc_00210E82:
    edx = MEM32(eax + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00210E8D:
    esp = esp + 0x10;

loc_00210E90:
    esp += 4; return; /* ret */

}
