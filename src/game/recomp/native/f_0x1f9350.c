#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9350
 * Original: 0x001F9350 - 0x001F93C0 (112 bytes, 39 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9350(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F9350:
    eax = MEM32(0x76411C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F935D:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_001F939F; /* je: equal / zero */

loc_001F9369:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_001F9380; /* je: equal / zero */

loc_001F9373:
    edi = edx + 0xC0;
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001F9380:
    ebx = edx + 0x240;
    esi = eax;
    edi = ebx;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = ebx;
    ecx = edx + 0xC0;
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);

loc_001F939F:
    PUSH32(esp, eax);
    edx = edx + 0x15C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00201EC0(); /* call 0x00201EC0 */

loc_001F93AC:
    edx = MEM32(0x76411C);
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F93BF:
    esp += 4; return; /* ret */

}
