#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021E1A0
 * Original: 0x0021E1A0 - 0x0021E1E0 (64 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E1A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021E1A0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x8C4);
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0021E1DB; /* je: equal / zero */

loc_0021E1B2:
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0021E1DB; /* je: equal / zero */

loc_0021E1BA:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00222080(); /* call 0x00222080 */

loc_0021E1C1:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021E1DB; /* je: equal / zero */

loc_0021E1C8:
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C180(); /* call 0x0021C180 */

loc_0021E1D5:
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021E1DB:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
