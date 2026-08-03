#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A486
 * Original: 0x0024A486 - 0x0024A535 (175 bytes, 52 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A486(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A486:
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x374828);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024A492:
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x76B800))) goto loc_0024A52C; /* jae: above or equal (unsigned >=) */

loc_0024A4A1:
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x76B820;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_0024A52C; /* je: equal / zero */

loc_0024A4C1:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BE1E(); /* call 0x0024BE1E */

loc_0024A4C7:
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_0024A504; /* je: equal / zero */

loc_0024A4D5:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024A4DB:
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D13D0(); /* call 0x001D13D0 */

loc_0024A4E2:
    if (TEST_NZ(eax, eax)) goto loc_0024A4F0; /* jne: not equal / not zero */

loc_0024A4E6:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_0024A4EB:
    MEM32(ebp + -28) = eax;
    goto loc_0024A4F4;

loc_0024A4F0:
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_0024A4F4:
    if (CMP_EQ(MEM32(ebp + -28), 0)) goto loc_0024A513; /* je: equal / zero */

loc_0024A4FA:
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

loc_0024A4FF:
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;

loc_0024A504:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A509:
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0024A513:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0024A524(); /* call 0x0024A524 */

loc_0024A51C:
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0024A53A(); return; /* tail jmp 0x0024A53A */

    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BEBE(); /* call 0x0024BEBE */

loc_0024A52A:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024A52C:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

}
