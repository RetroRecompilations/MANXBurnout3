#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A41F0
 * Original: 0x001A41F0 - 0x001A4253 (99 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A41F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A41F0:
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x36370);
    edx = 0; /* xor self */
    if (CMP_NE(esi, edx)) goto loc_001A4211; /* jne: not equal / not zero */

loc_001A41FD:
    MEM32(eax + 0x36370) = ecx;
    MEM32(eax + 0x36374) = ecx;
    MEM32(ecx + 0x108) = edx;
    goto loc_001A4229;

loc_001A4211:
    esi = MEM32(eax + 0x36374);
    MEM32(esi + 0x108) = ecx;
    MEM32(ecx + 0x108) = edx;
    MEM32(eax + 0x36374) = ecx;

loc_001A4229:
    ecx = ZX8(MEM8(eax + 0x36399));
    MEM8(ecx + eax + 0x36378) = 0x78;
    SET_LO8(ecx, MEM8(eax + 0x36399));
    SET_LO8(ecx, LO8(ecx) + 1);
    /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    MEM8(eax + 0x36399) = LO8(ecx);
    POP32(esp, esi);
    if (CMP_B(LO8(ecx), 0x20)) goto loc_001A4252; /* jb: below (unsigned <) */

loc_001A424C:
    MEM8(eax + 0x36399) = LO8(edx);

loc_001A4252:
    esp += 4; return; /* ret */

}
