#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5AC0
 * Original: 0x001B5AC0 - 0x001B5B5C (156 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5AC0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001B5AC0:
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x4A1EB4);
    if (CMP_EQ(eax, esi)) goto loc_001B5B2B; /* je: equal / zero */

loc_001B5ACD:
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(eax, MEM32(ecx + 0x24))) goto loc_001B5ADA; /* je: equal / zero */

loc_001B5AD5:
    PUSH32(esp, 0); sub_001B5B60(); /* call 0x001B5B60 */

loc_001B5ADA:
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = esi;
    edi = edi - ebx;
    MEM32(ecx) = esi;
    esi = MEM32(ecx + 4);
    eax = edi;
    eax = eax - esi;
    if (CMP_LE(eax & eax, 0)) goto loc_001B5B29; /* jle: less or equal (signed <=) */

loc_001B5AF0:
    SET_LO8(edx, MEM8(ecx + 0x28));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001B5B23; /* je: equal / zero */

loc_001B5AF7:
    esi = MEM32(ecx + 0x18);
    if (CMP_EQ(esi, 1)) goto loc_001B5B1E; /* je: equal / zero */

loc_001B5AFF:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx;
    /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 0x10) = eax;
    if (CMP_LE(eax, esi)) goto loc_001B5B19; /* jle: less or equal (signed <=) */

loc_001B5B10:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax;
    MEM32(ecx + 0x10) = edx;

loc_001B5B19:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + ebx;
    goto loc_001B5B26;

loc_001B5B1E:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax;
    goto loc_001B5B26;

loc_001B5B23:
    MEM32(ecx + 8) = MEM32(ecx + 8) + eax;

loc_001B5B26:
    MEM32(ecx + 4) = edi;

loc_001B5B29:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B5B2B:
    xmm0.f[0] = MEMF(0x49C120); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x18); /* cvtsi2ss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
