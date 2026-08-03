#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A924
 * Original: 0x0024A924 - 0x0024A9B4 (144 bytes, 43 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A924(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A924:
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x374848);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024A930:
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x76B800))) goto loc_0024A9A3; /* jae: above or equal (unsigned >=) */

loc_0024A93B:
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x76B820;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_0024A9A3; /* je: equal / zero */

loc_0024A95B:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BE1E(); /* call 0x0024BE1E */

loc_0024A961:
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_0024A97B; /* je: equal / zero */

loc_0024A96F:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024A8A3(); /* call 0x0024A8A3 */

loc_0024A975:
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    goto loc_0024A98A;

loc_0024A97B:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A980:
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0024A98A:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0024A99B(); /* call 0x0024A99B */

loc_0024A993:
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0024A9B9(); return; /* tail jmp 0x0024A9B9 */

    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BEBE(); /* call 0x0024BEBE */

loc_0024A9A1:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024A9A3:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A9A8:
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

}
