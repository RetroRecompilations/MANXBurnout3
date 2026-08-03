#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6A20
 * Original: 0x001C6A20 - 0x001C6AEF (207 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C6A20:
    if (CMP_EQ(esi, MEM32(0x4A1AD0))) goto loc_001C6AEE; /* je: equal / zero */

loc_001C6A2C:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C6A3A; /* jbe: below or equal (unsigned <=) */

loc_001C6A35:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C6A3A:
    edx = MEM32(0x75DC88);
    eax = esi + esi * 2;
    eax = eax << 2;
    /* test edx, edx - flags set for next jcc */
    ecx = MEM32(eax + 0x3A7C2C);
    if (TEST_NZ(edx, edx)) goto loc_001C6A72; /* jne: not equal / not zero */

loc_001C6A50:
    edx = MEM32(0x75DB60);
    MEM32(edx * 4 + 0x75DE20) = 0x42;
    edx++;
    MEM32(0x75DC88) = 1;
    MEM32(0x75DB60) = edx;

loc_001C6A72:
    eax = MEM32(eax + 0x3A7C30);
    MEM32(0x75D5A8) = ecx;
    ecx = MEM32(0x75DA20);
    if (TEST_NZ(ecx, ecx)) goto loc_001C6AAE; /* jne: not equal / not zero */

loc_001C6A88:
    ecx = MEM32(0x75D940);
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75DA20) = 1;
    MEM32(edx + 0x75D2A0) = 0xC;
    MEM32(0x75D940) = ecx;

loc_001C6AAE:
    ecx = MEM32(0x75DA60);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D800) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_001C6AE3; /* jne: not equal / not zero */

loc_001C6ABD:
    ecx = MEM32(0x75D940);
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75DA60) = 1;
    MEM32(edx + 0x75D2A0) = 0x10;
    MEM32(0x75D940) = ecx;

loc_001C6AE3:
    MEM32(0x75D840) = eax;
    MEM32(0x4A1AD0) = esi;

loc_001C6AEE:
    esp += 4; return; /* ret */

}
