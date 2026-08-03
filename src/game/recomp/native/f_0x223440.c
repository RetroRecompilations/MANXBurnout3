#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00223440
 * Original: 0x00223440 - 0x002234A1 (97 bytes, 45 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00223440:
    if (TEST_Z(esi, esi)) goto loc_0022344A; /* je: equal / zero */

loc_00223444:
    MEM32(esi) = 0;

loc_0022344A:
    if (TEST_Z(ecx, ecx)) goto loc_00223454; /* je: equal / zero */

loc_0022344E:
    MEM32(ecx) = 0;

loc_00223454:
    if (TEST_Z(eax, eax)) goto loc_0022346A; /* je: equal / zero */

loc_00223458:
    if (CMP_EQ(eax, edi)) goto loc_0022346A; /* je: equal / zero */

loc_0022345C:
    if (TEST_Z(ecx, ecx)) goto loc_00223465; /* je: equal / zero */

loc_00223460:
    edx = ZX8(MEM8(eax));
    MEM32(ecx) = edx;

loc_00223465:
    eax++;
    if (CMP_NE(eax, edi)) goto loc_0022346D; /* jne: not equal / not zero */

loc_0022346A:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0022346D:
    ecx = ZX8(MEM8(eax));
    eax++;
    /* cmp ecx, 0x7F - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_BE(ecx, 0x7F)) goto loc_00223495; /* jbe: below or equal (unsigned <=) */

loc_00223477:
    edx = ecx;
    edx = edx & 0x7F;
    ecx = 0;
    if (((int32_t)edx <= 0)) goto loc_00223495; /* jle: less or equal (signed <=) */

loc_00223483:
    if (CMP_EQ(eax, edi)) goto loc_0022349D; /* je: equal / zero */

loc_00223487:
    ebx = ZX8(MEM8(eax));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    eax++;
    edx--;
    if (CMP_G(edx & edx, 0)) goto loc_00223483; /* jg: greater (signed >) */

loc_00223495:
    if (TEST_Z(esi, esi)) goto loc_0022349B; /* je: equal / zero */

loc_00223499:
    MEM32(esi) = ecx;

loc_0022349B:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0022349D:
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
