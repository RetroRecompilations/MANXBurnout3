#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024647B
 * Original: 0x0024647B - 0x00246594 (281 bytes, 105 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024647B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024647B:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    /* test LO8(eax), 0x82 - flags set for next jcc */
    ebx = MEM32(esi + 0x10);
    if (TEST_Z(LO8(eax), 0x82)) goto loc_00246587; /* je: equal / zero */

loc_00246491:
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_00246587; /* jne: not equal / not zero */

loc_00246499:
    if (TEST_Z(LO8(eax), 1)) goto loc_002464B4; /* je: equal / zero */

loc_0024649D:
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00246587; /* je: equal / zero */

loc_002464A9:
    ecx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;

loc_002464B4:
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 2;
    /* test LO16(eax), 0x10C - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(LO16(eax), 0x10C)) goto loc_002464F0; /* jne: not equal / not zero */

loc_002464CE:
    if (CMP_EQ(esi, 0x3C6150)) goto loc_002464DE; /* je: equal / zero */

loc_002464D6:
    if (CMP_NE(esi, 0x3C6170)) goto loc_002464E9; /* jne: not equal / not zero */

loc_002464DE:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024B189(); /* call 0x0024B189 */

loc_002464E4:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_002464F0; /* jne: not equal / not zero */

loc_002464E9:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024B145(); /* call 0x0024B145 */

loc_002464EF:
    POP32(esp, ecx);

loc_002464F0:
    /* test MEM16(esi + 0xC), 0x108 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM16(esi + 0xC), 0x108)) goto loc_0024655D; /* je: equal / zero */

loc_002464F9:
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    ecx = MEM32(esi + 0x18);
    edi = edi - eax;
    ecx--;
    /* test edi, edi - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(edi & edi, 0)) goto loc_0024651D; /* jle: less or equal (signed <=) */

loc_00246510:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024A3DB(); /* call 0x0024A3DB */

loc_00246518:
    MEM32(ebp + 0xC) = eax;
    goto loc_00246550;

loc_0024651D:
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0024653B; /* je: equal / zero */

loc_00246522:
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x76B820);
    eax = ebx;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_00246540;

loc_0024653B:
    eax = 0x3C673C;

loc_00246540:
    if (TEST_Z(MEM8(eax + 4), 0x20)) goto loc_00246553; /* je: equal / zero */

loc_00246546:
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024A1A5(); /* call 0x0024A1A5 */

loc_00246550:
    esp = esp + 0xC;

loc_00246553:
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax) = LO8(ecx);
    goto loc_00246571;

loc_0024655D:
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024A3DB(); /* call 0x0024A3DB */

loc_0024656B:
    esp = esp + 0xC;
    MEM32(ebp + 0xC) = eax;

loc_00246571:
    /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_0024657D; /* je: equal / zero */

loc_00246577:
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    goto loc_0024658D;

loc_0024657D:
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    goto loc_00246590;

loc_00246587:
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;

loc_0024658D:
    eax = eax | 0xFFFFFFFFu;

loc_00246590:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
