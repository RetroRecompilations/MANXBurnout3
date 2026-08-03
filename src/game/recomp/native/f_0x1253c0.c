#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001253C0
 * Original: 0x001253C0 - 0x0012548D (205 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001253C0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001253C0:
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_001253D0:
    eax = MEM32(esi + 0xCC0);
    edx = MEM32(eax + 0x40);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00125431; /* jle: less or equal (signed <=) */

loc_001253E3:
    edx = edx + 0xAC4;
    /* nop */

loc_001253F0:
    if (CMP_EQ(edi, MEM32(edx))) goto loc_001253FE; /* je: equal / zero */

loc_001253F4:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_001253F0; /* jl: less (signed <) */

loc_001253FC:
    goto loc_00125431;

loc_001253FE:
    if (TEST_S(eax, eax)) goto loc_00125431; /* jl: less (signed <) */

loc_00125402:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00125422; /* je: equal / zero */

loc_00125406:
    ecx = MEM32(esi + 0xCC4);
    ecx = ecx + eax + 0x4B2;
    SET_LO8(eax, MEM8(ecx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012541D; /* je: equal / zero */

loc_00125419:
    if (CMP_NE(LO8(eax), 1)) goto loc_00125431; /* jne: not equal / not zero */

loc_0012541D:
    MEM8(ecx) = 2;
    goto loc_00125431;

loc_00125422:
    edx = MEM32(esi + 0xCC4);
    MEMF(edx + eax * 4 + 0xF90) = xmm0.f[0]; /* movss */

loc_00125431:
    edi++;
    if (CMP_L(edi, 7)) goto loc_001253D0; /* jl: less (signed <) */

loc_00125437:
    SET_LO8(eax, MEM8(esi + 0x1169));
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00125488; /* jle: less or equal (signed <=) */

loc_00125443:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    edi = 0xF78;

loc_00125450:
    eax = MEM32(esi + 0xCC4);
    ecx = eax + edx + 0x4AC;
    SET_LO8(eax, MEM8(ecx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00125467; /* je: equal / zero */

loc_00125463:
    if (CMP_NE(LO8(eax), 1)) goto loc_0012546A; /* jne: not equal / not zero */

loc_00125467:
    MEM8(ecx) = 2;

loc_0012546A:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00125479; /* jne: not equal / not zero */

loc_0012546E:
    ecx = MEM32(esi + 0xCC4);
    MEMF(edi + ecx) = xmm0.f[0]; /* movss */

loc_00125479:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    edx++;
    edi = edi + 4;
    if (CMP_L(edx, eax)) goto loc_00125450; /* jl: less (signed <) */

loc_00125488:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
