#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD3A0
 * Original: 0x001DD3A0 - 0x001DD3C8 (40 bytes, 13 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD3A0(void)
{

loc_001DD3A0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DD330(); /* call 0x001DD330 */

loc_001DD3AB:
    eax = MEM32(0x41AB04);
    ecx = MEM32(eax + 0x7592A0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E8), _icall_esp); /* indirect call */
    }

loc_001DD3BE:
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
