#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114730
 * Original: 0x00114730 - 0x00114905 (469 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114730:
    esp = esp - 0xC;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xE9CA0);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    ebp = 1;
    MEM32(esp + 0x10) = edx;
    edi = edi;

loc_00114750:
    edi = MEM32(eax + 0xE9CA4);
    edi = edi & MEM32(esp + 0x10);
    ecx = ebx;
    ecx = ecx & ebp;
    ecx = ecx | edi;
    if ((ecx == 0)) goto loc_00114776; /* je: equal / zero */

loc_00114762:
    ecx = MEM32(esp + 0x10);
    ecx = (ecx << 1) | (ebp >> (32 - 1)); /* shld */
    ebp = ebp << 1;
    edx++;
    /* cmp edx, 0x10 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(edx, 0x10)) goto loc_00114750; /* jl: less (signed <) */

loc_00114776:
    if (CMP_NE(edx, 0x10)) goto loc_00114889; /* jne: not equal / not zero */

loc_0011477F:
    xmm0.f[0] = MEMF(0x3B1A94); /* movss */
    edi = 0; /* xor self */
    SET_LO8(ebx, 6);
    MEM8(esi) = LO8(ebx);
    MEM32(esp + 0xC) = edi;
    edx = 0; /* xor self */
    ecx = eax + 0xC45A4;
    /* nop */

loc_001147A0:
    ebp = MEM32(ecx + -4);
    if (TEST_Z(ebp, ebp)) goto loc_001147BC; /* je: equal / zero */

loc_001147A7:
    if (CMP_NE(MEM8(ecx + -20), 0)) goto loc_001147BC; /* jne: not equal / not zero */

loc_001147AD:
    /* comiss xmm0.f[0], MEMF(ecx) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx))) goto loc_001147BC; /* jbe: below or equal (unsigned <=) */

loc_001147B2:
    xmm0.f[0] = MEMF(ecx); /* movss */
    MEM32(esp + 0xC) = edx;
    edi = edx;

loc_001147BC:
    edx++;
    ecx = ecx + 0x780;
    if (CMP_L(edx, 0x10)) goto loc_001147A0; /* jl: less (signed <) */

loc_001147C8:
    edx = MEM32(eax + 0x1CB70);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00114817; /* jle: less or equal (signed <=) */

loc_001147D4:
    edx = eax + 0x7C;

loc_001147D7:
    if (CMP_NE(MEM8(edx + -12), LO8(ebx))) goto loc_001147EF; /* jne: not equal / not zero */

loc_001147DC:
    ebp = edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x780);
    ebp = eax + ebp + 0xC4380;
    if (CMP_EQ(MEM32(edx), ebp)) goto loc_001147FF; /* je: equal / zero */

loc_001147EF:
    ebp = MEM32(eax + 0x1CB70);
    ecx++;
    edx = edx + 0x30;
    if (CMP_L(ecx, ebp)) goto loc_001147D7; /* jl: less (signed <) */

loc_001147FD:
    goto loc_00114817;

loc_001147FF:
    edx = ecx + ecx * 2;
    edx = edx << 4;
    ecx = edx + eax;
    MEM8(ecx + 0x71) = 1;
    MEM8(ecx + 0x70) = 8;
    MEM32(ecx + 0x7C) = 0;

loc_00114817:
    edx = MEM32(0x737680);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x780);
    ebx = MEM32(eax + edi + 0xC45A0);
    eax = eax + edi;
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00114843; /* jle: less or equal (signed <=) */

loc_00114832:
    ecx = 0x737690;

loc_00114837:
    if (CMP_EQ(ebx, ecx)) goto loc_00114843; /* je: equal / zero */

loc_0011483B:
    edi++;
    ecx = ecx + 4;
    if (CMP_L(edi, edx)) goto loc_00114837; /* jl: less (signed <) */

loc_00114843:
    ebp = eax + 0xC4380;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00114851:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = edi * 4 + 0x737690;
    MEM32(eax) = edx;
    MEM8(ecx + 3) = 2;
    MEM8(eax + 3) = 1;
    ebx = MEM32(esi + 8);
    edi = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0011A020(); /* call 0x0011A020 */

loc_00114876:
    SET_LO8(eax, MEM8(esp + 0xC));
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebp;
    POP32(esp, ebp);
    MEM8(esi + 2) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00114889:
    ecx = MEM32(esp + 0x10);
    MEM8(esi + 2) = LO8(edx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x780);
    MEM8(esi) = 6;
    ebx = MEM32(eax + 0xE9CA0);
    edi = MEM32(eax + 0xE9CA4);
    ebx = ebx | ebp;
    MEM32(eax + 0xE9CA0) = ebx;
    ebx = MEM32(esp + 0x14);
    edi = edi | ecx;
    MEM32(eax + 0xE9CA4) = edi;
    ecx = MEM32(ebx);
    edi = MEM32(0x737680);
    MEM32(edi * 4 + 0x737690) = ecx;
    edi = MEM32(0x737680);
    ecx = edi * 4 + 0x737690;
    edi++;
    MEM32(0x737680) = edi;
    MEM8(ebx + 3) = 2;
    MEM8(ecx + 3) = 1;
    ebx = MEM32(esi + 8);
    edi = MEM32(esi + 4);
    ebp = edx + eax + 0xC4380;
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_0011A020(); /* call 0x0011A020 */

loc_001148F9:
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebp;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
