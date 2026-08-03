#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243DB7
 * Original: 0x00243DB7 - 0x00243E49 (146 bytes, 55 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243DB7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243DB7:
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ebx), 1)) goto loc_00243DC1; /* je: equal / zero */

loc_00243DBE:
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00243DC1:
    if (TEST_Z(LO8(ebx), 4)) goto loc_00243DC9; /* je: equal / zero */

loc_00243DC6:
    eax = eax | 8;

loc_00243DC9:
    if (TEST_Z(LO8(ebx), 8)) goto loc_00243DD1; /* je: equal / zero */

loc_00243DCE:
    eax = eax | 4;

loc_00243DD1:
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_00243DD9; /* je: equal / zero */

loc_00243DD6:
    eax = eax | 2;

loc_00243DD9:
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_00243DE1; /* je: equal / zero */

loc_00243DDE:
    eax = eax | 1;

loc_00243DE1:
    if (TEST_Z(LO8(ebx), 2)) goto loc_00243DEB; /* je: equal / zero */

loc_00243DE6:
    eax = eax | 0x80000;

loc_00243DEB:
    PUSH32(esp, ebp);
    edx = ZX16(LO16(ebx));
    PUSH32(esp, esi);
    ecx = edx;
    esi = 0xC00;
    ecx = ecx & esi;
    PUSH32(esp, edi);
    edi = 0x300;
    ebp = 0x200;
    if ((ecx == 0)) goto loc_00243E27; /* je: equal / zero */

loc_00243E06:
    if (CMP_EQ(ecx, 0x400)) goto loc_00243E22; /* je: equal / zero */

loc_00243E0E:
    if (CMP_EQ(ecx, 0x800)) goto loc_00243E1E; /* je: equal / zero */

loc_00243E16:
    if (CMP_NE(ecx, esi)) goto loc_00243E27; /* jne: not equal / not zero */

loc_00243E1A:
    eax = eax | edi;
    goto loc_00243E27;

loc_00243E1E:
    eax = eax | ebp;
    goto loc_00243E27;

loc_00243E22:
    eax = eax | 0x100;

loc_00243E27:
    edx = edx & edi;
    if ((edx == 0)) goto loc_00243E36; /* je: equal / zero */

loc_00243E2B:
    if (CMP_NE(edx, ebp)) goto loc_00243E3B; /* jne: not equal / not zero */

loc_00243E2F:
    eax = eax | 0x10000;
    goto loc_00243E3B;

loc_00243E36:
    eax = eax | 0x20000;

loc_00243E3B:
    /* test HI8(ebx), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(HI8(ebx), 0x10)) goto loc_00243E48; /* je: equal / zero */

loc_00243E43:
    eax = eax | 0x40000;

loc_00243E48:
    esp += 4; return; /* ret */

}
