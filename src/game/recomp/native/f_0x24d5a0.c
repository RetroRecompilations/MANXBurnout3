#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024D5A0
 * Original: 0x0024D5A0 - 0x0024D5D8 (56 bytes, 21 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D5A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024D5A0:
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0024D5BC; /* je: equal / zero */

loc_0024D5AB:
    ecx = MEM32(esp + 8);
    /* nop */

loc_0024D5B0:
    if (CMP_EQ(MEM32(eax + 8), ecx)) goto loc_0024D5C0; /* je: equal / zero */

loc_0024D5B5:
    eax = MEM32(eax + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0024D5B0; /* jne: not equal / not zero */

loc_0024D5BC:
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0024D5C0:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}
