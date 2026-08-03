#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002465EB
 * Original: 0x002465EB - 0x00246622 (55 bytes, 23 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465EB(void)
{
    int _flags = 0; /* fallback flag var */

loc_002465EB:
    /* test MEM8(edi + 0xC), 0x40 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(MEM8(edi + 0xC), 0x40)) goto loc_00246618; /* je: equal / zero */

loc_002465F7:
    if (CMP_NE(MEM32(edi + 8), 0)) goto loc_00246618; /* jne: not equal / not zero */

loc_002465FD:
    eax = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) + eax;
    goto loc_0024661F;

loc_00246605:
    SET_LO8(eax, MEM8(ebx));
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    ecx = edi;
    PUSH32(esp, 0); sub_00246594(); /* call 0x00246594 */

loc_00246612:
    ebx++;
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_0024661F; /* je: equal / zero */

loc_00246618:
    if (CMP_G(MEM32(esp + 0xC), 0)) goto loc_00246605; /* jg: greater (signed >) */

loc_0024661F:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
