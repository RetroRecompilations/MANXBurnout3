#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE1E0
 * Original: 0x001FE1E0 - 0x001FE215 (53 bytes, 29 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE1E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE1E0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    ebp = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001FE20F; /* je: equal / zero */

loc_001FE1EF:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);

loc_001FE1F4:
    if (TEST_Z(edi, edi)) goto loc_001FE207; /* je: equal / zero */

loc_001FE1F8:
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_001FE200:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FE208; /* je: equal / zero */

loc_001FE207:
    ebp++;

loc_001FE208:
    esi = MEM32(esi);
    if (CMP_NE(esi, ebx)) goto loc_001FE1F4; /* jne: not equal / not zero */

loc_001FE20E:
    POP32(esp, edi);

loc_001FE20F:
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
