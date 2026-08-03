#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017AAC0
 * Original: 0x0017AAC0 - 0x0017AB44 (132 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017AAC0:
    eax = MEM32(0x734FA0);
    if (CMP_LE(eax & eax, 0)) goto loc_0017AB43; /* jle: less or equal (signed <=) */

loc_0017AAC9:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x731FC4;
    ebp = eax;

loc_0017AAD4:
    SET_LO8(eax, MEM8(ebx + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AB39; /* je: equal / zero */

loc_0017AADB:
    edx = MEM32(ebx);
    SET_LO8(eax, MEM8(edx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0017AAEF; /* je: equal / zero */

loc_0017AAE3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AAEF; /* je: equal / zero */

loc_0017AAE7:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0017AAEF; /* je: equal / zero */

loc_0017AAEB:
    if (CMP_NE(LO8(eax), 4)) goto loc_0017AB39; /* jne: not equal / not zero */

loc_0017AAEF:
    ecx = MEM32(ebx + 4);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0017AB04; /* je: equal / zero */

loc_0017AAF8:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AB04; /* je: equal / zero */

loc_0017AAFC:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0017AB04; /* je: equal / zero */

loc_0017AB00:
    if (CMP_NE(LO8(eax), 4)) goto loc_0017AB39; /* jne: not equal / not zero */

loc_0017AB04:
    /* cmp MEM8(edx), 2 - flags set for next jcc */
    esi = MEM32(edx + 0xC);
    edi = MEM32(ecx + 0xC);
    if (CMP_NE(MEM8(edx), 2)) goto loc_0017AB1F; /* jne: not equal / not zero */

loc_0017AB0F:
    eax = MEM32(esi + 0x13F4);
    eax = eax + 0x2480;
    PUSH32(esp, 0); sub_0017AB50(); /* call 0x0017AB50 */

loc_0017AB1F:
    eax = MEM32(ebx + 4);
    if (CMP_NE(MEM8(eax), 2)) goto loc_0017AB39; /* jne: not equal / not zero */

loc_0017AB27:
    eax = MEM32(edi + 0x13F4);
    eax = eax + 0x2480;
    edi = esi;
    PUSH32(esp, 0); sub_0017AB50(); /* call 0x0017AB50 */

loc_0017AB39:
    ebx = ebx + 0x30;
    ebp--;
    if ((ebp != 0)) goto loc_0017AAD4; /* jne: not equal / not zero */

loc_0017AB3F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0017AB43:
    esp += 4; return; /* ret */

}
