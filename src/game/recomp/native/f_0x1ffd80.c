#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FFD80
 * Original: 0x001FFD80 - 0x001FFDF6 (118 bytes, 48 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFD80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FFD80:
    eax = MEM32(esp + 0xC);
    eax--;
    if ((eax == 0)) goto loc_001FFDE4; /* je: equal / zero */

loc_001FFD87:
    eax--;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_001FFDC8; /* je: equal / zero */

loc_001FFD8B:
    eax = eax - 2;
    if ((eax != 0)) goto loc_001FFDC6; /* jne: not equal / not zero */

loc_001FFD90:
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi << 0x10;
    MEM32(esp + 0x14) = eax;
    eax = eax & 0xFF00;
    edi = edi | eax;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esp + 0x16));
    edi = edi << 8;
    edi = edi | eax;
    eax = ZX8(MEM8(esi + 3));
    edi = edi | eax;
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    MEM32(edx) = ecx;
    POP32(esp, edi);

loc_001FFDC6:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FFDC8:
    esi = MEM32(esp + 0xC);
    SET_LO16(edx, ZX8(MEM8(esi + 1)));
    SET_HI8(edx, MEM8(esi));
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    eax = eax + 2;
    POP32(esp, esi);
    MEM16(eax + -2) = LO16(edx);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_001FFDE4:
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    edx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(edx));
    MEM8(eax) = LO8(edx);
    eax++;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}
