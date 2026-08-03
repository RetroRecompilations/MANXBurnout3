#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B85A0
 * Original: 0x001B85A0 - 0x001B864D (173 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B85A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B85A0:
    /* test MEM8(eax + 2), 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(MEM8(eax + 2), 4)) goto loc_001B863B; /* je: equal / zero */

loc_001B85AF:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ebp + 0xAC;
    /* nop */

loc_001B85C0:
    SET_LO8(ecx, MEM8(esi + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B8611; /* jne: not equal / not zero */

loc_001B85C7:
    ecx = MEM32(esi);
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    if ((LO8(edx) == 0)) goto loc_001B85DC; /* je: equal / zero */

loc_001B85D0:
    SET_LO8(ecx, MEM8(eax));
    if (TEST_NZ(LO8(ecx), 2)) goto loc_001B85DC; /* jne: not equal / not zero */

loc_001B85D7:
    SET_LO8(ecx, LO8(ecx) | 2);
    goto loc_001B85EB;

loc_001B85DC:
    if (CMP_EQ(LO8(edx), 2)) goto loc_001B85ED; /* je: equal / zero */

loc_001B85E1:
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), 2)) goto loc_001B85ED; /* je: equal / zero */

loc_001B85E8:
    SET_LO8(ecx, LO8(ecx) & 0xFD);

loc_001B85EB:
    MEM8(eax) = LO8(ecx);

loc_001B85ED:
    ecx = MEM32(esi);
    SET_LO16(edx, MEM16(ecx + 0xC));
    if (CMP_NE(LO16(edx), MEM16(eax + 0xC))) goto loc_001B8611; /* jne: not equal / not zero */

loc_001B85F9:
    SET_LO8(edx, MEM8(ecx + 3));
    if (CMP_NE(LO8(edx), MEM8(eax + 3))) goto loc_001B8611; /* jne: not equal / not zero */

loc_001B8601:
    edx = MEM32(ecx + 4);
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_001B8611; /* jne: not equal / not zero */

loc_001B8609:
    ecx = MEM32(ecx + 8);
    if (CMP_EQ(ecx, MEM32(eax + 8))) goto loc_001B861C; /* je: equal / zero */

loc_001B8611:
    edi++;
    esi = esi + 0x14;
    if (CMP_L(edi, 0x20)) goto loc_001B85C0; /* jl: less (signed <) */

loc_001B861A:
    goto loc_001B8627;

loc_001B861C:
    edx = edi + edi * 4;
    MEM8(ebp + edx * 4 + 0xB0) = 1;

loc_001B8627:
    SET_LO8(ecx, MEM8(eax));
    /* test LO8(ecx), 2 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(ecx), 2)) goto loc_001B8635; /* je: equal / zero */

loc_001B8630:
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    MEM8(eax) = LO8(ecx);

loc_001B8635:
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001B863B:
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), 2)) goto loc_001B8647; /* je: equal / zero */

loc_001B8642:
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    MEM8(eax) = LO8(ecx);

loc_001B8647:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
