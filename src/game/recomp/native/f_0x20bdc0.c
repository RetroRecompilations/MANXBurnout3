#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BDC0
 * Original: 0x0020BDC0 - 0x0020BDE3 (35 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BDC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020BDC0:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(eax, eax)) goto loc_0020BDD9; /* je: equal / zero */

loc_0020BDCF:
    ecx = ecx | 0x2000;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

loc_0020BDD9:
    ecx = ecx & 0xFFFFDFFFu;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}
