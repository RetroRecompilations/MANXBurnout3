#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D94D0
 * Original: 0x001D94D0 - 0x001D9503 (51 bytes, 16 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D94D0(void)
{

loc_001D94D0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C0810);
    PUSH32(esp, 0); sub_001E1B50(); /* call 0x001E1B50 */

loc_001D94E0:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E0950(); /* call 0x001E0950 */

loc_001D94E6:
    eax = MEM32(0x41AA68);
    ecx = MEM32(eax + 0x7592A0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E8), _icall_esp); /* indirect call */
    }

loc_001D94F9:
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
