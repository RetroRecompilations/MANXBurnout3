#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018280
 * Original: 0x00018280 - 0x000182D6 (86 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018280:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    edi = esp + 8;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_00017BB0(); /* call 0x00017BB0 */

loc_00018292:
    ecx = edi;
    edx = 4;
    /* nop */

loc_000182A0:
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_000182C8; /* je: equal / zero */

loc_000182A6:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000182C6; /* jne: not equal / not zero */

loc_000182AA:
    eax = MEM32(eax + 4);
    SET_LO8(ebx, MEM8(eax + 8));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000182C2; /* je: equal / zero */

loc_000182B4:
    SET_LO8(ebx, MEM8(eax + 0x39));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000182C2; /* je: equal / zero */

loc_000182BB:
    SET_LO8(ebx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000182C6; /* je: equal / zero */

loc_000182C2:
    SET_LO8(ebx, 0); /* xor self */
    goto loc_000182C8;

loc_000182C6:
    SET_LO8(ebx, 1);

loc_000182C8:
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000182A0; /* jne: not equal / not zero */

loc_000182CE:
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
