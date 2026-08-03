#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0900
 * Original: 0x001E0900 - 0x001E094C (76 bytes, 30 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0900(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E0900:
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_001E091C; /* je: equal / zero */

loc_001E090B:
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    MEM32(eax) = edx;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edx;

loc_001E091C:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    /* test esi, esi - flags set for next jcc */
    MEM32(ecx + 4) = esi;
    if (TEST_Z(esi, esi)) goto loc_001E094A; /* je: equal / zero */

loc_001E0928:
    eax = esi + 0x90;
    edx = ecx + 8;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(edx) = edi;
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_001DD220(); /* call 0x001DD220 */

loc_001E0946:
    esp = esp + 4;
    POP32(esp, edi);

loc_001E094A:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
