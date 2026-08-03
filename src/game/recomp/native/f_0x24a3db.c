#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A3DB
 * Original: 0x0024A3DB - 0x0024A47B (160 bytes, 47 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A3DB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A3DB:
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x374818);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024A3E7:
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x76B800))) goto loc_0024A46A; /* jae: above or equal (unsigned >=) */

loc_0024A3F2:
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x76B820;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_0024A46A; /* je: equal / zero */

loc_0024A412:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BE1E(); /* call 0x0024BE1E */

loc_0024A418:
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_0024A43A; /* je: equal / zero */

loc_0024A426:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024A250(); /* call 0x0024A250 */

loc_0024A432:
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    goto loc_0024A451;

loc_0024A43A:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A43F:
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

loc_0024A44A:
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0024A451:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0024A462(); /* call 0x0024A462 */

loc_0024A45A:
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0024A480(); return; /* tail jmp 0x0024A480 */

    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BEBE(); /* call 0x0024BEBE */

loc_0024A468:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024A46A:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A46F:
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

}
