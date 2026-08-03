#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002206A0
 * Original: 0x002206A0 - 0x002206FC (92 bytes, 38 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002206A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002206A0:
    if (CMP_AE(MEM32(esp + 8), 8)) goto loc_002206AA; /* jae: above or equal (unsigned >=) */

loc_002206A7:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_002206AA:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 1));
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    edi++;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002206EB; /* je: equal / zero */

loc_002206BC:
    /* nop */

loc_002206C0:
    esi = (esi << 4) | (ecx >> (32 - 4)); /* shld */
    ecx = ecx << 4;
    if (CMP_B(LO8(eax), 0x30)) goto loc_002206D4; /* jb: below (unsigned <) */

loc_002206CB:
    /* cmp LO8(eax), 0x3A - flags set for next jcc */
    edx = 0x30;
    if (CMP_B(LO8(eax), 0x3A)) goto loc_002206D9; /* jb: below (unsigned <) */

loc_002206D4:
    edx = 0x57;

loc_002206D9:
    SET_LO8(eax, LO8(eax) - LO8(edx));
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx | eax;
    SET_LO8(eax, MEM8(edi + 1));
    esi = esi | edx;
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002206C0; /* jne: not equal / not zero */

loc_002206EB:
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = esi;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
