#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001643B0
 * Original: 0x001643B0 - 0x00164476 (198 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001643B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001643B0:
    PUSH32(esp, ecx);
    eax = MEM32(0x734FA0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_00164473; /* jle: less or equal (signed <=) */

loc_001643C1:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ecx = 0x731FC4;
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);
    /* nop */

loc_001643D0:
    eax = MEM32(ecx);
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001643E8; /* je: equal / zero */

loc_001643D8:
    if (CMP_EQ(LO8(eax), 1)) goto loc_001643E8; /* je: equal / zero */

loc_001643DC:
    if (CMP_EQ(LO8(eax), 2)) goto loc_001643E8; /* je: equal / zero */

loc_001643E0:
    if (CMP_EQ(LO8(eax), 4)) goto loc_001643E8; /* je: equal / zero */

loc_001643E4:
    SET_LO8(edx, 0); /* xor self */
    goto loc_001643EA;

loc_001643E8:
    SET_LO8(edx, 1);

loc_001643EA:
    eax = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00164403; /* je: equal / zero */

loc_001643F3:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00164403; /* je: equal / zero */

loc_001643F7:
    if (CMP_EQ(LO8(eax), 2)) goto loc_00164403; /* je: equal / zero */

loc_001643FB:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00164403; /* je: equal / zero */

loc_001643FF:
    SET_LO8(eax, 0); /* xor self */
    goto loc_00164405;

loc_00164403:
    SET_LO8(eax, 1);

loc_00164405:
    if (CMP_EQ(MEM8(ecx + 8), LO8(ebx))) goto loc_0016445F; /* je: equal / zero */

loc_0016440A:
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0016445F; /* je: equal / zero */

loc_0016440E:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0016445F; /* je: equal / zero */

loc_00164412:
    eax = MEM32(edi + 0x1030);
    esi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0016445F; /* jle: less or equal (signed <=) */

loc_0016441E:
    eax = edi + 0x32C;

loc_00164424:
    edx = MEM32(eax + -12);
    ebp = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(ebp + 0xC))) goto loc_00164436; /* je: equal / zero */

loc_0016442E:
    ebp = MEM32(ecx + 4);
    if (CMP_NE(edx, MEM32(ebp + 0xC))) goto loc_00164451; /* jne: not equal / not zero */

loc_00164436:
    edx = MEM32(ecx + -4);
    MEM32(eax) = edx;
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(eax + -8) = ebx;
    MEM8(eax + 0x1C) = 1;

loc_00164451:
    edx = MEM32(edi + 0x1030);
    esi++;
    eax = eax + 0x70;
    if (CMP_L(esi, edx)) goto loc_00164424; /* jl: less (signed <) */

loc_0016445F:
    eax = MEM32(esp + 0xC);
    ecx = ecx + 0x30;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_001643D0; /* jne: not equal / not zero */

loc_00164471:
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00164473:
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
