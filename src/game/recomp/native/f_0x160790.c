#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00160790
 * Original: 0x00160790 - 0x00160837 (167 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00160790:
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(esi + 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_001607AE:
    SET_LO8(ecx, MEM8(esp + 0x1B));
    esp = esp + 8;
    /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    eax = esp + 0x13;
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_001607D4; /* jne: not equal / not zero */

loc_001607BE:
    edi = edi;

loc_001607C0:
    edx = esp + 8;
    if (CMP_B(eax, edx)) goto loc_001607D4; /* jb: below (unsigned <) */

loc_001607C8:
    MEM8(eax) = 0;
    SET_LO8(ecx, MEM8(eax + -1));
    eax--;
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_001607C0; /* je: equal / zero */

loc_001607D4:
    edx = esi + 0xA8;
    eax = 0x3A15DC;
    esi = edx;
    esi = esi - eax;

loc_001607E3:
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001607E3; /* jne: not equal / not zero */

loc_001607ED:
    eax = esp + 8;
    esi = eax;

loc_001607F3:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001607F3; /* jne: not equal / not zero */

loc_001607FA:
    edi = edx;
    eax = eax - esi;
    edi--;
    /* nop */

loc_00160800:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00160800; /* jne: not equal / not zero */

loc_00160808:
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx--;

loc_00160817:
    SET_LO8(eax, MEM8(edx + 1));
    edx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00160817; /* jne: not equal / not zero */

loc_0016081F:
    eax = MEM32(0x3AAEDC);
    edi = edx;
    MEM32(edi) = eax;
    SET_LO8(ecx, MEM8(0x3AAEE0));
    MEM8(edi + 4) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
