#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001586A0
 * Original: 0x001586A0 - 0x001586F0 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001586A0:
    ecx = MEM32(eax * 8 + 0x39EBC4);
    edx = MEM32(eax * 8 + 0x39EBC0);
    esp = esp - 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_001586BD:
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 8;
    /* cmp LO8(eax), 0x41 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(LO8(eax), 0x41)) goto loc_001586E7; /* je: equal / zero */

loc_001586C9:
    if (CMP_EQ(LO8(eax), 0x45)) goto loc_001586DE; /* je: equal / zero */

loc_001586CD:
    ecx = 0; /* xor self */
    /* cmp LO8(eax), 0x55 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 0x55)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & 3;
    eax = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001586DE:
    eax = 1;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001586E7:
    eax = 2;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
