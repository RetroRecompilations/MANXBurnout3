#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D068A
 * Original: 0x001D068A - 0x001D06D2 (72 bytes, 33 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D068A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D068A:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_001D06A1; /* je: equal / zero */

loc_001D0696:
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001D06A1:
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    eax = ebp + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D0FC7(); /* call 0x001D0FC7 */

loc_001D06B4:
    if (TEST_Z(eax, eax)) goto loc_001D06BE; /* je: equal / zero */

loc_001D06B8:
    if (CMP_EQ(MEM32(ebp + -4), 2)) goto loc_001D06CA; /* je: equal / zero */

loc_001D06BE:
    if (CMP_EQ(MEM16(ebp + 0xE), 0xFEFF)) goto loc_001D06CA; /* je: equal / zero */

loc_001D06C6:
    eax = 0; /* xor self */
    goto loc_001D06CD;

loc_001D06CA:
    eax = 0; /* xor self */
    eax++;

loc_001D06CD:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
