#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002440FD
 * Original: 0x002440FD - 0x0024414A (77 bytes, 29 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002440FD(void)
{
    int _flags = 0; /* fallback flag var */

loc_002440FD:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    if (TEST_NZ(esi, esi)) goto loc_0024410C; /* jne: not equal / not zero */

loc_0024410B:
    esi++;

loc_0024410C:
    eax = 0; /* xor self */
    if (CMP_A(esi, 0xFFFFFFE0u)) goto loc_00244134; /* ja: above (unsigned >) */

loc_00244113:
    if (CMP_NE(MEM32(0x76B920), 3)) goto loc_00244122; /* jne: not equal / not zero */

loc_0024411C:
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;

loc_00244122:
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001D4076(); /* call 0x001D4076 */

loc_0024412A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D5707(); /* call 0x001D5707 */

loc_00244130:
    if (TEST_NZ(eax, eax)) goto loc_00244148; /* jne: not equal / not zero */

loc_00244134:
    if (CMP_EQ(MEM32(0x41D49C), 0)) goto loc_00244148; /* je: equal / zero */

loc_0024413D:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002486DC(); /* call 0x002486DC */

loc_00244143:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0024410C; /* jne: not equal / not zero */

loc_00244148:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
