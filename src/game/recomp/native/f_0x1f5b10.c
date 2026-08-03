#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5B10
 * Original: 0x001F5B10 - 0x001F5BDE (206 bytes, 73 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5B10:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax + edx;
    /* test LO8(ecx), 1 - flags set for next jcc */
    MEM32(edx) = esi;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = eax;
    if (TEST_Z(LO8(ecx), 1)) goto loc_001F5BA2; /* je: equal / zero */

loc_001F5B24:
    if (TEST_Z(eax, eax)) goto loc_001F5B46; /* je: equal / zero */

loc_001F5B28:
    /* test LO8(ecx), 2 - flags set for next jcc */
    ecx = MEM32(esi + 0x40);
    if (TEST_Z(LO8(ecx), 2)) goto loc_001F5B3C; /* je: equal / zero */

loc_001F5B30:
    ecx = ecx & 0xFFFFFFF;
    ecx = ecx + eax + 4;
    goto loc_001F5B51;

loc_001F5B3C:
    ecx = ecx & 0xFFFFFFF;
    ecx = ecx + eax;
    goto loc_001F5B51;

loc_001F5B46:
    /* test LO8(ecx), 2 - flags set for next jcc */
    ecx = edx + 0x2C;
    if (TEST_NZ(LO8(ecx), 2)) goto loc_001F5B51; /* jne: not equal / not zero */

loc_001F5B4E:
    ecx = edx + 0x28;

loc_001F5B51:
    PUSH32(esp, edi);
    eax = ecx + 8;
    MEM32(ecx) = eax;
    edi = MEM32(esi + 0x4C);
    edi = ZX16(MEM16(edi + 0xC));
    edi = edi + edi * 2;
    edi = eax + edi * 4;
    MEM32(ecx + 4) = edi;
    edi = MEM32(esi + 0x4C);
    SET_LO16(edi, MEM16(edi + 0xC));
    if (CMP_BE(LO16(edi) & LO16(edi), 0)) goto loc_001F5B84; /* jbe: below or equal (unsigned <=) */

loc_001F5B73:
    edi = ZX16(LO16(edi));

loc_001F5B76:
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(eax + 8) = eax;
    eax = eax + 0xC;
    edi--;
    if ((edi != 0)) goto loc_001F5B76; /* jne: not equal / not zero */

loc_001F5B84:
    eax = MEM32(ecx + 4);
    ecx = MEM32(esi + 0x4C);
    SET_LO16(esi, MEM16(ecx + 0xE));
    /* test LO16(esi), LO16(esi) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_BE(LO16(esi) & LO16(esi), 0)) goto loc_001F5BA2; /* jbe: below or equal (unsigned <=) */

loc_001F5B94:
    ecx = ZX16(LO16(esi));

loc_001F5B97:
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    eax = eax + 8;
    ecx--;
    if ((ecx != 0)) goto loc_001F5B97; /* jne: not equal / not zero */

loc_001F5BA2:
    /* test MEM8(edx + 0x1C), 2 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(MEM8(edx + 0x1C), 2)) goto loc_001F5BC7; /* je: equal / zero */

loc_001F5BA9:
    ecx = MEM32(edx + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_001F5BBE; /* je: equal / zero */

loc_001F5BB0:
    eax = MEM32(edx);
    eax = MEM32(eax + 0x40);
    eax = eax & 0xFFFFFFF;
    eax = eax + ecx;
    goto loc_001F5BC1;

loc_001F5BBE:
    eax = edx + 0x28;

loc_001F5BC1:
    MEM32(eax) = 0;

loc_001F5BC7:
    eax = edx + 0xC;
    MEM32(eax) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x18) = 0;
    MEM32(edx + 0x14) = 0;
    esp += 4; return; /* ret */

}
