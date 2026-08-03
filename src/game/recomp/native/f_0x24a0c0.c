#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A0C0
 * Original: 0x0024A0C0 - 0x0024A133 (115 bytes, 35 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024A0C0:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00248347(); /* call 0x00248347 */

loc_0024A0C6:
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esi = 0; /* xor self */

loc_0024A0CF:
    if (CMP_EQ(ecx, MEM32(esi * 8 + 0x3C6768))) goto loc_0024A0F6; /* je: equal / zero */

loc_0024A0D8:
    esi++;
    if (CMP_B(esi, 0x2D)) goto loc_0024A0CF; /* jb: below (unsigned <) */

loc_0024A0DE:
    if (CMP_B(ecx, 0x13)) goto loc_0024A107; /* jb: below (unsigned <) */

loc_0024A0E3:
    if (CMP_A(ecx, 0x24)) goto loc_0024A107; /* ja: above (unsigned >) */

loc_0024A0E8:
    PUSH32(esp, 0); sub_00248347(); /* call 0x00248347 */

loc_0024A0ED:
    MEM32(eax + 8) = 0xD;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0024A0F6:
    PUSH32(esp, 0); sub_00248347(); /* call 0x00248347 */

loc_0024A0FB:
    ecx = MEM32(esi * 8 + 0x3C676C);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0024A107:
    if (CMP_B(ecx, 0xBC)) goto loc_0024A125; /* jb: below (unsigned <) */

loc_0024A10F:
    if (CMP_A(ecx, 0xCA)) goto loc_0024A125; /* ja: above (unsigned >) */

loc_0024A117:
    PUSH32(esp, 0); sub_00248347(); /* call 0x00248347 */

loc_0024A11C:
    MEM32(eax + 8) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0024A125:
    PUSH32(esp, 0); sub_00248347(); /* call 0x00248347 */

loc_0024A12A:
    MEM32(eax + 8) = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
