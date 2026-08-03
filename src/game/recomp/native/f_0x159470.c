#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00159470
 * Original: 0x00159470 - 0x001594DA (106 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159470:
    eax = MEM32(edi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_001594D9; /* je: equal / zero */

loc_00159477:
    eax = eax + edi;
    MEM32(edi + 0x3C) = eax;
    SET_LO8(eax, MEM8(edi + 0x40));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001594D8; /* jbe: below or equal (unsigned <=) */

loc_00159486:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    /* nop */

loc_00159490:
    eax = MEM32(edi + 0x3C);
    ecx = MEM32(eax + ebx + 8);
    eax = eax + ebx;
    if (TEST_Z(ecx, ecx)) goto loc_001594CA; /* je: equal / zero */

loc_0015949D:
    ecx = ecx + eax;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(eax + 0xC));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001594CA; /* jbe: below or equal (unsigned <=) */

loc_001594AB:
    goto loc_001594B0;

    /* nop */

loc_001594B0:
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + esi * 8);
    /* test edx, edx - flags set for next jcc */
    ecx = ecx + esi * 8;
    if (TEST_Z(edx, edx)) goto loc_001594C1; /* je: equal / zero */

loc_001594BD:
    edx = edx + ecx;
    MEM32(ecx) = edx;

loc_001594C1:
    edx = ZX8(MEM8(eax + 0xC));
    esi++;
    if (CMP_L(esi, edx)) goto loc_001594B0; /* jl: less (signed <) */

loc_001594CA:
    eax = ZX8(MEM8(edi + 0x40));
    ebp++;
    ebx = ebx + 0x10;
    if (CMP_L(ebp, eax)) goto loc_00159490; /* jl: less (signed <) */

loc_001594D6:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001594D8:
    POP32(esp, ebp);

loc_001594D9:
    esp += 4; return; /* ret */

}
