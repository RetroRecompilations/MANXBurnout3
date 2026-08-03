#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6A20
 * Original: 0x001F6A20 - 0x001F6A7D (93 bytes, 37 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6A20:
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F6590(); /* call 0x001F6590 */

loc_001F6A32:
    esi = eax;
    eax = MEM32(esp + 0x78);
    eax = eax + 0x7FF;
    ecx = 0x17;
    edi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(esp + 0x20);
    eax = eax >> 0xB;
    ecx = esp + 0x14;
    eax = eax << 0xB;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_001F6A5E:
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_001F6A6C; /* jne: not equal / not zero */

loc_001F6A65:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_001F6A6C:
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x2C) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}
