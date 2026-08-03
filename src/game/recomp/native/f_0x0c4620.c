#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C4620
 * Original: 0x000C4620 - 0x000C4688 (104 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4620(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C4620:
    edx = 0; /* xor self */
    MEM8(ecx + 0xA) = LO8(edx);
    MEM8(ecx + 0xB) = LO8(edx);
    SET_LO16(eax, MEM16(0x557A54));
    MEM16(ecx + 8) = LO16(eax);
    eax = MEM32(0x557A54);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 3;
    eax = eax + esi;
    MEM32(0x557A54) = eax;
    eax = MEM32(0x557A58);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    MEM32(0x557A58) = ecx;
    eax = ecx + 0x10;

loc_000C4657:
    MEM32(eax + -4) = edx;
    MEM32(eax + 8) = edx;
    edi = 0; /* xor self */
    ebx = eax;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = edi;
    MEM32(eax + 0xC) = edx;
    eax = eax + 0x14;
    esi--;
    if ((esi != 0)) goto loc_000C4657; /* jne: not equal / not zero */

loc_000C466F:
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x4C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x54) = edx;
    MEM32(ecx + 0x58) = edx;
    MEM32(ecx + 0x5C) = edx;
    MEM32(ecx + 0x60) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
