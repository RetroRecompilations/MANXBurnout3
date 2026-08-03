#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000E3E90
 * Original: 0x000E3E90 - 0x000E3F0E (126 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3E90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3E90:
    edx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(edx);
    MEM8(eax + 0xB) = LO8(edx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    MEM32(0x557A54) = MEM32(0x557A54) + 5;
    ecx = MEM32(0x557A58);
    PUSH32(esp, ebp);
    MEM32(eax + 4) = ecx;
    MEM32(0x557A58) = eax;
    PUSH32(esp, esi);
    MEM32(eax + 0x12C) = edx;
    MEM32(eax + 0x130) = edx;
    MEM32(eax + 0x134) = edx;
    ecx = eax + 0x1D0;
    PUSH32(esp, edi);
    eax = eax + 0x14;
    esi = 8;
    goto loc_000E3EE0;

    /* nop */

loc_000E3EE0:
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    edi = 0; /* xor self */
    MEM8(ecx + -8) = 0xC;
    MEM8(ecx) = 5;
    ebp = eax + 8;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = edi;
    eax = eax + 0x24;
    MEM32(ebp + 0xC) = edi;
    ecx++;
    esi--;
    MEM32(ebp + 0x10) = edi;
    if ((esi != 0)) goto loc_000E3EE0; /* jne: not equal / not zero */

loc_000E3F0D:
    POP32(esp, edi);

}
