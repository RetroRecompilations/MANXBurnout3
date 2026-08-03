#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024C3C8
 * Original: 0x0024C3C8 - 0x0024C4F0 (296 bytes, 112 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C3C8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024C3C8:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    /* test LO8(eax), 0x82 - flags set for next jcc */
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(LO8(eax), 0x82)) goto loc_0024C4E1; /* je: equal / zero */

loc_0024C3E2:
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_0024C4E1; /* jne: not equal / not zero */

loc_0024C3EA:
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_0024C406; /* je: equal / zero */

loc_0024C3F0:
    /* test LO8(eax), 0x10 - flags set for next jcc */
    MEM32(esi + 4) = ebx;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0024C4E1; /* je: equal / zero */

loc_0024C3FB:
    edx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi) = edx;
    MEM32(esi + 0xC) = eax;

loc_0024C406:
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 2;
    /* test LO16(eax), 0x10C - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + 0xC) = ebx;
    if (TEST_NZ(LO16(eax), 0x10C)) goto loc_0024C443; /* jne: not equal / not zero */

loc_0024C41E:
    if (CMP_EQ(esi, 0x3C6150)) goto loc_0024C42E; /* je: equal / zero */

loc_0024C426:
    if (CMP_NE(esi, 0x3C6170)) goto loc_0024C439; /* jne: not equal / not zero */

loc_0024C42E:
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024B189(); /* call 0x0024B189 */

loc_0024C434:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0024C440; /* jne: not equal / not zero */

loc_0024C439:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024B145(); /* call 0x0024B145 */

loc_0024C43F:
    POP32(esp, ecx);

loc_0024C440:
    ecx = MEM32(ebp + -4);

loc_0024C443:
    /* test MEM16(esi + 0xC), 0x108 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM16(esi + 0xC), 0x108)) goto loc_0024C4B1; /* je: equal / zero */

loc_0024C44C:
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    edx = eax + 2;
    MEM32(esi) = edx;
    edx = MEM32(esi + 0x18);
    edi = edi - eax;
    edx--;
    edx--;
    /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 4) = edx;
    if (CMP_LE(edi, ebx)) goto loc_0024C471; /* jle: less or equal (signed <=) */

loc_0024C464:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024A3DB(); /* call 0x0024A3DB */

loc_0024C46C:
    MEM32(ebp + 0xC) = eax;
    goto loc_0024C4A3;

loc_0024C471:
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0024C48F; /* je: equal / zero */

loc_0024C476:
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    edx = MEM32(edx * 4 + 0x76B820);
    eax = ecx;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    goto loc_0024C494;

loc_0024C48F:
    eax = 0x3C673C;

loc_0024C494:
    if (TEST_Z(MEM8(eax + 4), 0x20)) goto loc_0024C4A6; /* je: equal / zero */

loc_0024C49A:
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024A1A5(); /* call 0x0024A1A5 */

loc_0024C4A3:
    esp = esp + 0xC;

loc_0024C4A6:
    eax = MEM32(esi + 8);
    ebx = MEM32(ebp + 8);
    MEM16(eax) = LO16(ebx);
    goto loc_0024C4CC;

loc_0024C4B1:
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(ebp + 0xC) = LO16(ebx);
    PUSH32(esp, 0); sub_0024A3DB(); /* call 0x0024A3DB */

loc_0024C4C6:
    esp = esp + 0xC;
    MEM32(ebp + 0xC) = eax;

loc_0024C4CC:
    /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_0024C4D8; /* je: equal / zero */

loc_0024C4D2:
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    goto loc_0024C4E7;

loc_0024C4D8:
    eax = ebx;
    eax = eax & 0xFFFF;
    goto loc_0024C4EC;

loc_0024C4E1:
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;

loc_0024C4E7:
    eax = 0xFFFF;

loc_0024C4EC:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
