#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00051C70
 * Original: 0x00051C70 - 0x00051FD1 (865 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00051C70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edi = edx;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    eax = edi;
    ecx = 2;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_00051C90:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x27E0);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    xmm0.f[0] = MEMF(0x3B1790); /* movss */
    ebx = edx + eax + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    SET_LO8(edx, MEM8(ebp + 8));
    ecx = eax + 1;
    MEM32(esp + 0x10) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(esi + 0xCD) = LO8(ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    edi = edi + 0x73B2A0;
    ecx = ebx;
    MEM32(esp + 0xC) = eax;
    MEM32(esi + 0x34) = edi;
    MEM8(esi + 0xCC) = LO8(edx);
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00051CE9:
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00051CFB:
    xmm0.f[0] = MEMF(0x54F374); /* movss */
    xmm5.f[0] = MEMF(0x54F394); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3A5594); /* movss */
    xmm4.f[0] = MEMF(0x3A60AC); /* movss */
    MEM32(esi + 0x24) = eax;
    SET_LO8(eax, MEM8(esi + 0xCC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00051E35; /* je: equal / zero */

loc_00051D2F:
    eax = MEM32(esi + 8);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00051D40:
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00051D50:
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00051D60:
    xmm2.f[0] = MEMF(0x3A292C); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3897A8); /* movss */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x3B17C8); /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esi + 0xD0); /* movss */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] / xmm6.f[0]; /* divss */
    xmm6.f[0] = MEMF(0x3B1FE0); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x3B20AC); /* mulss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x30) = eax;
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    memcpy(xmm6.b, xmm4.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 8); /* subss */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm2.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm2.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0x48430;
    xmm2.f[0] = MEMF(esi + 0xD0); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B1E24); /* addss */
    MEMF(esi + 0xD0) = xmm2.f[0]; /* movss */
    goto loc_00051E40;

loc_00051E35:
    eax = 0; /* xor self */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;

loc_00051E40:
    eax = 0x388E9C;
    ecx = esi + 0xC0;
    goto loc_00051E50;

    /* nop */

loc_00051E50:
    edx = MEM32(eax);
    edx = MEM32(edx * 4 + 0x4608F0);
    MEM32(ecx) = edx;
    eax = eax + 4;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x388EA8)) goto loc_00051E50; /* jl: less (signed <) */

loc_00051E68:
    eax = MEM32(esi + 0x24);
    xmm2.f[0] = MEMF(0x3A292C); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B17C8); /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(0x3B1FE0); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B20AC); /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3897A8); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esi + 0xD0); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x10); /* subss */
    MEM32(esp + 0x14) = edx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0x48430;
    eax = MEM32(esi + 0x34);
    xmm1.f[0] = MEMF(eax + 0x2C8); /* movss */
    /* ucomiss xmm1.f[0], MEMF(0x3B172C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051FC1; /* jnp: not parity */

loc_00051F36:
    /* ucomiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051FC1; /* jnp: not parity */

loc_00051F43:
    xmm3.f[0] = MEMF(0x3B1838); /* movss */
    xmm4.f[0] = MEMF(0x3B17E8); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2928); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, esi);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 0); sub_000520D0(); /* call 0x000520D0 */

loc_00051FB7:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00051FC1:
    PUSH32(esp, esi);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000520D0(); /* call 0x000520D0 */

loc_00051FCA:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
