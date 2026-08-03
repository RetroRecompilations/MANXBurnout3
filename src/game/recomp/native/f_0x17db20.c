#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DB20
 * Original: 0x0017DB20 - 0x0017DBD2 (178 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017DB20:
    SET_LO8(eax, MEM8(esi + 0x4AF));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0017DBCB; /* jbe: below or equal (unsigned <=) */

loc_0017DB34:
    PUSH32(esp, ebp);
    ebp = esi + 0x18;
    goto loc_0017DB40;

    /* nop */

loc_0017DB40:
    ecx = MEM32(ebp);
    eax = esi;
    PUSH32(esp, 0); sub_0017DF50(); /* call 0x0017DF50 */

loc_0017DB4A:
    if (CMP_LE(eax & eax, 0)) goto loc_0017DBB7; /* jle: less or equal (signed <=) */

loc_0017DB4E:
    SET_LO8(ecx, MEM8(esi + 0x4F8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0017DBB5; /* je: equal / zero */

loc_0017DB58:
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42);
    ecx = ecx + edi;
    xmm1.f[0] = MEMF(esi + ecx * 4 + 0x228); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    edx = esi + ecx * 4 + 0x228;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017DBB7; /* jbe: below or equal (unsigned <=) */

loc_0017DB79:
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    ecx = 0; /* xor self */
    /* cmp MEM32(esp + 0x10), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(esp + 0x10), ecx)) ? 1 : 0); /* sete */
    /* comiss xmm1.f[0], MEMF(edx) - sets EFLAGS */
    if ((xmm1.f[0] > MEMF(edx))) goto loc_0017DBA9; /* ja: above (unsigned >) */

loc_0017DB8F:
    xmm0.f[0] = MEMF(edx); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42);
    ecx = ecx + edi;
    xmm1.f[0] = MEMF(esi + ecx * 4 + 0x228); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx); /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0017DBA9:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */

loc_0017DBB5:
    ebx = ebx + eax;

loc_0017DBB7:
    edx = ZX8(MEM8(esi + 0x4AF));
    edi++;
    ebp = ebp + 4;
    if (CMP_L(edi, edx)) goto loc_0017DB40; /* jl: less (signed <) */

loc_0017DBCA:
    POP32(esp, ebp);

loc_0017DBCB:
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
