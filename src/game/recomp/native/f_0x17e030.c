#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017E030
 * Original: 0x0017E030 - 0x0017E0B3 (131 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E030(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017E030:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0017E03F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017E0AD; /* je: equal / zero */

loc_0017E043:
    SET_LO8(eax, MEM8(esi + ebx + 0x4F4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017E0AD; /* jne: not equal / not zero */

loc_0017E04E:
    SET_LO8(eax, MEM8(ebx + 0x4FA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017E091; /* je: equal / zero */

loc_0017E058:
    ecx = ZX8(MEM8(ebx + 0x4AF));
    edx = MEM32(0x735524);
    eax = MEM32(edx + 0x3AC);
    eax = eax - ecx;
    ecx = MEM32(0x73A1A8);
    SET_LO8(edx, MEM8(ecx + 0x18FA));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0017E07E; /* je: equal / zero */

loc_0017E07D:
    eax++;

loc_0017E07E:
    edx = MEM32(0x73A1AC);
    SET_LO8(ecx, MEM8(edx + 0x18FA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0017E0A9; /* je: equal / zero */

loc_0017E08E:
    eax++;
    goto loc_0017E0A9;

loc_0017E091:
    eax = esi;
    PUSH32(esp, 0); sub_0017DEB0(); /* call 0x0017DEB0 */

loc_0017E098:
    edx = MEM32(0x735524);
    ecx = ZX8(LO8(eax));
    eax = MEM32(edx + 0x3AC);
    eax = eax - ecx;

loc_0017E0A9:
    if (CMP_GE(eax & eax, 0)) goto loc_0017E0AF; /* jge: greater or equal (signed >=) */

loc_0017E0AD:
    eax = 0; /* xor self */

loc_0017E0AF:
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
