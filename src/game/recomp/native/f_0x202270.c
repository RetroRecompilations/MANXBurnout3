#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00202270
 * Original: 0x00202270 - 0x00202297 (39 bytes, 14 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202270(void)
{

loc_00202270:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0xC);
    eax = ecx + edx * 8;
    edx = ZX16(MEM16(eax + 4));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0020228F:
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
