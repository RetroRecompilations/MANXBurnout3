#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DE710
 * Original: 0x001DE710 - 0x001DE748 (56 bytes, 18 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE710(void)
{

loc_001DE710:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C0B08);
    PUSH32(esp, 0); sub_001E1B50(); /* call 0x001E1B50 */

loc_001DE720:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7592FC), _icall_esp); /* indirect call */
    }

loc_001DE72B:
    eax = MEM32(0x41AB5C);
    ecx = MEM32(eax + 0x759300);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E8), _icall_esp); /* indirect call */
    }

loc_001DE73E:
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
