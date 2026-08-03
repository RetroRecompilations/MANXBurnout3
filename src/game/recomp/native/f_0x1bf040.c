#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BF040
 * Original: 0x001BF040 - 0x001BF0AB (107 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF040:
    eax = ecx + 8;
    MEM32(eax) = eax;
    MEM32(ecx + 0xC) = eax;
    eax = ecx + 0x10;
    PUSH32(esp, esi);
    MEM32(eax) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, edi);
    edx = ecx + 0x18;
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx) = ecx;
    MEM32(ecx + 4) = ecx;
    MEM32(edx) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x3C) = eax;
    if (CMP_LE(eax, esi)) goto loc_001BF0A6; /* jle: less or equal (signed <=) */

loc_001BF06D:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    goto loc_001BF075;

loc_001BF073:
    esi = 0; /* xor self */

loc_001BF075:
    eax = MEM32(ecx + 0x40);
    eax = eax + ebx;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x10) = esi;
    esi = eax + 0x28;
    MEM32(esi) = esi;
    MEM32(eax + 0x2C) = esi;
    ebp = MEM32(edx);
    esi = eax + 0x14;
    MEM32(esi) = ebp;
    MEM32(eax + 0x18) = edx;
    eax = MEM32(edx);
    MEM32(eax + 4) = esi;
    MEM32(edx) = esi;
    eax = MEM32(ecx + 0x38);
    edi++;
    ebx = ebx + 0x40;
    if (CMP_L(edi, eax)) goto loc_001BF073; /* jl: less (signed <) */

loc_001BF0A4:
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BF0A6:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
