#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00044CF0
 * Original: 0x00044CF0 - 0x00044D63 (115 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00044CF0:
    PUSH32(esp, ebp);
    MEM32(edx + 0x8A04) = 0;
    eax = edx;
    ecx = 0x20;
    PUSH32(esp, edi);
    goto loc_00044D10;

    /* nop */
    /* nop */

loc_00044D10:
    edi = MEM32(edx + 0x8A04);
    ebp = MEM32(edx + 0x8A00);
    MEM32(ebp + edi * 4) = eax;
    MEM32(edx + 0x8A04) = MEM32(edx + 0x8A04) + 1;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    eax = eax + 0x450;
    ecx--;
    if ((ecx != 0)) goto loc_00044D10; /* jne: not equal / not zero */

loc_00044D35:
    edi = edx + 0x8A8C;
    eax = 0; /* xor self */
    ecx = 0x20;
    MEM32(edi + 0x80) = 0;
    MEM32(edi + 0x84) = ecx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(edx + 0x8B14);
    POP32(esp, edi);
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00044D6D(); return; } /* jne: not equal / not zero */

}
