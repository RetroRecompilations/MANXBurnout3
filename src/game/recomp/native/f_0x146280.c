#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146280
 * Original: 0x00146280 - 0x001462B0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00146280:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x13F0;
    edi = eax + 0xF0;
    ebx = 0x10;

loc_00146294:
    PUSH32(esp, 0); sub_00147700(); /* call 0x00147700 */

loc_00146299:
    eax = esi;
    PUSH32(esp, 0); sub_00142890(); /* call 0x00142890 */

loc_001462A0:
    edi = edi + 0x130;
    esi = esi + 0x5C;
    ebx--;
    if ((ebx != 0)) goto loc_00146294; /* jne: not equal / not zero */

loc_001462AC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
