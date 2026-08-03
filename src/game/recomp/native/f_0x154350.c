#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154350
 * Original: 0x00154350 - 0x00154362 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154350:
    ecx = MEM32(eax + 0x5EC);
    if (TEST_Z(ecx, ecx)) goto loc_0015435F; /* je: equal / zero */

loc_0015435A:
    g_seh_ebp = ebp; sub_001CB210(); return; /* tail jmp 0x001CB210 */

loc_0015435F:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
