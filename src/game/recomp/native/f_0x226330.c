#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226330
 * Original: 0x00226330 - 0x0022637B (75 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226330:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0;
    if (TEST_Z(edi, edi)) goto loc_00226376; /* je: equal / zero */

loc_00226344:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x10);
    eax = esi + 0x10A;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = 1;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_00226970(); /* call 0x00226970 */

loc_00226362:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x10);
    edi = edi + 0x10;
    ecx = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00226970(); /* call 0x00226970 */

loc_00226373:
    esp = esp + 0x20;

loc_00226376:
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
