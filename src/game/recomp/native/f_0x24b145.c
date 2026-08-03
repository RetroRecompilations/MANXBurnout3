#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B145
 * Original: 0x0024B145 - 0x0024B189 (68 bytes, 19 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B145(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B145:
    MEM32(0x41D2A8) = MEM32(0x41D2A8) + 1;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_0024B155:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0024B16E; /* je: equal / zero */

loc_0024B161:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;
    MEM32(ecx + 0x18) = 0x1000;
    goto loc_0024B17F;

loc_0024B16E:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;
    eax = ecx + 0x14;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x18) = 2;

loc_0024B17F:
    eax = MEM32(ecx + 8);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}
