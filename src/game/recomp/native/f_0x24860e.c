#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024860E
 * Original: 0x0024860E - 0x002486A5 (151 bytes, 52 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024860E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024860E:
    PUSH32(esp, 8);
    PUSH32(esp, 0x374770);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024861A:
    esi = MEM32(ebp + 8);
    esi = esi * 8 + 0x3C6500;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(esi), ebx)) goto loc_0024869C; /* jne: not equal / not zero */

loc_0024862A:
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_0024419D(); /* call 0x0024419D */

loc_00248631:
    POP32(esp, ecx);
    edi = eax;
    if (CMP_NE(edi, ebx)) goto loc_00248645; /* jne: not equal / not zero */

loc_00248638:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024863D:
    MEM32(eax) = 0xC;
    goto loc_00248684;

loc_00248645:
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_0024864C:
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(MEM32(esi), ebx)) goto loc_0024868C; /* jne: not equal / not zero */

loc_00248654:
    PUSH32(esp, 0xFA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024B626(); /* call 0x0024B626 */

loc_0024865F:
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00248688; /* jne: not equal / not zero */

loc_00248665:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_0024866B:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_00248670:
    MEM32(eax) = 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024490A(); /* call 0x0024490A */

loc_00248681:
    esp = esp + 0xC;

loc_00248684:
    eax = 0; /* xor self */
    goto loc_0024869F;

loc_00248688:
    MEM32(esi) = edi;
    goto loc_00248693;

loc_0024868C:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00248692:
    POP32(esp, ecx);

loc_00248693:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002486A5(); /* call 0x002486A5 */

loc_0024869C:
    eax = 0; /* xor self */
    eax++;

loc_0024869F:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_002486A4:
    esp += 4; return; /* ret */

}
