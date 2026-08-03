#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017AB50
 * Original: 0x0017AB50 - 0x0017ABA9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017AB50:
    SET_LO8(ecx, MEM8(eax + 0x11A));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0017ABA8; /* je: equal / zero */

loc_0017AB5A:
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x330);
    if (CMP_EQ(esi, 0x40)) goto loc_0017ABA7; /* je: equal / zero */

loc_0017AB66:
    ecx = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_LE(esi & esi, 0)) goto loc_0017AB85; /* jle: less or equal (signed <=) */

loc_0017AB6D:
    edx = eax + 0x230;

loc_0017AB73:
    if (CMP_EQ(MEM32(edx), edi)) goto loc_0017ABA6; /* je: equal / zero */

loc_0017AB77:
    ebx = MEM32(eax + 0x330);
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, ebx)) goto loc_0017AB73; /* jl: less (signed <) */

loc_0017AB85:
    MEM32(eax + esi * 4 + 0x230) = edi;
    edx = MEM32(eax + 0x330);
    ecx = MEM32(eax + 0x334);
    edx++;
    ecx++;
    MEM32(eax + 0x330) = edx;
    MEM32(eax + 0x334) = ecx;

loc_0017ABA6:
    POP32(esp, ebx);

loc_0017ABA7:
    POP32(esp, esi);

loc_0017ABA8:
    esp += 4; return; /* ret */

}
