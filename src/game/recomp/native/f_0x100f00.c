#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00100F00
 * Original: 0x00100F00 - 0x0010106C (364 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100F00:
    ecx = MEM32(ebx + 0x3B6C);
    esp = esp - 0xC;
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00100F44; /* jle: less or equal (signed <=) */

loc_00100F10:
    ecx = ebx + 0x1792;

loc_00100F16:
    if (CMP_EQ(MEM16(ecx), LO16(edx))) goto loc_00100F33; /* je: equal / zero */

loc_00100F1B:
    esi = MEM32(ebx + 0x3B6C);
    eax++;
    ecx = ecx + 0x240;
    if (CMP_L(eax, esi)) goto loc_00100F16; /* jl: less (signed <) */

loc_00100F2C:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00100F33:
    eax = eax + eax * 8;
    eax = eax << 6;
    eax = eax + ebx + 0x176C;
    if (TEST_NZ(eax, eax)) goto loc_00100F4B; /* jne: not equal / not zero */

loc_00100F44:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00100F4B:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x26));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ebx + 0x1792;
    MEM32(esp + 0xC) = edi;
    ebp = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_00100F70:
    /* cmp LO16(ecx), 0x5555 - flags set for next jcc */
    SET_LO16(eax, MEM16(esi));
    if (CMP_AE(LO16(ecx), 0x5555)) goto loc_00100F80; /* jae: above or equal (unsigned >=) */

loc_00100F7A:
    if (CMP_A(LO16(eax), 0xAAAA)) goto loc_00100F92; /* ja: above (unsigned >) */

loc_00100F80:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_00100F8D; /* jae: above or equal (unsigned >=) */

loc_00100F86:
    if (CMP_A(LO16(ecx), 0xAAAA)) goto loc_00100FFF; /* ja: above (unsigned >) */

loc_00100F8D:
    if (CMP_BE(LO16(ecx), LO16(eax))) goto loc_00100FFF; /* jbe: below or equal (unsigned <=) */

loc_00100F92:
    ecx = MEM32(ebx + 0x3B6C);
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebp;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ecx + -1;
    if (CMP_NE(eax, edx)) goto loc_00100FB8; /* jne: not equal / not zero */

loc_00100FB0:
    MEM32(ebx + 0x3B6C) = edx;
    goto loc_00100FEE;

loc_00100FB8:
    ecx = ecx + ecx * 8;
    ecx = ecx << 6;
    edx = eax + eax * 8;
    edx = edx << 6;
    esi = ecx + ebx + 0x152C;
    edi = edx + ebx + 0x176C;
    ecx = 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x3B6C);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    eax--;
    MEM32(ebx + 0x3B6C) = eax;

loc_00100FEE:
    ecx = MEM32(esp + 0x14);
    edi--;
    ebp = ebp - 0x240;
    esi = esi - 0x240;

loc_00100FFF:
    eax = MEM32(ebx + 0x3B6C);
    edi++;
    esi = esi + 0x240;
    ebp = ebp + 0x240;
    /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(edi, eax)) goto loc_00100F70; /* jl: less (signed <) */

loc_00101022:
    edx = MEM32(ebx + 0x3B6C);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_LE(edx & edx, 0)) { sub_0010106D(); return; } /* jle: less or equal (signed <=) */

loc_00101032:
    edx = ebx + 0x1792;
    goto loc_00101040;

    /* nop */

loc_00101040:
    SET_LO16(esi, MEM16(esp + 0xC));
    if (CMP_EQ(MEM16(edx), LO16(esi))) goto loc_00101060; /* je: equal / zero */

loc_0010104A:
    esi = MEM32(ebx + 0x3B6C);
    ecx++;
    edx = edx + 0x240;
    if (CMP_L(ecx, esi)) goto loc_00101040; /* jl: less (signed <) */

loc_0010105B:
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00101060:
    eax = ecx + ecx * 8;
    eax = eax << 6;

}
