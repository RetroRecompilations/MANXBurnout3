#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00135710
 * Original: 0x00135710 - 0x00135732 (34 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135710:
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(MEM8(esi + 0x63A4), 0x10)) goto loc_0013572A; /* jne: not equal / not zero */

loc_0013571C:
    eax = MEM32(esi + 0x6370);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_0013572A:
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001CA710(); return; /* tail jmp 0x001CA710 */

}
