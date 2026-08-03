#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C82E0
 * Original: 0x001C82E0 - 0x001C83C4 (228 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C82E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C82E0:
    if (CMP_EQ(esi, MEM32(0x4A1B5C))) goto loc_001C83C3; /* je: equal / zero */

loc_001C82EC:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C82FA; /* jbe: below or equal (unsigned <=) */

loc_001C82F5:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C82FA:
    eax = MEM32(0x75DC78);
    ecx = MEM32(esi * 4 + 0x4A1A90);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x75DB60);
    edx = 1;
    if (TEST_NZ(eax, eax)) goto loc_001C832B; /* jne: not equal / not zero */

loc_001C8314:
    MEM32(eax * 4 + 0x75DE20) = 0x3E;
    eax++;
    MEM32(0x75DC78) = edx;
    MEM32(0x75DB60) = eax;

loc_001C832B:
    PUSH32(esp, edi);
    edi = MEM32(0x75DC7C);
    /* test edi, edi - flags set for next jcc */
    MEM32(0x75D598) = ecx;
    ecx = MEM32(esi * 4 + 0x4A1AB0);
    if (TEST_NZ(edi, edi)) goto loc_001C835A; /* jne: not equal / not zero */

loc_001C8343:
    MEM32(eax * 4 + 0x75DE20) = 0x3F;
    eax++;
    MEM32(0x75DC7C) = edx;
    MEM32(0x75DB60) = eax;

loc_001C835A:
    edi = MEM32(0x75DCA8);
    /* test edi, edi - flags set for next jcc */
    MEM32(0x75D59C) = ecx;
    ecx = MEM32(esi * 4 + 0x4A1B00);
    if (TEST_NZ(edi, edi)) goto loc_001C8388; /* jne: not equal / not zero */

loc_001C8371:
    MEM32(eax * 4 + 0x75DE20) = 0x4A;
    eax++;
    MEM32(0x75DCA8) = edx;
    MEM32(0x75DB60) = eax;

loc_001C8388:
    edi = MEM32(0x75DC8C);
    MEM32(0x75D5C8) = ecx;
    ecx = MEM32(esi * 4 + 0x4A1B34);
    /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(edi, edi)) goto loc_001C83B7; /* jne: not equal / not zero */

loc_001C83A0:
    MEM32(eax * 4 + 0x75DE20) = 0x43;
    eax++;
    MEM32(0x75DC8C) = edx;
    MEM32(0x75DB60) = eax;

loc_001C83B7:
    MEM32(0x75D5AC) = ecx;
    MEM32(0x4A1B5C) = esi;

loc_001C83C3:
    esp += 4; return; /* ret */

}
