#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBB40
 * Original: 0x001FBB40 - 0x001FBB62 (34 bytes, 14 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FBB40:
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) goto loc_001FBB49; /* jne: not equal / not zero */

loc_001FBB48:
    esp += 4; return; /* ret */

loc_001FBB49:
    edx = MEM32(esp + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001FBB5E:
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
