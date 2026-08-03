#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001462B0
 * Original: 0x001462B0 - 0x00146351 (161 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001462B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001462B0:
    ecx = ecx | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    edx = ebx + 0x144C;
    PUSH32(esp, esi);
    /* nop */

loc_001462C0:
    esi = MEM32(edx + -92);
    if (CMP_EQ(esi, edi)) goto loc_0014633C; /* je: equal / zero */

loc_001462C7:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001462D2; /* jne: not equal / not zero */

loc_001462CC:
    if (TEST_NZ(esi, esi)) goto loc_001462D2; /* jne: not equal / not zero */

loc_001462D0:
    ecx = eax;

loc_001462D2:
    esi = MEM32(edx);
    if (CMP_EQ(esi, edi)) goto loc_00146331; /* je: equal / zero */

loc_001462D8:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001462E4; /* jne: not equal / not zero */

loc_001462DD:
    if (TEST_NZ(esi, esi)) goto loc_001462E4; /* jne: not equal / not zero */

loc_001462E1:
    ecx = eax + 1;

loc_001462E4:
    esi = MEM32(edx + 0x5C);
    if (CMP_EQ(esi, edi)) goto loc_00146334; /* je: equal / zero */

loc_001462EB:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001462F7; /* jne: not equal / not zero */

loc_001462F0:
    if (TEST_NZ(esi, esi)) goto loc_001462F7; /* jne: not equal / not zero */

loc_001462F4:
    ecx = eax + 2;

loc_001462F7:
    esi = MEM32(edx + 0xB8);
    if (CMP_EQ(esi, edi)) goto loc_00146339; /* je: equal / zero */

loc_00146301:
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0014630D; /* jne: not equal / not zero */

loc_00146306:
    if (TEST_NZ(esi, esi)) goto loc_0014630D; /* jne: not equal / not zero */

loc_0014630A:
    ecx = eax + 3;

loc_0014630D:
    eax = eax + 4;
    edx = edx + 0x170;
    if (CMP_L(eax, 0x10)) goto loc_001462C0; /* jl: less (signed <) */

loc_0014631B:
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0014632F; /* je: equal / zero */

loc_00146320:
    if (CMP_GE(ecx, 0x10)) goto loc_0014632F; /* jge: greater or equal (signed >=) */

loc_00146325:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    MEM32(ecx + ebx + 0x13F0) = edi;

loc_0014632F:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00146331:
    eax++;
    goto loc_0014633C;

loc_00146334:
    eax = eax + 2;
    goto loc_0014633C;

loc_00146339:
    eax = eax + 3;

loc_0014633C:
    if (CMP_GE(eax, 0x10)) goto loc_0014631B; /* jge: greater or equal (signed >=) */

loc_00146341:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    MEM32(eax + ebx + 0x13F4) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
