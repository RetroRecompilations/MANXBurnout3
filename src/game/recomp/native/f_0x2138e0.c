#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002138E0
 * Original: 0x002138E0 - 0x00213968 (136 bytes, 48 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002138E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002138E0:
    edx = MEM32(esp + 0xC);
    esp = esp - 0x120;
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x128);
    eax = esp + 4;
    if (TEST_NZ(edx, edx)) goto loc_002138FF; /* jne: not equal / not zero */

loc_002138FA:
    MEM8(esi) = 0;
    goto loc_0021391F;

loc_002138FF:
    SET_LO8(ecx, MEM8(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0021391B; /* je: equal / zero */

loc_00213905:
    PUSH32(esp, edi);
    edi = esp + 8;
    edx = edx - edi;
    POP32(esp, edi);
    /* nop */

loc_00213910:
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00213910; /* jne: not equal / not zero */

loc_0021391B:
    MEM8(eax) = 0x3D;
    eax++;

loc_0021391F:
    ecx = MEM32(esp + 0x134);
    if (TEST_Z(ecx, ecx)) goto loc_00213947; /* je: equal / zero */

loc_0021392A:
    /* nop */

loc_00213930:
    if (CMP_LE(ecx, 0x20FFFFFF)) goto loc_00213940; /* jle: less or equal (signed <=) */

loc_00213938:
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 0x18);
    MEM8(eax) = LO8(edx);
    eax++;

loc_00213940:
    ecx = ecx << 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00213930; /* jne: not equal / not zero */

loc_00213947:
    ecx = MEM32(esp + 0x12C);
    MEM8(eax) = 0;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00213280(); /* call 0x00213280 */

loc_0021395D:
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x120;
    esp += 4; return; /* ret */

}
