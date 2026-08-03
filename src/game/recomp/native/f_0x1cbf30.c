#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBF30
 * Original: 0x001CBF30 - 0x001CC004 (212 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBF30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CBF30:
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_001CBF44; /* jne: not equal / not zero */

loc_001CBF40:
    eax = 0; /* xor self */
    goto loc_001CBF65;

loc_001CBF44:
    esi = MEM32(eax);
    MEM32(edx + 0x10) = esi;
    edx = MEM32(eax);
    if (CMP_EQ(edx, ebx)) goto loc_001CBF52; /* je: equal / zero */

loc_001CBF4F:
    MEM32(edx + 4) = ebx;

loc_001CBF52:
    edx = MEM32(ecx + 0x18);
    if (CMP_NE(edx, ebx)) goto loc_001CBF5D; /* jne: not equal / not zero */

loc_001CBF59:
    MEM32(eax) = ebx;
    goto loc_001CBF62;

loc_001CBF5D:
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;

loc_001CBF62:
    MEM32(ecx + 0x18) = eax;

loc_001CBF65:
    ebp = eax + 8;
    SET_LO8(eax, MEM8(esp + 0x14));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CBFBB; /* je: equal / zero */

loc_001CBF73:
    if (CMP_LE(eax, ebx)) goto loc_001CBFAC; /* jle: less or equal (signed <=) */

loc_001CBF77:
    SET_LO8(eax, 1);
    /* nop */

loc_001CBF80:
    esi = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001CBFA4; /* jle: less or equal (signed <=) */

loc_001CBF89:
    edi = MEM32(ecx + 0x24);
    esi = edi + 4;
    /* nop */

loc_001CBF90:
    if (CMP_EQ(MEM8(esi), 0)) goto loc_001CBFA0; /* je: equal / zero */

loc_001CBF95:
    edx++;
    esi = esi + 8;
    if (CMP_L(edx, MEM32(ecx + 0x1C))) goto loc_001CBF90; /* jl: less (signed <) */

loc_001CBF9E:
    goto loc_001CBFA4;

loc_001CBFA0:
    MEM8(edi + edx * 8 + 4) = LO8(eax);

loc_001CBFA4:
    edx = MEM32(ecx + 0x1C);
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_001CBF80; /* jl: less (signed <) */

loc_001CBFAC:
    edi = MEM32(ecx + 0x20);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 0x1C));
    edx = MEM32(ecx + 0x28);
    MEM32(ecx + 0x30) = ebp;
    goto loc_001CBFE2;

loc_001CBFBB:
    edi = MEM32(ecx + 0x20);
    edx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001CBFE0; /* jle: less or equal (signed <=) */

loc_001CBFC4:
    ebx = MEM32(ecx + 0x24);
    esi = ebx + 4;
    /* nop */

loc_001CBFD0:
    if (CMP_EQ(MEM8(esi), 0)) goto loc_001CBFF7; /* je: equal / zero */

loc_001CBFD5:
    eax = MEM32(ecx + 0x1C);
    edx++;
    esi = esi + 8;
    if (CMP_L(edx, eax)) goto loc_001CBFD0; /* jl: less (signed <) */

loc_001CBFE0:
    edx = 0; /* xor self */

loc_001CBFE2:
    MEM32(ebp + 0x138) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x134) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CBFF7:
    MEM8(ebx + edx * 8 + 4) = 1;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(eax + edx * 8);
    goto loc_001CBFE2;

}
