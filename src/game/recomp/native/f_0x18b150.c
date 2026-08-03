#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018B150
 * Original: 0x0018B150 - 0x0018B249 (249 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B150(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018B150:
    ecx = 0; /* xor self */
    MEM8(eax + 0x588) = LO8(ecx);
    MEM8(eax + 0x589) = LO8(ecx);
    MEM8(eax + 0x58A) = LO8(ecx);
    MEM8(eax + 0x58B) = LO8(ecx);
    MEM32(eax + 0x584) = 1;
    MEM32(eax + 0x370) = ecx;
    MEM32(eax + 0x374) = ecx;
    MEM32(eax + 0x378) = ecx;
    MEM32(eax + 0x37C) = ecx;
    MEM32(eax + 0x380) = ecx;
    MEM32(eax + 0x384) = ecx;
    MEM32(eax + 0x390) = ecx;
    MEM8(eax + 0x394) = LO8(ecx);
    MEM32(eax + 0x38C) = ecx;
    MEM32(eax + 0x388) = ecx;
    MEM32(eax + 0x3A0) = ecx;
    MEM8(eax + 0x3A4) = LO8(ecx);
    MEM32(eax + 0x39C) = ecx;
    MEM32(eax + 0x398) = ecx;
    PUSH32(esp, esi);
    MEM32(eax + 0x3B0) = ecx;
    MEM8(eax + 0x3B4) = LO8(ecx);
    MEM32(eax + 0x3AC) = ecx;
    MEM32(eax + 0x3A8) = ecx;
    MEM32(eax + 0x3C0) = ecx;
    MEM8(eax + 0x3C4) = LO8(ecx);
    MEM32(eax + 0x3BC) = ecx;
    MEM32(eax + 0x3B8) = ecx;
    edx = eax + 0x3C8;
    esi = 0xC;

loc_0018B204:
    MEM32(edx + 4) = ecx;
    MEM32(edx) = ecx;
    edx = edx + 8;
    esi--;
    if ((esi != 0)) goto loc_0018B204; /* jne: not equal / not zero */

loc_0018B20F:
    edx = eax + 9;
    esi = 0x14;

loc_0018B217:
    MEM32(edx + -9) = ecx;
    MEM8(edx + -1) = LO8(ecx);
    MEM8(edx) = LO8(ecx);
    MEM8(edx + 1) = 0xFF;
    edx = edx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_0018B217; /* jne: not equal / not zero */

loc_0018B229:
    MEM32(eax + 0x1A0) = ecx;
    MEM32(eax + 0x210) = ecx;
    MEM32(eax + 0x280) = ecx;
    MEM32(eax + 0x2F0) = ecx;
    MEM32(eax + 0x360) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
