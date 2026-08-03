#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F8640
 * Original: 0x001F8640 - 0x001F8681 (65 bytes, 21 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8640:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001F865F; /* je: equal / zero */

loc_001F864C:
    ecx = MEM32(eax + 0x58);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 0x48);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_001FE900(); return; /* tail jmp 0x001FE900 */

loc_001F865F:
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_001F866F; /* jns: not sign (positive) */

loc_001F8663:
    edx = MEM32(eax + 0x48);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_001FE710(); return; /* tail jmp 0x001FE710 */

loc_001F866F:
    eax = MEM32(eax + 0x58);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001F867D:
    esp = esp + 8;
    esp += 4; return; /* ret */

}
