#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001B2B0
 * Original: 0x0001B2B0 - 0x0001B395 (229 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B2B0(void)
{

loc_0001B2B0:
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = 0; /* xor self */
    MEM32(edx + 0x43) = eax;
    MEM32(edx + 0x47) = eax;
    MEM32(edx + 0x4B) = eax;
    MEM32(edx + 0x4F) = eax;
    MEM32(edx + 0x53) = eax;
    edi = edx + 0x57;
    ecx = 0x12;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = 0; /* xor self */
    edi = edx + 0xA0;
    ecx = 0x19;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    MEM32(edx + 0x104) = ecx;
    MEM32(edx + 0x108) = ecx;
    MEM32(edx + 0x10C) = ecx;
    MEM32(edx + 0x110) = ecx;
    MEM32(edx + 0x114) = ecx;
    MEM32(edx + 0x118) = ecx;
    MEM32(edx + 0x11C) = ecx;
    MEM32(edx + 0x120) = ecx;
    MEM32(edx + 0x124) = ecx;
    MEM32(edx + 0x128) = eax;
    MEM32(edx + 0x12C) = eax;
    MEM16(edx + 0x130) = LO16(eax);
    MEM32(edx + 0x132) = ecx;
    MEM32(edx + 0x136) = ecx;
    MEM16(edx + 0x13A) = LO16(ecx);
    MEM32(edx + 0x13C) = eax;
    MEM32(edx + 0x140) = eax;
    MEM32(edx + 0x144) = eax;
    MEM32(edx + 0x148) = eax;
    MEM32(edx + 0x14C) = eax;
    MEM32(edx + 0x150) = ecx;
    MEM32(edx + 0x154) = ecx;
    MEM16(edx + 0x158) = LO16(ecx);
    MEM32(edx + 0x15A) = eax;
    MEM8(edx + 0x15E) = LO8(eax);
    eax = edx + 0x15F;
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
