#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6F30
 * Original: 0x001C6F30 - 0x001C7150 (544 bytes, 119 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C6F30:
    eax = MEM32(0x75DC78);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x75DB60);
    edx = 1;
    if (TEST_NZ(eax, eax)) goto loc_001C6F5C; /* jne: not equal / not zero */

loc_001C6F44:
    MEM32(ecx * 4 + 0x75DE20) = 0x3E;
    ecx++;
    MEM32(0x75DC78) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C6F5C:
    eax = MEM32(0x75DC7C);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D598) = 0x302;
    if (TEST_NZ(eax, eax)) goto loc_001C6F87; /* jne: not equal / not zero */

loc_001C6F6F:
    MEM32(ecx * 4 + 0x75DE20) = 0x3F;
    ecx++;
    MEM32(0x75DC7C) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C6F87:
    eax = MEM32(0x75DCA8);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D59C) = 0x303;
    if (TEST_NZ(eax, eax)) goto loc_001C6FB2; /* jne: not equal / not zero */

loc_001C6F9A:
    MEM32(ecx * 4 + 0x75DE20) = 0x4A;
    ecx++;
    MEM32(0x75DCA8) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C6FB2:
    eax = MEM32(0x75DC8C);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D5C8) = 0x8006;
    if (TEST_NZ(eax, eax)) goto loc_001C6FDD; /* jne: not equal / not zero */

loc_001C6FC5:
    MEM32(ecx * 4 + 0x75DE20) = 0x43;
    ecx++;
    MEM32(0x75DC8C) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C6FDD:
    eax = MEM32(0x75D960);
    PUSH32(esp, esi);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x75D940);
    PUSH32(esp, edi);
    MEM32(0x75D5AC) = 0x10101;
    if (TEST_NZ(eax, eax)) goto loc_001C7012; /* jne: not equal / not zero */

loc_001C6FF7:
    esi = eax;
    esi = esi << 4;
    eax++;
    MEM32(0x75D960) = edx;
    MEM32(esi + 0x75D2A0) = 0;
    MEM32(0x75D940) = eax;

loc_001C7012:
    esi = MEM32(0x75D970);
    /* test esi, esi - flags set for next jcc */
    MEM32(0x75D740) = edx;
    if (TEST_NZ(esi, esi)) goto loc_001C7039; /* jne: not equal / not zero */

loc_001C7022:
    esi = eax;
    esi = esi << 4;
    eax++;
    MEM32(0x75D970) = edx;
    MEM32(esi + 0x75D2A0) = edx;
    MEM32(0x75D940) = eax;

loc_001C7039:
    esi = MEM32(0x75D990);
    /* test esi, esi - flags set for next jcc */
    MEM32(0x75D750) = edx;
    if (TEST_NZ(esi, esi)) goto loc_001C7064; /* jne: not equal / not zero */

loc_001C7049:
    esi = eax;
    esi = esi << 4;
    eax++;
    MEM32(0x75D990) = edx;
    MEM32(esi + 0x75D2A0) = 3;
    MEM32(0x75D940) = eax;

loc_001C7064:
    edi = MEM32(0x75D9A0);
    /* test edi, edi - flags set for next jcc */
    esi = 2;
    MEM32(0x75D770) = esi;
    if (TEST_NZ(edi, edi)) goto loc_001C7094; /* jne: not equal / not zero */

loc_001C7079:
    edi = eax;
    edi = edi << 4;
    eax++;
    MEM32(0x75D9A0) = edx;
    MEM32(edi + 0x75D2A0) = 4;
    MEM32(0x75D940) = eax;

loc_001C7094:
    edi = MEM32(0x75D9B0);
    /* test edi, edi - flags set for next jcc */
    MEM32(0x75D780) = esi;
    if (TEST_NZ(edi, edi)) goto loc_001C70BF; /* jne: not equal / not zero */

loc_001C70A4:
    edi = eax;
    edi = edi << 4;
    eax++;
    MEM32(0x75D9B0) = edx;
    MEM32(edi + 0x75D2A0) = 5;
    MEM32(0x75D940) = eax;

loc_001C70BF:
    eax = MEM32(0x75DDCC);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(0x75D790) = esi;
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_001C70E8; /* jne: not equal / not zero */

loc_001C70D0:
    MEM32(ecx * 4 + 0x75DE20) = 0x93;
    ecx++;
    MEM32(0x75DDCC) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C70E8:
    eax = MEM32(0x75DDBC);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D6EC) = 0x901;
    if (TEST_NZ(eax, eax)) goto loc_001C7113; /* jne: not equal / not zero */

loc_001C70FB:
    MEM32(ecx * 4 + 0x75DE20) = 0x8F;
    ecx++;
    MEM32(0x75DDBC) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C7113:
    eax = MEM32(0x75DC88);
    /* test eax, eax - flags set for next jcc */
    MEM32(0x75D6DC) = edx;
    if (TEST_NZ(eax, eax)) goto loc_001C713A; /* jne: not equal / not zero */

loc_001C7122:
    MEM32(ecx * 4 + 0x75DE20) = 0x42;
    ecx++;
    MEM32(0x75DC88) = edx;
    MEM32(0x75DB60) = ecx;

loc_001C713A:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x75D5A8) = 0x1D01;
    PUSH32(esp, 0); sub_0034E1B0(); /* call 0x0034E1B0 */

loc_001C714F:
    esp += 4; return; /* ret */

}
