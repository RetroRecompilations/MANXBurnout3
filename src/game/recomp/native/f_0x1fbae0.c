#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBAE0
 * Original: 0x001FBAE0 - 0x001FBB0E (46 bytes, 21 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBAE0(void)
{
    int _cf = 0; /* carry flag */

loc_001FBAE0:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edx + eax * 8;
    edx = ZX16(MEM16(eax + 4));
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001FBB02:
    esp = esp + 0xC;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, edi);
    eax = eax & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
