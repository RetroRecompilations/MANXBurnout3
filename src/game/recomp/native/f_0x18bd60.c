#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018BD60
 * Original: 0x0018BD60 - 0x0018BEC3 (355 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BD60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018BD60:
    SET_LO8(edx, MEM8(eax + 0x589));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_0018BEC2; /* je: equal / zero */

loc_0018BD70:
    if (CMP_EQ(MEM8(eax + 0x58A), LO8(ecx))) goto loc_0018BEC2; /* je: equal / zero */

loc_0018BD7C:
    MEM32(eax + 0x560) = ecx;
    MEM32(eax + 0x584) = 0x18;
    MEM8(eax + 0x589) = LO8(ecx);
    MEM8(eax + 0x58A) = LO8(ecx);
    MEM32(0x73A164) = ecx;
    MEM32(0x73A174) = ecx;
    MEM32(0x73A168) = ecx;
    MEM32(0x73A16C) = ecx;
    MEM32(0x73A184) = ecx;
    MEM32(0x73A170) = ecx;
    MEM32(0x73A178) = ecx;
    MEM32(0x73A17C) = ecx;
    MEM32(0x73A188) = ecx;
    MEM32(0x73A180) = ecx;
    MEM32(eax + 0x370) = ecx;
    MEM32(eax + 0x374) = ecx;
    MEM32(eax + 0x378) = ecx;
    MEM32(eax + 0x37C) = ecx;
    MEM32(eax + 0x380) = ecx;
    MEM32(eax + 0x384) = ecx;
    MEM32(eax + 0x38C) = ecx;
    MEM32(eax + 0x388) = ecx;
    MEM32(eax + 0x390) = ecx;
    MEM8(eax + 0x394) = LO8(ecx);
    MEM32(eax + 0x39C) = ecx;
    MEM32(eax + 0x398) = ecx;
    MEM32(eax + 0x3A0) = ecx;
    MEM8(eax + 0x3A4) = LO8(ecx);
    PUSH32(esp, esi);
    MEM32(eax + 0x3AC) = ecx;
    MEM32(eax + 0x3A8) = ecx;
    MEM32(eax + 0x3B0) = ecx;
    MEM8(eax + 0x3B4) = LO8(ecx);
    MEM32(eax + 0x3BC) = ecx;
    MEM32(eax + 0x3B8) = ecx;
    MEM32(eax + 0x3C0) = ecx;
    MEM8(eax + 0x3C4) = LO8(ecx);
    edx = eax + 0x3C8;
    esi = 0xC;

loc_0018BE64:
    MEM32(edx + 4) = ecx;
    MEM32(edx) = ecx;
    edx = edx + 8;
    esi--;
    if ((esi != 0)) goto loc_0018BE64; /* jne: not equal / not zero */

loc_0018BE6F:
    edx = eax + 9;
    esi = 0x14;

loc_0018BE77:
    MEM32(edx + -9) = ecx;
    MEM8(edx + -1) = LO8(ecx);
    MEM8(edx) = LO8(ecx);
    MEM8(edx + 1) = 0xFF;
    edx = edx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_0018BE77; /* jne: not equal / not zero */

loc_0018BE89:
    MEM32(eax + 0x1A0) = ecx;
    MEM32(eax + 0x210) = ecx;
    MEM32(eax + 0x280) = ecx;
    MEM32(eax + 0x2F0) = ecx;
    MEM32(eax + 0x360) = ecx;
    ecx = MEM32(0x3FA644);
    eax = 2;
    /* cmp ecx, eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(ecx, eax)) goto loc_0018BEBD; /* jne: not equal / not zero */

loc_0018BEB7:
    MEM32(0x3FA4C4) = eax;
    esp += 4; return; /* ret */

loc_0018BEBD:
    MEM32(0x3FA004) = eax;

loc_0018BEC2:
    esp += 4; return; /* ret */

}
