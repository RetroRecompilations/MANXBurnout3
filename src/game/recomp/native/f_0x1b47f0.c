#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B47F0
 * Original: 0x001B47F0 - 0x001B49B7 (455 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B47F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001B47F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x214;
    SET_LO8(eax, MEM8(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(LO8(eax), 1)) goto loc_001B4831; /* je: equal / zero */

loc_001B4816:
    ebx = 3;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = 0x80000000u;
    MEM32(esp + 0x14) = 1;
    goto loc_001B4873;

loc_001B4831:
    ecx = 2;
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_001B4851; /* je: equal / zero */

loc_001B483A:
    ebx = 4;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = 0x40000000;
    MEM32(esp + 0x14) = ecx;
    goto loc_001B486E;

loc_001B4851:
    if (TEST_Z(LO8(eax), 4)) goto loc_001B4873; /* je: equal / zero */

loc_001B4855:
    ebx = 4;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = 0xC0000000u;
    MEM32(esp + 0x14) = 3;

loc_001B486E:
    esi = 1;

loc_001B4873:
    eax = 0; /* xor self */
    ecx = 0x41;
    edi = esp + 0x18;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 0xC);
    eax = edi;
    edx = eax + 1;

loc_001B4888:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4888; /* jne: not equal / not zero */

loc_001B488F:
    PUSH32(esp, 0x80);
    ecx = esp + 0x124;
    PUSH32(esp, ecx);
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D1D5F(); /* call 0x001D1D5F */

loc_001B48A9:
    PUSH32(esp, 0x104);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = esp + 0x130;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AADC4);
    PUSH32(esp, 0); sub_001D0A32(); /* call 0x001D0A32 */

loc_001B48C7:
    if (TEST_NZ(eax, eax)) goto loc_001B498C; /* jne: not equal / not zero */

loc_001B48CF:
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xBFC);
    edx = esp + 0x18;
    eax = eax + 0x26;
    /* nop */

loc_001B48E0:
    SET_LO8(ecx, MEM8(edx));
    edx++;
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B48E0; /* jne: not equal / not zero */

loc_001B48EA:
    eax = esp + 0x18;
    edx = eax + 1;

loc_001B48F1:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B48F1; /* jne: not equal / not zero */

loc_001B48F8:
    eax = eax - edx;
    edx = esp + eax + 0x18;
    ecx = edi;
    edx = edx - edi;

loc_001B4902:
    SET_LO8(eax, MEM8(ecx));
    MEM8(edx + ecx) = LO8(eax);
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B4902; /* jne: not equal / not zero */

loc_001B490C:
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D0E3C(); /* call 0x001D0E3C */

loc_001B492E:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx) = eax;
    eax = MEM32(esi + 0xBFC);
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) goto loc_001B496E; /* jne: not equal / not zero */

loc_001B4941:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4946:
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B494B:
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x134) = eax;
    edx = MEM32(esi + 0xBFC);
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001B496E:
    eax = MEM32(esi + 0xBFC);
    MEM32(eax + 0x130) = 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001B498C:
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xBFC);
    ecx = 0xD;
    MEM32(edx + 0x134) = ecx;
    eax = MEM32(eax + 0xBFC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x130) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
