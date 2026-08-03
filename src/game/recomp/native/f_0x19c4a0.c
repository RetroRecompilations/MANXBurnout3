#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C4A0
 * Original: 0x0019C4A0 - 0x0019C63D (413 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019C4A0:
    PUSH32(esp, ecx);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x649B7C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0019C541; /* jne: not equal / not zero */

loc_0019C4B5:
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    ebx = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    edx = MEM32(ecx + 0x28);
    eax = eax + ebx;
    SET_LO8(eax, MEM8(eax + ebp));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C4EE; /* je: equal / zero */

loc_0019C4D2:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, edx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C539; /* je: equal / zero */

loc_0019C4EE:
    SET_LO8(eax, MEM8(esi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C5C7; /* je: equal / zero */

loc_0019C4F9:
    eax = MEM32(ecx + 4);
    edi = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    edx = MEM32(ecx + 0x2C);
    eax = eax + edi;
    SET_LO8(eax, MEM8(eax + ebp));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C5C7; /* je: equal / zero */

loc_0019C519:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    ecx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx, edx)) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C5C7; /* jne: not equal / not zero */

loc_0019C539:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0019C541:
    if (CMP_NE(eax, 2)) goto loc_0019C588; /* jne: not equal / not zero */

loc_0019C546:
    eax = MEM32(esi);
    edx = MEM32(eax + 8);
    edi = MEM32(eax + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edx = ZX16(MEM16(edx + 0x60EC30));
    ecx = MEM32(eax + 0x30);
    edx = edx + edi;
    SET_LO8(eax, MEM8(edx + ebp));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C5C7; /* je: equal / zero */

loc_0019C564:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, ecx)) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C5C7; /* jne: not equal / not zero */

loc_0019C580:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0019C588:
    if (CMP_NE(eax, 3)) goto loc_0019C5C7; /* jne: not equal / not zero */

loc_0019C58D:
    eax = MEM32(esi);
    edx = MEM32(eax + 0xC);
    edi = MEM32(eax + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edx = ZX16(MEM16(edx + 0x60EC30));
    ecx = MEM32(eax + 0x34);
    edx = edx + edi;
    SET_LO8(eax, MEM8(edx + ebp));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C5C7; /* je: equal / zero */

loc_0019C5AB:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    eax = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, ecx)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C580; /* je: equal / zero */

loc_0019C5C7:
    SET_LO8(eax, MEM8(esi + 0x1C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esi);
    ebx = MEM32(edi + 0x54);
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019C5D8; /* jne: not equal / not zero */

loc_0019C5D7:
    ebx++;

loc_0019C5D8:
    ecx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0019C635; /* jle: less or equal (signed <=) */

loc_0019C5DE:
    edi = edi;

loc_0019C5E0:
    if (CMP_NE(ecx, 1)) goto loc_0019C5E9; /* jne: not equal / not zero */

loc_0019C5E5:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019C630; /* je: equal / zero */

loc_0019C5E9:
    /* cmp ecx, 3 - flags set for next jcc */
    eax = MEM32(edi + ecx * 4);
    if (CMP_LE(ecx, 3)) goto loc_0019C5F5; /* jle: less or equal (signed <=) */

loc_0019C5F1:
    edx = 0; /* xor self */
    goto loc_0019C5FA;

loc_0019C5F5:
    edx = MEM32(edi + ecx * 4 + 0x28);
    edx++;

loc_0019C5FA:
    esi = MEM32(edi + ecx * 4 + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = ZX16(MEM16(eax + 0x60EC30));
    eax = eax + ebp;
    SET_LO8(eax, MEM8(eax + edx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019C62C; /* je: equal / zero */

loc_0019C611:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    edx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    if (CMP_LE(edx, esi)) goto loc_0019C580; /* jle: less or equal (signed <=) */

loc_0019C62C:
    SET_LO8(eax, MEM8(esp + 0x13));

loc_0019C630:
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_0019C5E0; /* jl: less (signed <) */

loc_0019C635:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
