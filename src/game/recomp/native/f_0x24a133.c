#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A133
 * Original: 0x0024A133 - 0x0024A1A5 (114 bytes, 43 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A133(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024A133:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024A13E:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0024A154; /* jne: not equal / not zero */

loc_0024A144:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A149:
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0024A154:
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_0024A165:
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_0024A173; /* jne: not equal / not zero */

loc_0024A16C:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_0024A171:
    goto loc_0024A175;

loc_0024A173:
    eax = 0; /* xor self */

loc_0024A175:
    if (TEST_Z(eax, eax)) goto loc_0024A185; /* je: equal / zero */

loc_0024A179:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024A0C0(); /* call 0x0024A0C0 */

loc_0024A17F:
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    goto loc_0024A1A2;

loc_0024A185:
    ecx = esi;
    esi = esi & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = esi;
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 4;
    MEM8(eax) = MEM8(eax) & 0xFD;
    eax = edi;

loc_0024A1A2:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
