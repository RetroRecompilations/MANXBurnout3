#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B6DB0
 * Original: 0x001B6DB0 - 0x001B6E0A (90 bytes, 30 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B6DB0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    ecx = esi + 0x14;
    PUSH32(esp, 0x3B12F0);
    ebx = 0; /* xor self */
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_001B6DD0:
    esp = esp + 0xC;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    eax = esi + 0x34;
    ecx = 0x18;

loc_001B6DE1:
    MEM32(eax + -8) = edi;
    MEM32(eax + -4) = edi;
    MEM32(eax) = ebx;
    MEM32(eax + 0x238) = edi;
    MEM32(eax + 0x23C) = edi;
    MEM32(eax + 0x240) = ebx;
    eax = eax + 0x18;
    ecx--;
    if ((ecx != 0)) goto loc_001B6DE1; /* jne: not equal / not zero */

loc_001B6E01:
    POP32(esp, edi);
    MEM32(esi + 0x4AC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
