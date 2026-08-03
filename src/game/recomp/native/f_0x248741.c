#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00248741
 * Original: 0x00248741 - 0x0024877E (61 bytes, 27 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248741(void)
{
    int _flags = 0; /* fallback flag var */

loc_00248741:
    /* test MEM8(edi + 0xC), 0x40 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(MEM8(edi + 0xC), 0x40)) goto loc_00248774; /* je: equal / zero */

loc_0024874D:
    if (CMP_NE(MEM32(edi + 8), 0)) goto loc_00248774; /* jne: not equal / not zero */

loc_00248753:
    eax = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) + eax;
    goto loc_0024877B;

loc_0024875B:
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_002486F7(); /* call 0x002486F7 */

loc_0024876C:
    ebx++;
    ebx++;
    /* cmp MEM32(esi), 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_0024877B; /* je: equal / zero */

loc_00248774:
    if (CMP_G(MEM32(esp + 0xC), 0)) goto loc_0024875B; /* jg: greater (signed >) */

loc_0024877B:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
