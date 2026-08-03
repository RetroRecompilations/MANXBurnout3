#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F8B10
 * Original: 0x001F8B10 - 0x001F8B61 (81 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F8B10:
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x1F8860);
    ecx = esp + 0x24;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F8750(); /* call 0x001F8750 */

loc_001F8B4C:
    ecx = MEM32(esp + 0x30);
    esp = esp + 0x14;
    if (TEST_Z(ecx, ecx)) goto loc_001F8B5D; /* je: equal / zero */

loc_001F8B57:
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edx;

loc_001F8B5D:
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
