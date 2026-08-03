#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2F90
 * Original: 0x001B2F90 - 0x001B2FE9 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B2F90:
    eax = MEM32(esi);
    SET_LO16(edx, MEM16(eax));
    /* test LO16(edx), LO16(edx) - flags set for next jcc */
    ecx = MEM32(edi);
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_001B2FC3; /* je: equal / zero */

loc_001B2F9C:
    /* nop */

loc_001B2FA0:
    eax = eax + 2;
    if (CMP_NE(LO16(edx), 0x25)) goto loc_001B2FB5; /* jne: not equal / not zero */

loc_001B2FA9:
    SET_LO16(edx, MEM16(eax));
    if (CMP_NE(LO16(edx), 0x25)) goto loc_001B2FCF; /* jne: not equal / not zero */

loc_001B2FB2:
    eax = eax + 2;

loc_001B2FB5:
    MEM16(ecx) = LO16(edx);
    ecx = ecx + 2;

loc_001B2FBB:
    SET_LO16(edx, MEM16(eax));
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_001B2FA0; /* jne: not equal / not zero */

loc_001B2FC3:
    MEM16(ecx) = 0;
    MEM32(edi) = ecx;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B2FCF:
    if (CMP_B(LO16(edx), 0x31)) goto loc_001B2FBB; /* jb: below (unsigned <) */

loc_001B2FD5:
    if (CMP_A(LO16(edx), 0x39)) goto loc_001B2FBB; /* ja: above (unsigned >) */

loc_001B2FDB:
    eax = eax + 2;
    MEM32(edi) = ecx;
    MEM32(esi) = eax;
    eax = ZX16(LO16(edx));
    eax = eax - 0x30;
    esp += 4; return; /* ret */

}
