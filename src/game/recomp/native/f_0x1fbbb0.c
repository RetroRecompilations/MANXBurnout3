#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBBB0
 * Original: 0x001FBBB0 - 0x001FBBE2 (50 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FBBB0:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB10(); /* call 0x001FBB10 */

loc_001FBBC9:
    ecx = MEM32(esp + 0x20);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_001FBBDD; /* je: equal / zero */

loc_001FBBD4:
    edx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM32(ecx) = edx;

loc_001FBBDD:
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}
