#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001585A0
 * Original: 0x001585A0 - 0x001585E3 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001585A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001585A0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = 0x768040D4;
    ecx = 0x135D8070;
    edx = 0x39E828;
    /* nop */

loc_001585C0:
    if (CMP_NE(esi, ebx)) goto loc_001585C8; /* jne: not equal / not zero */

loc_001585C4:
    if (CMP_EQ(ecx, edi)) goto loc_001585DD; /* je: equal / zero */

loc_001585C8:
    eax = MEM32(edx + 8);
    ecx = MEM32(edx + 0xC);
    edx = edx + 8;
    esi = eax;
    eax = eax | ecx;
    if ((eax != 0)) goto loc_001585C0; /* jne: not equal / not zero */

loc_001585D7:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001585DD:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
