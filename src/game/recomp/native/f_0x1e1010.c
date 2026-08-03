#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1010
 * Original: 0x001E1010 - 0x001E106C (92 bytes, 25 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1010(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1010:
    PUSH32(esp, 0x40000);
    eax = 0x41AC30;
    PUSH32(esp, 0);
    MEM32(0x41AC30) = eax;
    MEM32(0x41AC34) = eax;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x24);
    eax = 0x41AC38;
    ecx = 4;
    MEM32(0x41AC5C) = 1;
    PUSH32(esp, 0); sub_001E0E70(); /* call 0x001E0E70 */

loc_001E1043:
    esp = esp + 0x10;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x41AC60) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001E1055; /* jne: not equal / not zero */

loc_001E104F:
    MEM32(0x41AC5C) = eax;
    esp += 4; return; /* ret */

loc_001E1055:
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x1C);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 4) = edx;
    eax = 1;
    esp += 4; return; /* ret */

}
