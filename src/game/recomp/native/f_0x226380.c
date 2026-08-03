#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226380
 * Original: 0x00226380 - 0x002263A9 (41 bytes, 15 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226380:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(esi), 0)) goto loc_002263A7; /* je: equal / zero */

loc_0022638A:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226AD0(); /* call 0x00226AD0 */

loc_0022639D:
    esp = esp + 0xC;
    MEM32(esi + 4) = 1;

loc_002263A7:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
