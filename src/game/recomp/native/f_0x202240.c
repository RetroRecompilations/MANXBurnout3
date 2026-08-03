#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00202240
 * Original: 0x00202240 - 0x00202263 (35 bytes, 13 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202240(void)
{

loc_00202240:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0xC);
    eax = ecx + edx * 8;
    ecx = ZX16(MEM16(eax + 4));
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0020225F:
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
