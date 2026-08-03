#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00125380
 * Original: 0x00125380 - 0x001253B8 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00125380:
    /* test LO8(ecx), 0x60 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x204);
    if (TEST_NZ(LO8(ecx), 0x60)) goto loc_001253A8; /* jne: not equal / not zero */

loc_0012538E:
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_001253A5; /* jns: not sign (positive) */

loc_00125392:
    eax = eax + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_001253A1:
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001253A5:
    eax = eax + 0x10;

loc_001253A8:
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_001253B4:
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
