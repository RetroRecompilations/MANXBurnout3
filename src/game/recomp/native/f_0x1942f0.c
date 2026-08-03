#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001942F0
 * Original: 0x001942F0 - 0x00194372 (130 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001942F0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001942F0:
    eax = MEM32(0x73A188);
    ecx = MEM32(edi + 0x34C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esi + 0x34C);
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = ecx - edx;
    if ((ecx != 0)) goto loc_0019434B; /* jne: not equal / not zero */

loc_0019430A:
    xmm0.f[0] = MEMF(edi + 0x348); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x348) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esi + 0x348))) goto loc_0019436F; /* ja: above (unsigned >) */

loc_0019431B:
    xmm0.f[0] = MEMF(esi + 0x348); /* movss */
    /* comiss xmm0.f[0], MEMF(edi + 0x348) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edi + 0x348))) goto loc_0019432F; /* jbe: below or equal (unsigned <=) */

loc_0019432C:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0019432F:
    ecx = MEM32(edi + 0xC8);
    eax = MEM32(esi + 0xC8);
    SET_LO8(edx, MEM8(ecx + 0x19BC));
    /* cmp LO8(edx), MEM8(eax + 0x19BC) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(LO8(edx), MEM8(eax + 0x19BC))) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

loc_0019434B:
    SET_LO8(edx, MEM8(0x73A198));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019435D; /* je: equal / zero */

loc_00194355:
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx & ecx, 0)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

loc_0019435D:
    if (CMP_LE(ecx & ecx, 0)) goto loc_00194367; /* jle: less or equal (signed <=) */

loc_00194361:
    /* cmp ecx, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_L(ecx, eax)) ? 1 : 0); /* setl */
    esp += 4; return; /* ret */

loc_00194367:
    if (CMP_GE(ecx, eax)) goto loc_0019436F; /* jge: greater or equal (signed >=) */

loc_00194369:
    eax = (uint32_t)(-(int32_t)eax);
    if (CMP_GE(ecx, eax)) goto loc_0019432C; /* jge: greater or equal (signed >=) */

loc_0019436F:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
