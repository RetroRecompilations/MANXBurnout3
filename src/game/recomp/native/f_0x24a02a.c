#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A02A
 * Original: 0x0024A02A - 0x0024A0A5 (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A02A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A02A:
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3747F8);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024A036:
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_0024A042:
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 3);
    POP32(esp, esi);

loc_0024A049:
    MEM32(ebp + -32) = esi;
    if (CMP_GE(esi, MEM32(0x76B938))) goto loc_0024A093; /* jge: greater or equal (signed >=) */

loc_0024A054:
    eax = MEM32(0x76B934);
    eax = MEM32(eax + esi * 4);
    if (CMP_EQ(eax, edi)) goto loc_0024A090; /* je: equal / zero */

loc_0024A060:
    if (TEST_Z(MEM8(eax + 0xC), 0x83)) goto loc_0024A075; /* je: equal / zero */

loc_0024A066:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00245A3D(); /* call 0x00245A3D */

loc_0024A06C:
    POP32(esp, ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024A075; /* je: equal / zero */

loc_0024A072:
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;

loc_0024A075:
    if (CMP_L(esi, 0x14)) goto loc_0024A090; /* jl: less (signed <) */

loc_0024A07A:
    eax = MEM32(0x76B934);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_0024A087:
    POP32(esp, ecx);
    eax = MEM32(0x76B934);
    MEM32(eax + esi * 4) = edi;

loc_0024A090:
    esi++;
    goto loc_0024A049;

loc_0024A093:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0024A0A5(); /* call 0x0024A0A5 */

loc_0024A09C:
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024A0A4:
    esp += 4; return; /* ret */

}
