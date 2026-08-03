#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158D10
 * Original: 0x00158D10 - 0x00158DDB (203 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158D10:
    ecx = MEM32(eax);
    ecx = ecx + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    esi = esi + edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    MEM32(eax) = ecx;
    ecx = MEM32(eax + 0x18);
    edi = edi + edx;
    MEM32(eax + 0x14) = esi;
    esi = MEM32(eax + 0x24);
    ecx = ecx + edx;
    esi = esi + edx;
    MEM32(eax + 0x34) = edi;
    edi = MEM32(eax + 0x20);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    edi = edi + edx;
    MEM32(eax + 0x24) = esi;
    esi = MEM32(eax + 0x2C);
    ecx = ecx + edx;
    esi = esi + edx;
    MEM32(eax + 0x20) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 0x30);
    edi = edi + edx;
    MEM32(eax + 0x2C) = esi;
    esi = MEM32(eax + 0x1C);
    ecx = ecx + edx;
    esi = esi + edx;
    MEM32(eax + 0xC) = edi;
    edi = MEM32(eax + 0x10);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(eax + 0x48);
    edi = edi + edx;
    MEM32(eax + 0x1C) = esi;
    esi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0x10) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00158D9D; /* jle: less or equal (signed <=) */

loc_00158D7A:
    edi = 0; /* xor self */
    /* nop */

loc_00158D80:
    ecx = MEM32(eax + 0x1C);
    ebx = MEM32(ecx + edi);
    ecx = ecx + edi;
    ebx = ebx + edx;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + edx;
    MEM32(ecx + 8) = MEM32(ecx + 8) + edx;
    ecx = MEM32(eax + 0x48);
    esi++;
    edi = edi + 0x14;
    if (CMP_L(esi, ecx)) goto loc_00158D80; /* jl: less (signed <) */

loc_00158D9D:
    esi = MEM32(eax + 0x38);
    ebx = MEM32(eax + 4);
    edi = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x3C);
    esi = esi + edx;
    ebx = ebx + edx;
    edi = edi + edx;
    MEM32(eax + 0x38) = esi;
    esi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x28) = edi;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00158DD7; /* jle: less or equal (signed <=) */

loc_00158DBE:
    edi = 0; /* xor self */

loc_00158DC0:
    ecx = MEM32(eax + 0x38);
    ebx = MEM32(ecx + edi);
    ecx = ecx + edi;
    ebx = ebx + edx;
    MEM32(ecx) = ebx;
    ecx = MEM32(eax + 0x3C);
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, ecx)) goto loc_00158DC0; /* jl: less (signed <) */

loc_00158DD7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
