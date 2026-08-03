#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FACB0
 * Original: 0x001FACB0 - 0x001FACD3 (35 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FACB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FACB0:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x54);
    if (TEST_Z(eax, eax)) goto loc_001FACC9; /* je: equal / zero */

loc_001FACBF:
    ecx = ecx | 0x80;
    MEM32(eax + 0x54) = ecx;
    esp += 4; return; /* ret */

loc_001FACC9:
    ecx = ecx & 0xFFFFFF7Fu;
    MEM32(eax + 0x54) = ecx;
    esp += 4; return; /* ret */

}
