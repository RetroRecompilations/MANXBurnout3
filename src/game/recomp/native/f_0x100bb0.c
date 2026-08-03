#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00100BB0
 * Original: 0x00100BB0 - 0x00100CD0 (288 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100BB0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    ecx = MEM32(0x3EBDB8);
    SET_LO16(ebp, LO16(edi));
    SET_LO16(ebp, LO16(ebp) - MEM16(esi + 0x5E0));
    ebp = ebp - ecx;
    if (CMP_NE(LO16(ebp), 0xFFFF)) goto loc_00100BD6; /* jne: not equal / not zero */

loc_00100BD4:
    ebp = 0; /* xor self */

loc_00100BD6:
    SET_LO8(eax, MEM8(esi + 0x938));
    /* test LO8(eax), 1 - flags set for next jcc */
    ebx = esi + 0x938;
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(LO8(eax), 1)) goto loc_00100CCA; /* je: equal / zero */

loc_00100BEE:
    eax = MEM32(0x4A1D84);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00100BFB; /* jne: not equal / not zero */

loc_00100BF9:
    eax = 0; /* xor self */

loc_00100BFB:
    SET_LO16(edx, MEM16(esi + 0x95E));
    MEM16(esi + 0x4D84) = LO16(eax);
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    eax = edi;
    ecx = esi;
    MEMF(esi + 0x4D7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00100B00(); /* call 0x00100B00 */

loc_00100C22:
    eax = MEM32(esi + 0x5DC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00100C56; /* je: equal / zero */

loc_00100C2D:
    SET_LO16(ecx, LO16(eax));
    SET_LO16(eax, MEM16(esi + 0x95E));
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_00100C44; /* jae: above or equal (unsigned >=) */

loc_00100C3D:
    if (CMP_A(LO16(ecx), 0xAAAA)) goto loc_00100C56; /* ja: above (unsigned >) */

loc_00100C44:
    if (CMP_AE(LO16(ecx), 0x5555)) goto loc_00100C51; /* jae: above or equal (unsigned >=) */

loc_00100C4B:
    if (CMP_A(LO16(eax), 0xAAAA)) goto loc_00100CC7; /* ja: above (unsigned >) */

loc_00100C51:
    if (CMP_BE(LO16(eax), LO16(ecx))) goto loc_00100CC7; /* jbe: below or equal (unsigned <=) */

loc_00100C56:
    /* cmp LO16(ebp), 0x5555 - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + 0x95E));
    SET_LO8(ebx, 4);
    if (CMP_AE(LO16(ebp), 0x5555)) goto loc_00100C6C; /* jae: above or equal (unsigned >=) */

loc_00100C66:
    if (CMP_A(LO16(eax), 0xAAAA)) goto loc_00100CA1; /* ja: above (unsigned >) */

loc_00100C6C:
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_00100C79; /* jae: above or equal (unsigned >=) */

loc_00100C72:
    if (CMP_A(LO16(ebp), 0xAAAA)) goto loc_00100C7E; /* ja: above (unsigned >) */

loc_00100C79:
    if (CMP_A(LO16(ebp), LO16(eax))) goto loc_00100CA1; /* ja: above (unsigned >) */

loc_00100C7E:
    eax = MEM32(esi + 0x6F4);
    SET_LO8(ecx, MEM8(eax + 0x210));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00100CA1; /* je: equal / zero */

loc_00100C8E:
    if (TEST_Z(MEM8(esi + 0x964), LO8(ebx))) goto loc_00100CA1; /* je: equal / zero */

loc_00100C96:
    ecx = MEM32(esp + 0x10);
    eax = esi;
    PUSH32(esp, 0); sub_00100E80(); /* call 0x00100E80 */

loc_00100CA1:
    ecx = MEM32(esi + 0x6F4);
    SET_LO8(eax, MEM8(ecx + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00100CB9; /* je: equal / zero */

loc_00100CB1:
    if (TEST_NZ(MEM8(esi + 0x964), LO8(ebx))) goto loc_00100CC3; /* jne: not equal / not zero */

loc_00100CB9:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_001012B0(); /* call 0x001012B0 */

loc_00100CC3:
    ebx = MEM32(esp + 0x10);

loc_00100CC7:
    MEM8(ebx) = MEM8(ebx) & 0xFE;

loc_00100CCA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
