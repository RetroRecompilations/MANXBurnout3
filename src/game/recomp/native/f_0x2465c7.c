#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002465C7
 * Original: 0x002465C7 - 0x002465EB (36 bytes, 16 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002465C7:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_002465E2;

loc_002465CF:
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    PUSH32(esp, 0); sub_00246594(); /* call 0x00246594 */

loc_002465DD:
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_002465E8; /* je: equal / zero */

loc_002465E2:
    if (CMP_G(MEM32(ebp + 0xC), 0)) goto loc_002465CF; /* jg: greater (signed >) */

loc_002465E8:
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
