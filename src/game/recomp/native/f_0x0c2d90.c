#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C2D90
 * Original: 0x000C2D90 - 0x000C2DEA (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C2D90:
    edx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(edx);
    MEM8(eax + 0xB) = LO8(edx);
    SET_LO16(ecx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(ecx);
    ecx = MEM32(0x557A54);
    PUSH32(esp, esi);
    esi = 2;
    ecx = ecx + esi;
    MEM32(0x557A54) = ecx;
    ecx = MEM32(0x557A58);
    MEM32(eax + 4) = ecx;
    MEM32(0x557A58) = eax;
    MEM32(eax + 0xC) = edx;
    MEM8(eax + 0x250) = LO8(edx);
    ecx = eax + 0x50;
    eax = eax + 0x10;

loc_000C2DD4:
    MEM32(eax + 8) = edx;
    MEM32(eax) = edx;
    MEM16(ecx) = LO16(edx);
    eax = eax + 4;
    ecx = ecx + 0x100;
    esi--;
    if ((esi != 0)) goto loc_000C2DD4; /* jne: not equal / not zero */

loc_000C2DE8:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
