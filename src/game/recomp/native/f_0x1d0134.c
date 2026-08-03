#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0134
 * Original: 0x001D0134 - 0x001D0172 (62 bytes, 30 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0134(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0134:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    esi = 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D0FC7(); /* call 0x001D0FC7 */

loc_001D0151:
    if (TEST_Z(eax, eax)) goto loc_001D016A; /* je: equal / zero */

loc_001D0155:
    if (CMP_NE(MEM32(ebp + 0xC), esi)) goto loc_001D016A; /* jne: not equal / not zero */

loc_001D015A:
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001D0165; /* je: equal / zero */

loc_001D0161:
    if (CMP_NE(MEM32(edi), eax)) goto loc_001D016A; /* jne: not equal / not zero */

loc_001D0165:
    eax = 0; /* xor self */
    eax++;
    goto loc_001D016C;

loc_001D016A:
    eax = 0; /* xor self */

loc_001D016C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
