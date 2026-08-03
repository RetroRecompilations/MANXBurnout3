#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DE7E0
 * Original: 0x001DE7E0 - 0x001DE80A (42 bytes, 18 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE7E0(void)
{
    int _cf = 0; /* carry flag */

loc_001DE7E0:
    PUSH32(esp, esi);
    esi = MEM32(0x759338);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001E1CD0(); /* call 0x001E1CD0 */

loc_001DE7ED:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_001DE7FE:
    esp = esp + 0xC;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
