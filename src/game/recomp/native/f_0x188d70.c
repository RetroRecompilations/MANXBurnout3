#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00188D70
 * Original: 0x00188D70 - 0x00188E06 (150 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188D70:
    xmm0.f[0] = MEMF(ebx + 0x138); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x134); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebx + 0x134) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(0x73A199));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00188DB9; /* jne: not equal / not zero */

loc_00188DAB:
    SET_LO8(eax, MEM8(0x73A198));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 4) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00188DBE; /* je: equal / zero */

loc_00188DB9:
    MEM8(esp + 4) = 1;

loc_00188DBE:
    eax = MEM32(0x73A1C0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00188E02; /* jle: less or equal (signed <=) */

loc_00188DCA:
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0x4D63D0;
    edi = ebx + 0xD0;

loc_00188DD7:
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00188DE8; /* je: equal / zero */

loc_00188DDF:
    eax = esi;
    edx = ebx;
    PUSH32(esp, 0); sub_00189940(); /* call 0x00189940 */

loc_00188DE8:
    ecx = MEM32(edi);
    eax = MEM32(0x73A1C0);
    MEM32(ebp) = ecx;
    esi++;
    edi = edi + 0x40;
    ebp = ebp + 0xA0;
    if (CMP_L(esi, eax)) goto loc_00188DD7; /* jl: less (signed <) */

loc_00188E00:
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00188E02:
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
