#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001D090
 * Original: 0x0001D090 - 0x0001D1C3 (307 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D090(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001D090:
    MEM32(0x44D23C) = 0;
    SET_LO8(ecx, MEM8(eax + 0x447));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D0AE; /* je: equal / zero */

loc_0001D0A4:
    MEM32(0x44D23C) = 1;

loc_0001D0AE:
    SET_LO8(ecx, MEM8(eax + 0x447));
    MEM8(0x44D118) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x448));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D0CA; /* je: equal / zero */

loc_0001D0C4:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D0CA:
    SET_LO8(edx, MEM8(eax + 0x448));
    MEM8(0x44D119) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x449));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D0E6; /* je: equal / zero */

loc_0001D0E0:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D0E6:
    SET_LO8(ecx, MEM8(eax + 0x449));
    MEM8(0x44D11A) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x44A));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D102; /* je: equal / zero */

loc_0001D0FC:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D102:
    SET_LO8(edx, MEM8(eax + 0x44A));
    MEM8(0x44D11B) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x44B));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D11E; /* je: equal / zero */

loc_0001D118:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D11E:
    SET_LO8(ecx, MEM8(eax + 0x44B));
    MEM8(0x44D11C) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x44C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D13A; /* je: equal / zero */

loc_0001D134:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D13A:
    SET_LO8(edx, MEM8(eax + 0x44C));
    MEM8(0x44D11D) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x44D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D156; /* je: equal / zero */

loc_0001D150:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D156:
    SET_LO8(ecx, MEM8(eax + 0x44D));
    MEM8(0x44D11E) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x44E));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D172; /* je: equal / zero */

loc_0001D16C:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D172:
    SET_LO8(edx, MEM8(eax + 0x44E));
    MEM8(0x44D11F) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x44F));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D18E; /* je: equal / zero */

loc_0001D188:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;

loc_0001D18E:
    SET_LO8(ecx, MEM8(eax + 0x44F));
    MEM8(0x44D120) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x450));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001D1B7; /* je: equal / zero */

loc_0001D1A4:
    MEM32(0x44D23C) = MEM32(0x44D23C) + 1;
    SET_LO8(edx, MEM8(eax + 0x450));
    MEM8(0x44D121) = LO8(edx);
    esp += 4; return; /* ret */

loc_0001D1B7:
    SET_LO8(eax, MEM8(eax + 0x450));
    MEM8(0x44D121) = LO8(eax);
    esp += 4; return; /* ret */

}
