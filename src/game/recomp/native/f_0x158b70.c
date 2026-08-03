#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00158B70
 * Original: 0x00158B70 - 0x00158CB6 (326 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00158B70:
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    ecx = ecx + edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    edi = edi + edx;
    MEM32(esi + 0x34) = ecx;
    ecx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_00158BB1; /* jle: less or equal (signed <=) */

loc_00158B8B:
    edi = 0; /* xor self */
    /* nop */

loc_00158B90:
    eax = MEM32(esi + 0x34);
    ebx = MEM32(eax + edi + 8);
    eax = eax + edi;
    ebx = ebx + edx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edx;
    MEM32(eax) = MEM32(eax) + edx;
    MEM32(eax + 4) = MEM32(eax + 4) + edx;
    eax = MEM32(esi + 0x38);
    ecx++;
    edi = edi + 0x18;
    if (CMP_L(ecx, eax)) goto loc_00158B90; /* jl: less (signed <) */

loc_00158BB1:
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x40);
    ecx = ecx + edx;
    MEM32(esi + 0x3C) = ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00158BDE; /* jle: less or equal (signed <=) */

loc_00158BC2:
    edi = 0; /* xor self */

loc_00158BC4:
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(eax + edi);
    eax = eax + edi;
    ebx = ebx + edx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = MEM32(eax + 4) + edx;
    eax = MEM32(esi + 0x40);
    ecx++;
    edi = edi + 0x10;
    if (CMP_L(ecx, eax)) goto loc_00158BC4; /* jl: less (signed <) */

loc_00158BDE:
    edi = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(esi + 0x50);
    edi = edi + edx;
    MEM32(esi + 0x44) = edi;
    ecx = ecx + edx;
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x4C) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00158C15; /* jle: less or equal (signed <=) */

loc_00158BF7:
    ebx = 0; /* xor self */
    /* nop */

loc_00158C00:
    eax = MEM32(esi + 0x4C);
    eax = eax + ebx;
    PUSH32(esp, 0); sub_00158D10(); /* call 0x00158D10 */

loc_00158C0A:
    eax = MEM32(esi + 0x50);
    edi++;
    ebx = ebx + 0x58;
    if (CMP_L(edi, eax)) goto loc_00158C00; /* jl: less (signed <) */

loc_00158C15:
    ecx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x60);
    ebx = MEM32(esi + 0x6C);
    edi = MEM32(esi + 0x78);
    ecx = ecx + edx;
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x84);
    eax = eax + edx;
    ecx = ecx + edx;
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esi + 0x90);
    ebx = ebx + edx;
    edi = edi + edx;
    MEM32(esi + 0x84) = ecx;
    ecx = MEM32(esi + 0xA4);
    eax = eax + edx;
    ecx = ecx + edx;
    MEM32(esi + 0x6C) = ebx;
    ebx = MEM32(esi + 0xAC);
    MEM32(esi + 0x78) = edi;
    edi = MEM32(esi + 0x9C);
    MEM32(esi + 0x90) = eax;
    eax = MEM32(esi + 0xA8);
    ebx = ebx + edx;
    edi = edi + edx;
    MEM32(esi + 0xA4) = ecx;
    ecx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0x9C) = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_00158CB3; /* jle: less or equal (signed <=) */

loc_00158C87:
    edi = 0; /* xor self */
    /* nop */

loc_00158C90:
    eax = MEM32(esi + 0xA4);
    ebx = MEM32(eax + edi);
    eax = eax + edi;
    ebx = ebx + edx;
    MEM32(eax) = ebx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edx;
    eax = MEM32(esi + 0xA8);
    ecx++;
    edi = edi + 0x18;
    if (CMP_L(ecx, eax)) goto loc_00158C90; /* jl: less (signed <) */

loc_00158CB3:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
