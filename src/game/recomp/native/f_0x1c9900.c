#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9900
 * Original: 0x001C9900 - 0x001C99C1 (193 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9900:
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + 0x3A9));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001C99BA; /* jle: less or equal (signed <=) */

loc_001C9916:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_001C9920:
    eax = SX8(LO8(eax));
    eax--;
    /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, 1);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_001C99B7; /* jle: less or equal (signed <=) */

loc_001C9936:
    ecx = esi;

loc_001C9938:
    edi = MEM32(ecx + 4);
    ebx = MEM32(ecx + 0x14);
    /* cmp edi, ebx - flags set for next jcc */
    eax = ecx + 0x10;
    if (CMP_B(edi, ebx)) goto loc_001C9995; /* jb: below (unsigned <) */

loc_001C9945:
    if (CMP_A(edi, ebx)) goto loc_001C994D; /* ja: above (unsigned >) */

loc_001C9947:
    edi = MEM32(ecx);
    if (CMP_BE(edi, MEM32(eax))) goto loc_001C9995; /* jbe: below or equal (unsigned <=) */

loc_001C994D:
    edi = ecx;
    edx = MEM32(edi);
    esi = MEM32(edi + 4);
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebx;
    edi = eax;
    ebp = MEM32(edi);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ebx + 8) = ebp;
    MEM32(eax + 0xC) = edx;
    MEM32(ebx + 0xC) = edi;
    SET_LO8(edx, 0); /* xor self */

loc_001C9995:
    SET_LO8(eax, MEM8(esi + 0x3A9));
    edi = MEM32(esp + 0x10);
    ebx = SX8(LO8(eax));
    edi++;
    ecx = ecx + 0x10;
    ebx--;
    /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(edi, ebx)) goto loc_001C9938; /* jl: less (signed <) */

loc_001C99AF:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001C9920; /* je: equal / zero */

loc_001C99B7:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C99BA:
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}
