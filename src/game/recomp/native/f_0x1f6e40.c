#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6E40
 * Original: 0x001F6E40 - 0x001F6EB0 (112 bytes, 43 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6E40:
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    if (TEST_Z(MEM8(esi + 0x1A), 1)) goto loc_001F6E63; /* je: equal / zero */

loc_001F6E4E:
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F6A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F64F0(); /* call 0x001F64F0 */

loc_001F6E5B:
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_001F6E63:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6590(); /* call 0x001F6590 */

loc_001F6E6E:
    ecx = MEM32(esi + 0x2C);
    edi = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F6AF0);
    PUSH32(esp, esi);
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM8(esp + 0x49) = LO8(ebx);
    MEM32(esp + 0x70) = ebx;
    PUSH32(esp, 0); sub_001F64F0(); /* call 0x001F64F0 */

loc_001F6E92:
    eax = esp + 0x20;
    MEM32(esi + 0x28) = ebx;
    edx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x24), _icall_esp); /* indirect call */
    }

loc_001F6EA0:
    esp = esp + 0x18;
    POP32(esp, edi);
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}
