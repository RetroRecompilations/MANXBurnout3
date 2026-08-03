#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021EB80
 * Original: 0x0021EB80 - 0x0021EBCA (74 bytes, 26 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021EB80:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_0021EB9A; /* je: equal / zero */

loc_0021EB8C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0021EB90:
    esp = esp + 4;
    MEM32(esi + 8) = 0;

loc_0021EB9A:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021DE90(); /* call 0x0021DE90 */

loc_0021EBA0:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021E5F0(); /* call 0x0021E5F0 */

loc_0021EBA6:
    eax = MEM32(esi + 0xD64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225B60(); /* call 0x00225B60 */

loc_0021EBB2:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021DE90(); /* call 0x0021DE90 */

loc_0021EBB8:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00221470(); /* call 0x00221470 */

loc_0021EBC1:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_0021EBC5:
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
