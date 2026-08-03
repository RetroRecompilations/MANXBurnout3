#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245A3D
 * Original: 0x00245A3D - 0x00245A83 (70 bytes, 22 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245A3D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245A3D:
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3740C8);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00245A49:
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    esi = MEM32(ebp + 8);
    if (TEST_Z(MEM8(esi + 0xC), 0x40)) goto loc_00245A63; /* je: equal / zero */

loc_00245A56:
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_00245A5A:
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00245A62:
    esp += 4; return; /* ret */

loc_00245A63:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024516A(); /* call 0x0024516A */

loc_00245A69:
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002459F1(); /* call 0x002459F1 */

loc_00245A74:
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00245A86(); /* call 0x00245A86 */

loc_00245A81:
    goto loc_00245A5A;

}
