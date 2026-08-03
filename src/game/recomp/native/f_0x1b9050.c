#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B9050
 * Original: 0x001B9050 - 0x001B9063 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9050:
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_001B9062; /* je: equal / zero */

loc_001B9058:
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x7593D8)); return; /* indirect tail jmp */

loc_001B9062:
    esp += 4; return; /* ret */

}
