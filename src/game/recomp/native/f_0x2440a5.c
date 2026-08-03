#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002440A5
 * Original: 0x002440A5 - 0x002440F2 (77 bytes, 24 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002440A5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002440A5:
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x374020);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_002440B1:
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_002440EC; /* je: equal / zero */

loc_002440B8:
    if (CMP_NE(MEM32(0x76B920), 3)) goto loc_002440DD; /* jne: not equal / not zero */

loc_002440C1:
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_002440C8:
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002440F4(); /* call 0x002440F4 */

loc_002440D8:
    if (CMP_NE(MEM32(ebp + -28), esi)) goto loc_002440EC; /* jne: not equal / not zero */

loc_002440DD:
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D4076(); /* call 0x001D4076 */

loc_002440E6:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D405F(); /* call 0x001D405F */

loc_002440EC:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_002440F1:
    esp += 4; return; /* ret */

}
