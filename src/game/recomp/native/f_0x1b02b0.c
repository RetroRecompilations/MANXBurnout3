#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B02B0
 * Original: 0x001B02B0 - 0x001B0323 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B02B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B02B0:
    eax = MEM32(ecx + 0x20);
    if (TEST_Z(eax, eax)) goto loc_001B02BC; /* je: equal / zero */

loc_001B02B7:
    eax = eax + ecx;
    MEM32(ecx + 0x20) = eax;

loc_001B02BC:
    eax = MEM32(ecx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_001B02C8; /* je: equal / zero */

loc_001B02C3:
    eax = eax + ecx;
    MEM32(ecx + 0x24) = eax;

loc_001B02C8:
    eax = MEM32(ecx + 0x2C);
    edx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001B02FE; /* je: equal / zero */

loc_001B02D2:
    if (CMP_BE(MEM16(ecx + 0x28), LO16(edx))) goto loc_001B0321; /* jbe: below or equal (unsigned <=) */

loc_001B02D8:
    goto loc_001B02E0;

    /* nop */

loc_001B02E0:
    esi = MEM32(ecx + 0x24);
    eax = ZX16(LO16(edx));
    eax = eax << 4;
    eax = eax + esi;
    MEM32(eax) = MEM32(eax) + eax;
    esi = MEM32(eax + 4);
    esi = esi + eax;
    edx++;
    MEM32(eax + 4) = esi;
    if (CMP_B(LO16(edx), MEM16(ecx + 0x28))) goto loc_001B02E0; /* jb: below (unsigned <) */

loc_001B02FC:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B02FE:
    if (CMP_BE(MEM16(ecx + 0x28), 0)) goto loc_001B0321; /* jbe: below or equal (unsigned <=) */

loc_001B0305:
    esi = MEM32(ecx + 0x24);
    eax = ZX16(LO16(edx));
    eax = eax << 4;
    eax = eax + esi;
    MEM32(eax) = MEM32(eax) + eax;
    esi = MEM32(eax + 4);
    esi = esi + eax;
    edx++;
    MEM32(eax + 4) = esi;
    if (CMP_B(LO16(edx), MEM16(ecx + 0x28))) goto loc_001B0305; /* jb: below (unsigned <) */

loc_001B0321:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
