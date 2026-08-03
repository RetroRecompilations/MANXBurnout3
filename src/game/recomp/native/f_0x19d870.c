#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019D870
 * Original: 0x0019D870 - 0x0019D988 (280 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019D870:
    eax = MEM32(0x4D5370);
    esp = esp - 0x100;
    if (CMP_NE(eax, 0x4D4798)) goto loc_0019D898; /* jne: not equal / not zero */

loc_0019D882:
    MEM32(ebx + 0xE8) = 0x13;
    MEM32(ebx + 0xEC) = 0x23;
    goto loc_0019D8AC;

loc_0019D898:
    MEM32(ebx + 0xE8) = 0xA;
    MEM32(ebx + 0xEC) = 0x12;

loc_0019D8AC:
    eax = MEM32(ebx + 0xF0);
    eax--;
    if ((eax == 0)) goto loc_0019D8C1; /* je: equal / zero */

loc_0019D8B5:
    eax--;
    if ((eax == 0)) goto loc_0019D8DF; /* je: equal / zero */

loc_0019D8B8:
    eax = eax - 0x16;
    if ((eax != 0)) goto loc_0019D97D; /* jne: not equal / not zero */

loc_0019D8C1:
    eax = MEM32(esp + 0x104);
    ecx = MEM32(esp + 0x108);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0xF0) = 2;

loc_0019D8DF:
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019D973; /* je: equal / zero */

loc_0019D8EA:
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0019D973; /* jne: not equal / not zero */

loc_0019D8F3:
    edx = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x4D3000;
    PUSH32(esp, 0); sub_001575F0(); /* call 0x001575F0 */

loc_0019D907:
    ecx = MEM32(eax * 8 + 0x4D340C);
    edx = MEM32(eax * 8 + 0x4D3408);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001574F0(); /* call 0x001574F0 */

loc_0019D920:
    edi = esp + 8;
    edi--;

loc_0019D925:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019D925; /* jne: not equal / not zero */

loc_0019D92D:
    eax = MEM32(0x3B10F0);
    ecx = MEM32(0x3B10F4);
    edx = MEM32(0x3B10F8);
    esi = MEM32(0x4AED9C);
    MEM32(edi) = eax;
    SET_LO8(eax, MEM8(0x3B10FC));
    MEM32(edi + 4) = ecx;
    PUSH32(esp, 0x11);
    ecx = esp + 0xC;
    MEM32(edi + 8) = edx;
    PUSH32(esp, ecx);
    MEM8(edi + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_001B33A0(); /* call 0x001B33A0 */

loc_0019D960:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx) = eax;
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_0019D973; /* jne: not equal / not zero */

loc_0019D968:
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x100;
    esp += 12; return; /* ret 8 */

loc_0019D973:
    MEM32(ebx + 0xF0) = 2;

loc_0019D97D:
    SET_LO8(eax, 1);
    esp = esp + 0x100;
    esp += 12; return; /* ret 8 */

}
