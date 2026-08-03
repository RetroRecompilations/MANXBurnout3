#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010E610
 * Original: 0x0010E610 - 0x0010E68B (123 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E610(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0010E610:
    eax = MEM32(edx + 0xCC4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(eax + 0x1000) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x1004) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x1008) = ecx;
    SET_LO8(ebx, MEM8(eax + 0x1015));
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    SET_LO8(ebx, LO8(ebx) | 0x18);
    MEM8(eax + 0x1015) = LO8(ebx);
    MEMF(eax + 0x100C) = xmm0.f[0]; /* movss */
    ecx = MEM32(edx + 0xCC4);
    MEM8(ecx + 0x1016) = MEM8(ecx + 0x1016) | 0xF0;
    SET_LO8(ecx, MEM8(eax + 0x1015));
    SET_LO8(ebx, MEM8(eax + 0x1014));
    SET_LO8(ecx, LO8(ecx) & 0xF9);
    SET_LO8(edx, 2);
    POP32(esp, esi);
    /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    MEM8(eax + 0x1015) = LO8(ecx);
    POP32(esp, ebx);
    if (CMP_EQ(LO8(ebx), LO8(edx))) goto loc_0010E68A; /* je: equal / zero */

loc_0010E67B:
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0x1014) = LO8(edx);
    MEM8(eax + 0x1015) = LO8(ecx);

loc_0010E68A:
    esp += 4; return; /* ret */

}
