#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00020860
 * Original: 0x00020860 - 0x00020930 (208 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020860(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00020860:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    PUSH32(esp, ecx);
    esi = 0x40B310;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00135740(); /* call 0x00135740 */

loc_00020881:
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x35);
    xmm1.f[0] = MEMF(0x3EC928); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x411C08) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC92C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x4115E8) = xmm0.f[0]; /* movss */
    MEMF(0x4115F4) = xmm0.f[0]; /* movss */
    MEMF(0x411C10) = xmm1.f[0]; /* movss */
    SET_LO8(eax, MEM8(edi + 0x39));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x411B20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000208F3; /* je: equal / zero */

loc_000208D5:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x411C14) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000208E9; /* je: equal / zero */

loc_000208E0:
    MEM8(0x411B4C) = MEM8(0x411B4C) & 0xFD;
    goto loc_00020914;

loc_000208E9:
    eax = MEM32(0x4116B4);
    eax = eax & 0xFFFFFFF7u;
    goto loc_0002090F;

loc_000208F3:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x411C14) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020907; /* je: equal / zero */

loc_000208FE:
    MEM8(0x411B4C) = MEM8(0x411B4C) | 2;
    goto loc_00020914;

loc_00020907:
    eax = MEM32(0x4116B4);
    eax = eax | 8;

loc_0002090F:
    MEM32(0x4116B4) = eax;

loc_00020914:
    ecx = 0x4AED49;
    eax = edi + 0x2C;
    esi = 4;

loc_00020921:
    /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM8(eax), 0)) ? 1 : 0); /* setne */
    eax++;
    MEM8(ecx) = LO8(edx);
    ecx++;
    esi--;
    if ((esi != 0)) goto loc_00020921; /* jne: not equal / not zero */

loc_0002092E:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
