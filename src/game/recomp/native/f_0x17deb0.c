#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DEB0
 * Original: 0x0017DEB0 - 0x0017DF4A (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017DEB0:
    ecx = ZX8(MEM8(ebx + 0x4AF));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    ebp = 0; /* xor self */
    if (CMP_L(ecx, 4)) goto loc_0017DF1B; /* jl: less (signed <) */

loc_0017DEC7:
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x108);
    PUSH32(esp, edi);
    edi = edx + ebx + 0x22C;
    edx = ecx + -4;
    edx = edx >> 2;
    edx++;
    ebp = edx * 4;

loc_0017DEE5:
    xmm1.f[0] = MEMF(edi + -4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DEF1; /* jbe: below or equal (unsigned <=) */

loc_0017DEEF:
    SET_LO8(eax, LO8(eax) + 1);

loc_0017DEF1:
    xmm1.f[0] = MEMF(edi); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DEFC; /* jbe: below or equal (unsigned <=) */

loc_0017DEFA:
    SET_LO8(eax, LO8(eax) + 1);

loc_0017DEFC:
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DF08; /* jbe: below or equal (unsigned <=) */

loc_0017DF06:
    SET_LO8(eax, LO8(eax) + 1);

loc_0017DF08:
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DF14; /* jbe: below or equal (unsigned <=) */

loc_0017DF12:
    SET_LO8(eax, LO8(eax) + 1);

loc_0017DF14:
    edi = edi + 0x10;
    edx--;
    if ((edx != 0)) goto loc_0017DEE5; /* jne: not equal / not zero */

loc_0017DF1A:
    POP32(esp, edi);

loc_0017DF1B:
    if (CMP_GE(ebp, ecx)) goto loc_0017DF41; /* jge: greater or equal (signed >=) */

loc_0017DF1F:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x42);
    esi = esi + ebp;
    edx = ebx + esi * 4 + 0x228;
    ecx = ecx - ebp;
    /* nop */

loc_0017DF30:
    xmm1.f[0] = MEMF(edx); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DF3B; /* jbe: below or equal (unsigned <=) */

loc_0017DF39:
    SET_LO8(eax, LO8(eax) + 1);

loc_0017DF3B:
    edx = edx + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0017DF30; /* jne: not equal / not zero */

loc_0017DF41:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0017DF49; /* jbe: below or equal (unsigned <=) */

loc_0017DF47:
    SET_LO8(eax, LO8(eax) - 1);

loc_0017DF49:
    esp += 4; return; /* ret */

}
