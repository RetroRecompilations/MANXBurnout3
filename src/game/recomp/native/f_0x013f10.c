#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00013F10
 * Original: 0x00013F10 - 0x00013FA8 (152 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013F10:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x4A1C74));
    SET_LO8(edx, 0); /* xor self */
    /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, 1);
    if (CMP_EQ(LO8(ebx), LO8(edx))) goto loc_00013F2A; /* je: equal / zero */

loc_00013F1F:
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);

loc_00013F2A:
    if (CMP_EQ(MEM8(0x4A1C75), LO8(edx))) goto loc_00013F37; /* je: equal / zero */

loc_00013F32:
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax) = LO8(edx);

loc_00013F37:
    if (CMP_EQ(MEM8(0x4A1C78), LO8(edx))) goto loc_00013F4A; /* je: equal / zero */

loc_00013F3F:
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = LO8(edx);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);

loc_00013F4A:
    if (CMP_EQ(MEM8(0x4A1C79), LO8(edx))) goto loc_00013F58; /* je: equal / zero */

loc_00013F52:
    MEM8(eax + 3) = LO8(edx);
    MEM8(eax + 1) = LO8(ecx);

loc_00013F58:
    if (CMP_EQ(MEM8(eax + 2), LO8(edx))) goto loc_00013F6F; /* je: equal / zero */

loc_00013F5D:
    if (CMP_EQ(MEM8(0x4A1C76), LO8(edx))) goto loc_00013F69; /* je: equal / zero */

loc_00013F65:
    MEM8(eax) = LO8(ecx);
    goto loc_00013F75;

loc_00013F69:
    MEM8(eax) = LO8(edx);
    SET_LO8(ecx, 0); /* xor self */
    goto loc_00013F75;

loc_00013F6F:
    SET_LO8(ecx, MEM8(0x4A1C77));

loc_00013F75:
    /* cmp MEM8(eax + 3), LO8(edx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(eax + 3), LO8(edx))) goto loc_00013F83; /* je: equal / zero */

loc_00013F7B:
    /* cmp LO8(ecx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(ecx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(eax + 1) = LO8(ecx);

loc_00013F83:
    MEM8(0x4A1C74) = LO8(edx);
    MEM8(0x4A1C75) = LO8(edx);
    MEM8(0x4A1C76) = LO8(edx);
    MEM8(0x4A1C77) = LO8(edx);
    MEM8(0x4A1C78) = LO8(edx);
    MEM8(0x4A1C79) = LO8(edx);
    esp += 4; return; /* ret */

}
