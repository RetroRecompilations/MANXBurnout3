#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A9040
 * Original: 0x001A9040 - 0x001A916C (300 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9040(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001A9040:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x649B28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x649B2C);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x649B2C) = ecx;
    edx = 0; /* xor self */
    MEM32(0x649B28) = eax;
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx - 0x1F4;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(edi + 0x114);
    SET_LO8(eax, MEM8(edx + 0x45));
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1D08); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1684); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A90E0; /* je: equal / zero */

loc_001A90A4:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x40), 0xFF)) goto loc_001A90E0; /* jne: not equal / not zero */

loc_001A90B8:
    esi = MEM32(edi + 0x110);
    if (TEST_Z(esi, esi)) goto loc_001A90D7; /* je: equal / zero */

loc_001A90C2:
    SET_LO8(ecx, MEM8(0x649B97));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A90D7; /* jne: not equal / not zero */

loc_001A90CC:
    SET_LO8(ecx, MEM8(esi + 0x177));
    MEM8(eax + 0x40) = LO8(ecx);
    goto loc_001A90E0;

loc_001A90D7:
    SET_LO8(edx, MEM8(edi + 0x177));
    MEM8(eax + 0x40) = LO8(edx);

loc_001A90E0:
    eax = MEM32(edi + 0x114);
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_001A90EB:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_001A03F0(); /* call 0x001A03F0 */

loc_001A9106:
    ecx = MEM32(edi + 0x114);
    eax = ZX8(MEM8(ecx + 0x49));
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    edx = edx << 4;
    edx = edx + 0x642C10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019FFA0(); /* call 0x0019FFA0 */

loc_001A9126:
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x174));
    SET_LO8(ecx, LO8(ecx) >> 2);
    PUSH32(esp, 0);
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x114);
    PUSH32(esp, 0); sub_001A09F0(); /* call 0x001A09F0 */

loc_001A9146:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x118) = 0;
    MEMF(edi + 0x11C) = xmm0.f[0]; /* movss */
    edi = MEM32(edi + 0x114);
    MEM8(edi + 0x4B) = MEM8(edi + 0x4B) & 0xFB;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
