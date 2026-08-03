#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00112170
 * Original: 0x00112170 - 0x001121ED (125 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112170:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011218D; /* je: equal / zero */

loc_0011217D:
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = 0x739C60;
    PUSH32(esp, 0); sub_0017DAB0(); /* call 0x0017DAB0 */

loc_0011218C:
    POP32(esp, esi);

loc_0011218D:
    SET_LO8(eax, MEM8(edi + 0x242C));
    ebx = 0; /* xor self */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(edi + 0x13B8) = LO8(ebx);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001121B4; /* je: equal / zero */

loc_0011219F:
    if (CMP_NE(MEM8(ebp + 0x1023), LO8(ebx))) goto loc_001121B4; /* jne: not equal / not zero */

loc_001121A7:
    if (CMP_EQ(MEM32(ebp + 0x1024), ebx)) goto loc_001121B4; /* je: equal / zero */

loc_001121AF:
    PUSH32(esp, 0); sub_00125AC0(); /* call 0x00125AC0 */

loc_001121B4:
    edi = MEM32(edi + 0x2424);
    if (CMP_EQ(edi, ebx)) goto loc_001121E7; /* je: equal / zero */

loc_001121BE:
    /* cmp MEM8(edi + 0x242C), LO8(ebx) - flags set for next jcc */
    MEM8(edi + 0x13B8) = LO8(ebx);
    if (CMP_EQ(MEM8(edi + 0x242C), LO8(ebx))) goto loc_001121E7; /* je: equal / zero */

loc_001121CC:
    eax = MEM32(edi + 0xCC4);
    if (CMP_NE(MEM8(eax + 0x1023), LO8(ebx))) goto loc_001121E7; /* jne: not equal / not zero */

loc_001121DA:
    if (CMP_EQ(MEM32(eax + 0x1024), ebx)) goto loc_001121E7; /* je: equal / zero */

loc_001121E2:
    PUSH32(esp, 0); sub_00125AC0(); /* call 0x00125AC0 */

loc_001121E7:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
