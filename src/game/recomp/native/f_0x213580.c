#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213580
 * Original: 0x00213580 - 0x002135E6 (102 bytes, 48 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00213580:
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_00213590:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021359C; /* jne: not equal / not zero */

loc_00213597:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021359C:
    /* cmp eax, esi - flags set for next jcc */
    edx = eax;
    if (CMP_EQ(eax, esi)) goto loc_002135AD; /* je: equal / zero */

loc_002135A2:
    if (CMP_BE(MEM8(edx + -1), 0x20)) goto loc_002135AD; /* jbe: below or equal (unsigned <=) */

loc_002135A8:
    edx--;
    if (CMP_NE(edx, esi)) goto loc_002135A2; /* jne: not equal / not zero */

loc_002135AD:
    if (CMP_B(MEM8(eax), 0x20)) goto loc_002135BB; /* jb: below (unsigned <) */

loc_002135B2:
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_002135B2; /* jae: above or equal (unsigned >=) */

loc_002135BB:
    SET_LO8(ecx, MEM8(eax));
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_002135CE; /* jbe: below or equal (unsigned <=) */

loc_002135C1:
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_002135CE; /* jae: above or equal (unsigned >=) */

loc_002135C6:
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (CMP_A(LO8(ecx) & LO8(ecx), 0)) goto loc_002135C1; /* ja: above (unsigned >) */

loc_002135CE:
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002135DF; /* je: equal / zero */

loc_002135D4:
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    edx++;
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002135D4; /* jne: not equal / not zero */

loc_002135DF:
    MEM8(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
