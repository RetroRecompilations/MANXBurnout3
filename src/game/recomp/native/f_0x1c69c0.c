#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C69C0
 * Original: 0x001C69C0 - 0x001C6A1F (95 bytes, 26 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C69C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C69C0:
    if (TEST_NZ(MEM8(0x35D6A8), 0x10)) goto loc_001C69DE; /* jne: not equal / not zero */

loc_001C69C9:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 8;
    esi = 0x4A1AE0;
    edi = 0x3609D8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C69DE:
    PUSH32(esp, 8);
    edx = 0x4A1AE0;
    ecx = 0xBE;
    PUSH32(esp, 0); sub_0034F9A0(); /* call 0x0034F9A0 */

loc_001C69EF:
    eax = MEM32(0x4A1B9C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x752F78);
    PUSH32(esp, eax);
    eax = MEM32(0x4A1AD0);
    ecx = eax + eax * 2;
    edx = MEM32(ecx * 4 + 0x3A7C28);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D7D50(); /* call 0x001D7D50 */

loc_001C6A11:
    esp = esp + 0x10;
    MEM32(0x4A1B9C) = 0;
    esp += 4; return; /* ret */

}
