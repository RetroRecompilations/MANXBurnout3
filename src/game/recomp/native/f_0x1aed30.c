#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AED30
 * Original: 0x001AED30 - 0x001AED62 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AED30:
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_001AED42:
    SET_LO8(ecx, MEM8(edi + 0xB));
    eax = edi + 0xB;
    esp = esp + 8;
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_001AED60; /* jne: not equal / not zero */

loc_001AED50:
    if (CMP_B(eax, edi)) goto loc_001AED60; /* jb: below (unsigned <) */

loc_001AED54:
    MEM8(eax) = 0;
    SET_LO8(ecx, MEM8(eax + -1));
    eax--;
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_001AED50; /* je: equal / zero */

loc_001AED60:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
