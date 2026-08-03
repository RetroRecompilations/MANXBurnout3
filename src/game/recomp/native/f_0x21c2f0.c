#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C2F0
 * Original: 0x0021C2F0 - 0x0021C30C (28 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C2F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C2F0:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0021C2FF; /* je: equal / zero */

loc_0021C2FC:
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;

loc_0021C2FF:
    edx = MEM32(eax + 0xC);
    ecx = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(edx & edx, 0)) ? 1 : 0); /* setg */
    eax = ecx;
    esp += 4; return; /* ret */

}
