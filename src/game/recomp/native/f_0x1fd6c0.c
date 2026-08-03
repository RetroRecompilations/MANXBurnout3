#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FD6C0
 * Original: 0x001FD6C0 - 0x001FD70A (74 bytes, 34 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FD6C0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_NZ(ebx, ebx)) goto loc_001FD6CD; /* jne: not equal / not zero */

loc_001FD6C9:
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FD6CD:
    PUSH32(esp, esi);
    esi = MEM32(0x41C1B4);
    /* cmp esi, 0x41C1B4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, 0x41C1B4)) goto loc_001FD6FE; /* je: equal / zero */

loc_001FD6DD:
    /* nop */

loc_001FD6E0:
    eax = MEM32(esi + -32);
    edi = esi + -32;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FD6ED:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FD704; /* je: equal / zero */

loc_001FD6F4:
    esi = MEM32(esi);
    if (CMP_NE(esi, 0x41C1B4)) goto loc_001FD6E0; /* jne: not equal / not zero */

loc_001FD6FE:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FD704:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
