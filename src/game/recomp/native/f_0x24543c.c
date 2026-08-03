#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024543C
 * Original: 0x0024543C - 0x002454F2 (182 bytes, 66 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024543C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024543C:
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x374050);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00245448:
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -36) = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_00245457:
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    esi = 0; /* xor self */

loc_0024545D:
    MEM32(ebp + -32) = esi;
    if (CMP_GE(esi, MEM32(0x76B938))) goto loc_002454ED; /* jge: greater or equal (signed >=) */

loc_0024546C:
    eax = MEM32(0x76B934);
    eax = MEM32(eax + esi * 4);
    if (CMP_EQ(eax, edi)) goto loc_002454D4; /* je: equal / zero */

loc_00245478:
    if (TEST_Z(MEM8(eax + 0xC), 0x83)) goto loc_002454D4; /* je: equal / zero */

loc_0024547E:
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00245199(); /* call 0x00245199 */

loc_00245485:
    POP32(esp, ecx);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    edx++;
    MEM32(ebp + -4) = edx;
    eax = MEM32(0x76B934);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), 0x83)) goto loc_002454CC; /* je: equal / zero */

loc_0024549D:
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_002454B3; /* jne: not equal / not zero */

loc_002454A2:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024540E(); /* call 0x0024540E */

loc_002454A8:
    POP32(esp, ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002454CC; /* je: equal / zero */

loc_002454AE:
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    goto loc_002454CC;

loc_002454B3:
    if (CMP_NE(MEM32(ebp + 8), edi)) goto loc_002454CC; /* jne: not equal / not zero */

loc_002454B8:
    if (TEST_Z(LO8(ecx), 2)) goto loc_002454CC; /* je: equal / zero */

loc_002454BD:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024540E(); /* call 0x0024540E */

loc_002454C3:
    POP32(esp, ecx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002454CC; /* jne: not equal / not zero */

loc_002454C9:
    MEM32(ebp + -36) = MEM32(ebp + -36) | eax;

loc_002454CC:
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_002454DC(); /* call 0x002454DC */

loc_002454D4:
    esi++;
    goto loc_0024545D;

    edi = 0; /* xor self */
    esi = MEM32(ebp + -32);
    eax = MEM32(0x76B934);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002451EB(); /* call 0x002451EB */

loc_002454EA:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002454ED:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

}
