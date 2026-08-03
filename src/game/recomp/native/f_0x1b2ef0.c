#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2EF0
 * Original: 0x001B2EF0 - 0x001B2F84 (148 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2EF0:
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    ebx = eax;
    esi = 0; /* xor self */
    /* nop */

loc_001B2F00:
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 3;
    eax = edx + edx * 4;
    eax = eax << 1;
    ecx = ecx - eax;
    ecx = ecx + 0x30;
    /* test edx, edx - flags set for next jcc */
    MEM16(esp + esi * 2 + 0x10) = LO16(ecx);
    if (TEST_Z(edx, edx)) goto loc_001B2F40; /* je: equal / zero */

loc_001B2F1D:
    SET_LO16(eax, MEM16(esp + 0x38));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001B2F35; /* je: equal / zero */

loc_001B2F27:
    ebp++;
    if (CMP_NE(ebp, 3)) goto loc_001B2F35; /* jne: not equal / not zero */

loc_001B2F2D:
    ebp = 0; /* xor self */
    esi++;
    MEM16(esp + esi * 2 + 0x10) = LO16(eax);

loc_001B2F35:
    edi++;
    esi++;
    /* cmp edi, 0xC - flags set for next jcc */
    ecx = edx;
    if (CMP_L(edi, 0xC)) goto loc_001B2F00; /* jl: less (signed <) */

loc_001B2F3E:
    goto loc_001B2F42;

loc_001B2F40:
    edi++;
    esi++;

loc_001B2F42:
    edx = MEM32(esp + 0x34);
    if (CMP_LE(edx, edi)) goto loc_001B2F61; /* jle: less or equal (signed <=) */

loc_001B2F4A:
    edx = edx - edi;
    ecx = edx;
    ecx = ecx >> 1;
    edi = ebx;
    eax = 0x300030;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */
    ebx = ebx + edx * 2;

loc_001B2F61:
    if (CMP_LE(esi & esi, 0)) goto loc_001B2F75; /* jle: less or equal (signed <=) */

loc_001B2F65:
    SET_LO16(ecx, MEM16(esp + esi * 2 + 0xE));
    esi--;
    MEM16(ebx) = LO16(ecx);
    ebx = ebx + 2;
    if (CMP_G(esi & esi, 0)) goto loc_001B2F65; /* jg: greater (signed >) */

loc_001B2F75:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ebx) = 0;
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}
