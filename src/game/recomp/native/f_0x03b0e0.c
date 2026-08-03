#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B0E0
 * Original: 0x0003B0E0 - 0x0003B17B (155 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B0E0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(edx + 0x20A04) = 0;
    ecx = edx;
    eax = edx + 0x20011;
    esi = 0x80;
    goto loc_0003B100;

    /* nop */

loc_0003B100:
    ebx = MEM32(edx + 0x20A04);
    ebp = MEM32(edx + 0x20A00);
    edi = eax + -17;
    MEM32(ebp + ebx * 4) = edi;
    MEM32(edx + 0x20A04) = MEM32(edx + 0x20A04) + 1;
    edi = ecx + 0x10000;
    MEM32(eax + -9) = ecx;
    MEM8(eax) = 0xFF;
    MEM32(eax + -5) = edi;
    ecx = ecx + 0x200;
    eax = eax + 0x14;
    esi--;
    if ((esi != 0)) goto loc_0003B100; /* jne: not equal / not zero */

loc_0003B134:
    esi = edx + 0x20E10;
    ebx = 5;
    ebp = 0; /* xor self */

loc_0003B141:
    MEM32(esi + -4) = ebp;
    MEM32(esi) = 0x80;
    edi = esi + -516;
    eax = 0; /* xor self */
    ecx = 0x80;
    esi = esi + 0x208;
    ebx--;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if ((ebx != 0)) goto loc_0003B141; /* jne: not equal / not zero */

loc_0003B162:
    /* cmp MEM32(edx + 0x21638), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(edx + 0x21634) = ebp;
    SET_LO8(eax, 1);
    if (CMP_NE(MEM32(edx + 0x21638), 0xFFFFFFFFu)) goto loc_0003B179; /* jne: not equal / not zero */

loc_0003B173:
    MEM32(edx + 0x21638) = ebp;

loc_0003B179:
    POP32(esp, edi);
    POP32(esp, esi);

}
