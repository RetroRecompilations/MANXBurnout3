#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0D9F
 * Original: 0x001D0D9F - 0x001D0DE6 (71 bytes, 28 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D9F(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D0D9F:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_001D205B(); /* call 0x001D205B */

loc_001D0DB1:
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001D0DDF; /* je: equal / zero */

loc_001D0DB7:
    PUSH32(esp, ebx);
    ebx = esi + 0xC;

loc_001D0DBB:
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0); sub_001D0855(); /* call 0x001D0855 */

loc_001D0DC8:
    if (TEST_NZ(eax, eax)) goto loc_001D0DDE; /* jne: not equal / not zero */

loc_001D0DCC:
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_001D205B(); /* call 0x001D205B */

loc_001D0DD8:
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001D0DBB; /* jne: not equal / not zero */

loc_001D0DDE:
    POP32(esp, ebx);

loc_001D0DDF:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
