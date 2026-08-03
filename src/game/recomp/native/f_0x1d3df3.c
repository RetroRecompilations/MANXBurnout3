#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3DF3
 * Original: 0x001D3DF3 - 0x001D3E1B (40 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3DF3(void)
{

loc_001D3DF3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B7EC), _icall_esp); /* indirect call */
    }

loc_001D3E03:
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0xFFFFFFFCu;
    MEM32(eax + 8) = 0x80;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
