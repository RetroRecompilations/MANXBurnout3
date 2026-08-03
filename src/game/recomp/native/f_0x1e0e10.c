#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0E10
 * Original: 0x001E0E10 - 0x001E0E6E (94 bytes, 29 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E0E10:
    eax = MEM32(0x41AC30);
    /* cmp eax, 0x41AC30 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0x41AC30)) goto loc_001E0E44; /* je: equal / zero */

loc_001E0E1D:
    /* nop */

loc_001E0E20:
    ecx = MEM32(eax);
    edi = eax + -28;
    eax = MEM32(edi + 0x20);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x20);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0); sub_001E0980(); /* call 0x001E0980 */

loc_001E0E38:
    eax = MEM32(0x41AC30);
    if (CMP_NE(eax, 0x41AC30)) goto loc_001E0E20; /* jne: not equal / not zero */

loc_001E0E44:
    edi = MEM32(0x41AC60);
    ecx = MEM32(edi + 0x20);
    edx = MEM32(edi + 0x1C);
    MEM32(ecx) = edx;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_001E0980(); /* call 0x001E0980 */

loc_001E0E60:
    eax = 0; /* xor self */
    MEM32(0x41AC60) = eax;
    MEM32(0x41AC5C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
