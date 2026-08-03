#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FCB30
 * Original: 0x000FCB30 - 0x000FCB89 (89 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FCB30:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x9A6C;
    edi = 8;

loc_000FCB42:
    eax = MEM32(esi + 0x1648);
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x4A0) = 0;
    MEM32(esi) = 0;
    if (TEST_Z(eax, eax)) goto loc_000FCB73; /* je: equal / zero */

loc_000FCB5C:
    eax = esi + -12;
    ecx = 3;
    PUSH32(esp, 0); sub_001B7240(); /* call 0x001B7240 */

loc_000FCB69:
    ecx = 2;
    PUSH32(esp, 0); sub_001B7240(); /* call 0x001B7240 */

loc_000FCB73:
    esi = esi + 0x4DB0;
    edi--;
    if ((edi != 0)) goto loc_000FCB42; /* jne: not equal / not zero */

loc_000FCB7C:
    eax = ebp;
    PUSH32(esp, 0); sub_001B79C0(); /* call 0x001B79C0 */

loc_000FCB83:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
