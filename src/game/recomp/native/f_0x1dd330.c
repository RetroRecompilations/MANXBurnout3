#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD330
 * Original: 0x001DD330 - 0x001DD392 (98 bytes, 32 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD330(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD330:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C0A24);
    PUSH32(esp, 0); sub_001E1B50(); /* call 0x001E1B50 */

loc_001DD340:
    eax = MEM32(esi + 4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DD353; /* je: equal / zero */

loc_001DD34A:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DD2A0(); /* call 0x001DD2A0 */

loc_001DD350:
    esp = esp + 4;

loc_001DD353:
    if (TEST_Z(MEM8(esi + 3), 3)) goto loc_001DD36A; /* je: equal / zero */

loc_001DD359:
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    MEM32(edx + 4) = eax;

loc_001DD36A:
    eax = MEM32(esi + 0x98);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001DD391; /* je: equal / zero */

loc_001DD375:
    goto loc_001DD380;

    /* nop */
    edi = edi;

loc_001DD380:
    MEM32(eax + 4) = 0;
    eax = MEM32(eax + 0x9C);
    if (TEST_NZ(eax, eax)) goto loc_001DD380; /* jne: not equal / not zero */

loc_001DD391:
    esp += 4; return; /* ret */

}
