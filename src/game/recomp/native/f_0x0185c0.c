#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000185C0
 * Original: 0x000185C0 - 0x000185EE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000185C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000185C0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xEA00);
    ecx = eax + ecx + 0x1C;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = ecx + 8;
    edx = 0xE81;
    PUSH32(esp, edi);

loc_000185D6:
    edi = MEM32(ecx + -4);
    esi = MEM32(ecx + -8);
    esi = esi + edi;
    esi = esi + MEM32(ecx + 4);
    esi = esi + MEM32(ecx);
    eax = eax + esi;
    ecx = ecx + 0x10;
    edx--;
    if ((edx != 0)) goto loc_000185D6; /* jne: not equal / not zero */

loc_000185EB:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
