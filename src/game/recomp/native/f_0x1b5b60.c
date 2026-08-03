#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5B60
 * Original: 0x001B5B60 - 0x001B5BB3 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B60(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001B5B60:
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    if (CMP_EQ(esi, 1)) goto loc_001B5B80; /* je: equal / zero */

loc_001B5B69:
    eax = MEM32(ecx + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    eax = eax + edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    MEM32(ecx + 0x10) = eax;
    goto loc_001B5B99;

loc_001B5B80:
    eax = MEM32(ecx + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(ecx + 0x10);
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_LE(edx, eax)) goto loc_001B5B92; /* jle: less or equal (signed <=) */

loc_001B5B8F:
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;

loc_001B5B92:
    MEM32(ecx + 0x10) = 0;

loc_001B5B99:
    xmm1.f[0] = MEMF(0x49C120); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEM32(ecx + 0x18) = esi;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
