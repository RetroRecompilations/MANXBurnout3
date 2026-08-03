#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001532D0
 * Original: 0x001532D0 - 0x00153310 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001532D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001532D0:
    if (CMP_EQ(MEM32(eax + 0x554), 0xFFFFFFFFu)) goto loc_0015330F; /* je: equal / zero */

loc_001532D9:
    SET_LO8(edx, MEM8(eax + 0x564));
    SET_LO8(ecx, 1);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    MEM8(eax + 0x566) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x538));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(eax + 0x564) = LO8(edx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00153307; /* je: equal / zero */

loc_001532F9:
    if (CMP_NE(MEM32(eax + 0x544), 6)) goto loc_0015330F; /* jne: not equal / not zero */

loc_00153302:
    g_seh_ebp = ebp; sub_00153230(); return; /* tail jmp 0x00153230 */

loc_00153307:
    eax = eax + 8;
    g_seh_ebp = ebp; sub_00155BB0(); return; /* tail jmp 0x00155BB0 */

loc_0015330F:
    esp += 4; return; /* ret */

}
