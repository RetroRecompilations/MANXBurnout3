#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1998
 * Original: 0x001D1998 - 0x001D19FD (101 bytes, 36 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1998(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D1998:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(esi), 0x103)) goto loc_001D19DD; /* jne: not equal / not zero */

loc_001D19A5:
    if (CMP_EQ(MEM32(esp + 0x14), 0)) goto loc_001D19C1; /* je: equal / zero */

loc_001D19AC:
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001D19B7; /* jne: not equal / not zero */

loc_001D19B3:
    eax = MEM32(esp + 8);

loc_001D19B7:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001D19BF:
    goto loc_001D19C6;

loc_001D19C1:
    eax = 0x102;

loc_001D19C6:
    if (CMP_NE(eax, 0x102)) goto loc_001D19D9; /* jne: not equal / not zero */

loc_001D19CD:
    PUSH32(esp, 0x3E4);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D19D7:
    goto loc_001D19F7;

loc_001D19D9:
    if (TEST_NZ(eax, eax)) goto loc_001D19F7; /* jne: not equal / not zero */

loc_001D19DD:
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    esi = MEM32(esi);
    if (TEST_S(esi, esi)) goto loc_001D19F1; /* jl: less (signed <) */

loc_001D19EC:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D19F9;

loc_001D19F1:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D19F7:
    eax = 0; /* xor self */

loc_001D19F9:
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
