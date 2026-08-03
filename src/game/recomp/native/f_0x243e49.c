#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243E49
 * Original: 0x00243E49 - 0x00243ED7 (142 bytes, 49 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243E49(void)
{
    int _flags = 0; /* fallback flag var */

loc_00243E49:
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_00243E51; /* je: equal / zero */

loc_00243E50:
    eax++;

loc_00243E51:
    if (TEST_Z(LO8(ebx), 8)) goto loc_00243E59; /* je: equal / zero */

loc_00243E56:
    eax = eax | 4;

loc_00243E59:
    if (TEST_Z(LO8(ebx), 4)) goto loc_00243E61; /* je: equal / zero */

loc_00243E5E:
    eax = eax | 8;

loc_00243E61:
    if (TEST_Z(LO8(ebx), 2)) goto loc_00243E69; /* je: equal / zero */

loc_00243E66:
    eax = eax | 0x10;

loc_00243E69:
    if (TEST_Z(LO8(ebx), 1)) goto loc_00243E71; /* je: equal / zero */

loc_00243E6E:
    eax = eax | 0x20;

loc_00243E71:
    if (TEST_Z(ebx, 0x80000)) goto loc_00243E7C; /* je: equal / zero */

loc_00243E79:
    eax = eax | 2;

loc_00243E7C:
    ecx = ebx;
    edx = 0x300;
    ecx = ecx & edx;
    PUSH32(esp, esi);
    esi = 0x200;
    if ((ecx == 0)) goto loc_00243EB0; /* je: equal / zero */

loc_00243E8D:
    if (CMP_EQ(ecx, 0x100)) goto loc_00243EAB; /* je: equal / zero */

loc_00243E95:
    if (CMP_EQ(ecx, esi)) goto loc_00243EA4; /* je: equal / zero */

loc_00243E99:
    if (CMP_NE(ecx, edx)) goto loc_00243EB0; /* jne: not equal / not zero */

loc_00243E9D:
    eax = eax | 0xC00;
    goto loc_00243EB0;

loc_00243EA4:
    eax = eax | 0x800;
    goto loc_00243EB0;

loc_00243EAB:
    eax = eax | 0x400;

loc_00243EB0:
    ecx = ebx;
    ecx = ecx & 0x30000;
    if ((ecx == 0)) goto loc_00243EC6; /* je: equal / zero */

loc_00243EBA:
    if (CMP_NE(ecx, 0x10000)) goto loc_00243EC8; /* jne: not equal / not zero */

loc_00243EC2:
    eax = eax | esi;
    goto loc_00243EC8;

loc_00243EC6:
    eax = eax | edx;

loc_00243EC8:
    /* test ebx, 0x40000 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ebx, 0x40000)) goto loc_00243ED6; /* je: equal / zero */

loc_00243ED1:
    eax = eax | 0x1000;

loc_00243ED6:
    esp += 4; return; /* ret */

}
