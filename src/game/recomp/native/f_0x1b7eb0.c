#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7EB0
 * Original: 0x001B7EB0 - 0x001B7EED (61 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7EB0:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B7EE9; /* je: equal / zero */

loc_001B7EBC:
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001B7EE8; /* jle: less or equal (signed <=) */

loc_001B7EC6:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 8;
    goto loc_001B7ED0;

    /* nop */

loc_001B7ED0:
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_001B7EDB; /* je: equal / zero */

loc_001B7ED6:
    PUSH32(esp, 0); sub_001B6E10(); /* call 0x001B6E10 */

loc_001B7EDB:
    eax = MEM32(ebp + 0x28);
    ebx++;
    edi = edi + 4;
    if (CMP_L(ebx, eax)) goto loc_001B7ED0; /* jl: less (signed <) */

loc_001B7EE6:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001B7EE8:
    POP32(esp, ebx);

loc_001B7EE9:
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
