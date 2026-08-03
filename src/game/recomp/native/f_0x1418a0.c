#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001418A0
 * Original: 0x001418A0 - 0x00141948 (168 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418A0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001418A0:
    SET_LO8(eax, MEM8(esi + 0x69));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00141945; /* jne: not equal / not zero */

loc_001418AB:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001418B5:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001418E0; /* jne: not equal / not zero */

loc_001418B9:
    edx = MEM32(0x73A1C0);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001418E0; /* jle: less or equal (signed <=) */

loc_001418C5:
    ecx = 0x73BACA;
    /* nop */

loc_001418D0:
    if (CMP_NE(MEM8(ecx), 0)) goto loc_00141945; /* jne: not equal / not zero */

loc_001418D5:
    eax++;
    ecx = ecx + 0x27E0;
    if (CMP_L(eax, edx)) goto loc_001418D0; /* jl: less (signed <) */

loc_001418E0:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_001418FE; /* je: equal / zero */

loc_001418E9:
    if (CMP_NE(MEM32(eax + 0x1B8), 0x4D4BD8)) goto loc_001418FE; /* jne: not equal / not zero */

loc_001418F5:
    if (CMP_EQ(MEM32(0x73A1A4), 1)) goto loc_00141945; /* je: equal / zero */

loc_001418FE:
    ecx = MEM32(esi + 0x64);
    ecx++;
    eax = ecx;
    MEM32(esi + 0x64) = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 0x69) = 5;
    if (TEST_Z(edx, edx)) goto loc_00141925; /* je: equal / zero */

loc_00141917:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00141925:
    edx = MEM32(esp + 4);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0xBD69B91Eu);
    PUSH32(esp, 0x81C00000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141945:
    esp += 8; return; /* ret 4 */

}
