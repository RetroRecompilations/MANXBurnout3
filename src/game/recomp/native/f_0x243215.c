#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243215
 * Original: 0x00243215 - 0x0024326D (88 bytes, 36 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243215(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00243215:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0x7FFFFFFF;
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_00246622(); /* call 0x00246622 */

loc_00243244:
    esp = esp + 0xC;
    /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_00243267; /* je: equal / zero */

loc_0024324D:
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_0024325A; /* js: sign (negative) */

loc_00243252:
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00243267;

loc_0024325A:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_00243265:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00243267:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
