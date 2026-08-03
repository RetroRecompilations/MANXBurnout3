#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F64F0
 * Original: 0x001F64F0 - 0x001F652A (58 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F64F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F64F0:
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    ebp = eax + 0xC;
    if (CMP_EQ(esi, ebp)) goto loc_001F6527; /* je: equal / zero */

loc_001F6500:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    /* nop */

loc_001F6510:
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_001F651A:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001F6525; /* je: equal / zero */

loc_001F6521:
    if (CMP_NE(esi, ebp)) goto loc_001F6510; /* jne: not equal / not zero */

loc_001F6525:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F6527:
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
