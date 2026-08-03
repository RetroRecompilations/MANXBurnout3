#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE620
 * Original: 0x001FE620 - 0x001FE65C (60 bytes, 26 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE620(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE620:
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    /* nop */

loc_001FE630:
    esi = eax + 0xC;
    /* cmp esi, edx - flags set for next jcc */
    esi = MEM32(ecx + 0xC);
    if (CMP_EQ(esi, edx)) goto loc_001FE642; /* je: equal / zero */

loc_001FE63A:
    eax = MEM32(eax);
    if (CMP_NE(eax, esi)) goto loc_001FE630; /* jne: not equal / not zero */

loc_001FE640:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FE642:
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, esi)) goto loc_001FE64D; /* je: equal / zero */

loc_001FE649:
    esi = MEM32(eax);
    MEM32(edx) = esi;

loc_001FE64D:
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx + 0xC))) goto loc_001FE65A; /* je: equal / zero */

loc_001FE654:
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;

loc_001FE65A:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
