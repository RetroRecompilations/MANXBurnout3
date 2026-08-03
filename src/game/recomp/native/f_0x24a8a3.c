#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A8A3
 * Original: 0x0024A8A3 - 0x0024A924 (129 bytes, 52 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A8A3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024A8A3:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024A8AF:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024A8EF; /* je: equal / zero */

loc_0024A8B5:
    if (CMP_EQ(esi, 1)) goto loc_0024A8BF; /* je: equal / zero */

loc_0024A8BA:
    if (CMP_NE(esi, 2)) goto loc_0024A8D5; /* jne: not equal / not zero */

loc_0024A8BF:
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024A8C6:
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024A8CF:
    /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(eax, edi)) goto loc_0024A8EF; /* je: equal / zero */

loc_0024A8D5:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024BDDD(); /* call 0x0024BDDD */

loc_0024A8DB:
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_0024A8E2:
    if (TEST_NZ(eax, eax)) goto loc_0024A8EF; /* jne: not equal / not zero */

loc_0024A8E6:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_0024A8EB:
    edi = eax;
    goto loc_0024A8F1;

loc_0024A8EF:
    edi = 0; /* xor self */

loc_0024A8F1:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024BD94(); /* call 0x0024BD94 */

loc_0024A8F7:
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 5);
    eax = MEM32(eax * 4 + 0x76B820);
    esi = esi & 0x1F;
    /* test edi, edi - flags set for next jcc */
    POP32(esp, ecx);
    ecx = esi + esi * 4;
    MEM8(eax + ecx * 8 + 4) = 0;
    if (TEST_Z(edi, edi)) goto loc_0024A91F; /* je: equal / zero */

loc_0024A913:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024A0C0(); /* call 0x0024A0C0 */

loc_0024A919:
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    goto loc_0024A921;

loc_0024A91F:
    eax = 0; /* xor self */

loc_0024A921:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
