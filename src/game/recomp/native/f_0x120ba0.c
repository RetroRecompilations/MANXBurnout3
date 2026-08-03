#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00120BA0
 * Original: 0x00120BA0 - 0x00120EBB (795 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00120BA0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi + 0x13E0;
    ecx = 0x410;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = esi + 0x1360;
    ecx = ebx + 0x70;
    eax = edi;
    PUSH32(esp, 0); sub_00120EC0(); /* call 0x00120EC0 */

loc_00120BD0:
    eax = MEM32(esi + 0x13A0);
    SET_LO8(ecx, MEM8(eax + 0xC));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00120C43; /* jle: less or equal (signed <=) */

loc_00120BE5:
    edx = 0xFFFFF780u;
    edx = edx - esi;
    ecx = esi + 0x1580;
    MEM32(esp + 0x18) = edx;
    goto loc_00120C00;

loc_00120BF8:
    edx = MEM32(esp + 0x18);
    /* nop */

loc_00120C00:
    eax = MEM32(esi + 0x13A0);
    eax = eax + edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ecx), 16); /* movaps */
    eax = eax + ecx;
    memcpy((void *)XBOX_PTR(ecx + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(esp + 0x14);
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x13A0);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax++;
    ecx = ecx + 0x40;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, edx)) goto loc_00120BF8; /* jl: less (signed <) */

loc_00120C43:
    eax = MEM32(esi + 0x13A0);
    SET_LO8(ecx, MEM8(eax + 0xD));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00120CEA; /* jle: less or equal (signed <=) */

loc_00120C5C:
    ecx = esi + 0x18B0;
    ebx = 0xFFFFF780u;
    ebx = ebx - esi;
    MEM32(esp + 0x1C) = ecx;
    edx = 0x1C;
    ecx = esi + 0x1400;
    MEM32(esp + 0x18) = ebx;
    goto loc_00120C82;

loc_00120C7E:
    ebx = MEM32(esp + 0x18);

loc_00120C82:
    eax = MEM32(esi + 0x13A0);
    eax = eax + ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ebx), 16); /* movaps */
    eax = eax + ebx;
    ebx = MEM32(esp + 0x1C);
    memcpy((void *)XBOX_PTR(ecx + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x13A0);
    xmm0.f[0] = MEMF(edx + eax); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    eax = MEM32(esp + 0x14);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    ebx = ebx + 4;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esi + 0x13A0);
    ebx = (uint32_t)(int32_t)SMEM8(ebx + 0xD);
    eax++;
    edx = edx + 4;
    ecx = ecx + 0x40;
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ebx)) goto loc_00120C7E; /* jl: less (signed <) */

loc_00120CE7:
    ebx = MEM32(ebp + 8);

loc_00120CEA:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x13A4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13A8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x13AC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13B0) = xmm1.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x173);
    MEM32(esi + 0x2420) = edx;
    SET_LO8(eax, MEM8(ebx + 0x176));
    MEM8(esi + 0x242A) = LO8(eax);
    eax = esi + 0x13E0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00122830(); /* call 0x00122830 */

loc_00120D3B:
    eax = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    eax = esi + 0x70;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_00120D86:
    ecx = ZX8(MEM8(ebx + 0x176));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    ecx = ecx + 0x479560;
    eax = esi;
    PUSH32(esp, 0); sub_00134ED0(); /* call 0x00134ED0 */

loc_00120DA0:
    PUSH32(esp, 0); sub_00109BB0(); /* call 0x00109BB0 */

loc_00120DA5:
    xmm0.f[0] = MEMF(esi + 0x1D4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1E4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1750); /* mulss */
    eax = MEM32(esi + 0x204);
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebx + 0xC8));
    MEM8(esi + 0x13B8) = LO8(ecx);
    edx = MEM32(ebx + 0xC4);
    MEM32(esi + 0xBC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    SET_LO8(edx, MEM8(ebp + 0xC));
    memcpy((void *)XBOX_PTR(esi + 0xC0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xC0), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x242B) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x177));
    ecx = 0; /* xor self */
    MEM8(esi + 0x2429) = LO8(eax);
    eax = MEM32(esi + 0x13A0);
    MEM32(esi + 0x2424) = ecx;
    MEM8(esi + 0x2428) = LO8(ecx);
    MEM8(esi + 0x2403) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x16C8));
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_00120EA4; /* jle: less or equal (signed <=) */

loc_00120E7A:
    ecx = ZX8(MEM8(ebx + 0x171));
    edx = MEM32(eax + 0x16C0);
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 4;
    MEM32(esi + 0x2404) = eax;
    SET_LO8(eax, 1);
    MEM8(esi + 0x242C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00120EA4:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    MEM32(esi + 0x2404) = ecx;
    MEM8(esi + 0x242C) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
