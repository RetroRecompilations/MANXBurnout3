#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00033F20
 * Original: 0x00033F20 - 0x000340D6 (438 bytes, 93 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00033F20:
    eax = MEM32(0x45D184);
    MEM32(0x75DB70) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x4D91A4) = eax;
    MEM32(0x4D91BC) = eax;
    MEM32(0x4D91D4) = eax;
    MEM32(0x4D91EC) = eax;
    eax = MEM32(0x75DDBC);
    PUSH32(esp, esi);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x75DB60);
    esi = 1;
    if (TEST_NZ(eax, eax)) goto loc_00033F6C; /* jne: not equal / not zero */

loc_00033F55:
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = esi;
    MEM32(0x75DB60) = eax;

loc_00033F6C:
    ecx = MEM32(0x75DC6C);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D6DC) = esi;
    if (TEST_NZ(ecx, ecx)) goto loc_00033F93; /* jne: not equal / not zero */

loc_00033F7C:
    MEM32(eax * 4 + 0x75DE20) = 0x3B;
    eax++;
    MEM32(0x75DC6C) = esi;
    MEM32(0x75DB60) = eax;

loc_00033F93:
    ecx = MEM32(0x75DC70);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D58C) = esi;
    if (TEST_NZ(ecx, ecx)) goto loc_00033FBA; /* jne: not equal / not zero */

loc_00033FA3:
    MEM32(eax * 4 + 0x75DE20) = 0x3C;
    eax++;
    MEM32(0x75DC70) = esi;
    MEM32(0x75DB60) = eax;

loc_00033FBA:
    ecx = MEM32(0x75DC78);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D590) = 0;
    if (TEST_NZ(ecx, ecx)) goto loc_00033FE5; /* jne: not equal / not zero */

loc_00033FCE:
    MEM32(eax * 4 + 0x75DE20) = 0x3E;
    eax++;
    MEM32(0x75DC78) = esi;
    MEM32(0x75DB60) = eax;

loc_00033FE5:
    ecx = MEM32(0x75DC7C);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D598) = esi;
    if (TEST_NZ(ecx, ecx)) goto loc_0003400C; /* jne: not equal / not zero */

loc_00033FF5:
    MEM32(eax * 4 + 0x75DE20) = 0x3F;
    eax++;
    MEM32(0x75DC7C) = esi;
    MEM32(0x75DB60) = eax;

loc_0003400C:
    ecx = MEM32(0x4D65C0);
    PUSH32(esp, ecx);
    MEM32(0x75D59C) = esi;
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_0003401E:
    edx = MEM32(0x4D65C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_0003402A:
    esp = esp + 8;
    edx = 0x4D6730;
    ecx = 0x70;
    PUSH32(esp, 0); sub_0034F8F0(); /* call 0x0034F8F0 */

loc_0003403C:
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x4D9198);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001D7D50(); /* call 0x001D7D50 */

loc_0003404C:
    eax = MEM32(0x75DCA8);
    esp = esp + 0x10;
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x75DB60);
    if (TEST_NZ(eax, eax)) goto loc_00034074; /* jne: not equal / not zero */

loc_0003405D:
    MEM32(eax * 4 + 0x75DE20) = 0x4A;
    eax++;
    MEM32(0x75DCA8) = esi;
    MEM32(0x75DB60) = eax;

loc_00034074:
    ecx = MEM32(0x75DC78);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D5C8) = 0x8006;
    if (TEST_NZ(ecx, ecx)) goto loc_0003409F; /* jne: not equal / not zero */

loc_00034088:
    MEM32(eax * 4 + 0x75DE20) = 0x3E;
    eax++;
    MEM32(0x75DC78) = esi;
    MEM32(0x75DB60) = eax;

loc_0003409F:
    ecx = MEM32(0x75DC7C);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D598) = 0x302;
    MEM32(0x75D59C) = 0x303;
    if (TEST_NZ(ecx, ecx)) goto loc_000340D4; /* jne: not equal / not zero */

loc_000340BD:
    MEM32(eax * 4 + 0x75DE20) = 0x3F;
    eax++;
    MEM32(0x75DC7C) = esi;
    MEM32(0x75DB60) = eax;

loc_000340D4:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
