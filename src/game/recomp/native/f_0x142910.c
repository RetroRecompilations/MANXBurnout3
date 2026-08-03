#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142910
 * Original: 0x00142910 - 0x00142988 (120 bytes, 47 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142910(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00142910:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x4C);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0014294B; /* je: equal / zero */

loc_0014291B:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00142925:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014292F:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0x4C) = ebx;
    MEM32(edi + 0x54) = ebx;

loc_0014294B:
    esi = MEM32(edi + 0x50);
    if (CMP_EQ(esi, ebx)) goto loc_00142982; /* je: equal / zero */

loc_00142952:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014295C:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00142966:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0x50) = ebx;
    MEM32(edi + 0x58) = ebx;

loc_00142982:
    POP32(esp, esi);
    MEM32(edi + 0x38) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
