#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00016EF0
 * Original: 0x00016EF0 - 0x0001705F (367 bytes, 95 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016EF0:
    eax = MEM32(esi + 0x2E1DC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x4A4B90));
    if (CMP_GE(eax & eax, 0)) goto loc_00016F56; /* jge: greater or equal (signed >=) */

loc_00016F01:
    SET_LO8(eax, MEM8(0x752D31));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016F56; /* jne: not equal / not zero */

loc_00016F0A:
    SET_LO8(eax, MEM8(0x752D30));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016F56; /* jne: not equal / not zero */

loc_00016F13:
    SET_LO8(eax, MEM8(0x4D53BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016F3C; /* je: equal / zero */

loc_00016F1C:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00016F3C; /* je: equal / zero */

loc_00016F20:
    SET_LO8(eax, MEM8(0x60EA28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016F56; /* jne: not equal / not zero */

loc_00016F29:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016F33:
    MEM8(0x60EA28) = 1;
    goto loc_00016F56;

loc_00016F3C:
    SET_LO8(eax, MEM8(0x60EA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016F56; /* je: equal / zero */

loc_00016F45:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016F4F:
    MEM8(0x60EA28) = 0;

loc_00016F56:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0001705E; /* je: equal / zero */

loc_00016F5F:
    SET_LO8(eax, MEM8(esi + 0x2E1ED));
    if (CMP_EQ(MEM8(esi + 0x2E1EE), LO8(eax))) goto loc_00016F8B; /* je: equal / zero */

loc_00016F6D:
    MEM8(esi + 0x2E1EE) = LO8(eax);
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x7F;
    edx = 0x80000002u;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00016F86; /* jne: not equal / not zero */

loc_00016F81:
    edx = 0x80000001u;

loc_00016F86:
    PUSH32(esp, 0); sub_00015750(); /* call 0x00015750 */

loc_00016F8B:
    eax = MEM32(esi + 0x2E1E0);
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_00016FFA; /* je: equal / zero */

loc_00016F9A:
    MEM32(esi + 0x2E1DC) = eax;
    SET_LO8(eax, MEM8(0x60EA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00016FBA; /* je: equal / zero */

loc_00016FA9:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00016FB3:
    MEM8(0x60EA28) = 0;

loc_00016FBA:
    ecx = 0x40B310;
    PUSH32(esp, 0); sub_001CA680(); /* call 0x001CA680 */

loc_00016FC4:
    if (TEST_NZ(MEM8(0x4116B4), 0x10)) goto loc_00016FDA; /* jne: not equal / not zero */

loc_00016FCD:
    eax = MEM32(0x411680);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_00016FDA:
    edi = esi + 0x706C;
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_001B57A0(); /* call 0x001B57A0 */

loc_00016FE7:
    MEM8(edi + 0xB7C) = 1;
    MEM32(esi + 0x2E1E0) = ebp;
    MEM32(esi + 0x2E1E4) = ebp;

loc_00016FFA:
    ecx = MEM32(esi + 0x2E1DC);
    if (CMP_EQ(ecx, ebp)) goto loc_0001705C; /* je: equal / zero */

loc_00017004:
    eax = MEM32(esi + 0x2E1E4);
    if (CMP_EQ(eax, ebp)) goto loc_0001705C; /* je: equal / zero */

loc_0001700E:
    if (CMP_NE(ecx, eax)) goto loc_00017050; /* jne: not equal / not zero */

loc_00017012:
    ecx = 0x40B310;
    MEM32(esi + 0x2E1DC) = ebp;
    PUSH32(esp, 0); sub_00135710(); /* call 0x00135710 */

loc_00017022:
    edi = esi + 0x706C;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001B57A0(); /* call 0x001B57A0 */

loc_0001702F:
    MEM8(edi + 0xB7C) = 0;
    SET_LO8(eax, MEM8(0x60EA28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00017050; /* jne: not equal / not zero */

loc_0001703F:
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00017049:
    MEM8(0x60EA28) = 1;

loc_00017050:
    MEM32(esi + 0x2E1E0) = ebp;
    MEM32(esi + 0x2E1E4) = ebp;

loc_0001705C:
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001705E:
    esp += 4; return; /* ret */

}
