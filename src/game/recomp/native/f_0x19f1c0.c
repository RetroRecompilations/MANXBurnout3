#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019F1C0
 * Original: 0x0019F1C0 - 0x0019F3A2 (482 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019F1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0019F1C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(ecx, MEM8(esi + 0x4B));
    SET_LO8(eax, MEM8(esi + 0x46));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esi + 0x4B) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019F23C; /* je: equal / zero */

loc_0019F1DE:
    eax = ZX8(MEM8(esi + 0x49));
    edx = eax + eax * 4;
    SET_LO8(eax, MEM8(esi + 0x41));
    edx = edx << 4;
    edx = edx + 0x642C10;
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019F1FD; /* jne: not equal / not zero */

loc_0019F1F9:
    ebx = 0; /* xor self */
    goto loc_0019F209;

loc_0019F1FD:
    ebx = ZX8(LO8(eax));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4C);
    ebx = ebx + 0x60EC2C;

loc_0019F209:
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    xmm1.f[0] = MEMF(esi + 0x2C); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x60EA1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x20); /* divss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x30); /* addss */
    edi = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019F247; /* jbe: below or equal (unsigned <=) */

loc_0019F238:
    MEM8(esi + 0x46) = 0;

loc_0019F23C:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0019F247:
    /* cmp edi, ecx - flags set for next jcc */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    if (CMP_GE(edi, ecx)) goto loc_0019F2B1; /* jge: greater or equal (signed >=) */

loc_0019F253:
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_0019F260;

    /* nop */

loc_0019F260:
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm3.f[0])) goto loc_0019F2B1; /* jb: below (unsigned <) */

loc_0019F265:
    SET_LO8(eax, MEM8(esi + 0x4B));
    xmm2.f[0] = MEMF(esi + 0x20); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x4B) = LO8(eax);
    eax = MEM32(ebx);
    eax = MEM32(eax + 4);
    edi++;
    xmm0.f[0] = MEMF(eax + edi * 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + edi * 8 + -8); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    eax = eax + edi * 8;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0019F2A0; /* jbe: below or equal (unsigned <=) */

loc_0019F294:
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_0019F2A0:
    /* cmp edi, ecx - flags set for next jcc */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_L(edi, ecx)) goto loc_0019F260; /* jl: less (signed <) */

loc_0019F2B1:
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0019FFA0(); /* call 0x0019FFA0 */

loc_0019F2BD:
    ecx = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(ecx + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0x28); /* movss */
    /* ucomiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0019F34C; /* jnp: not parity */

loc_0019F2DA:
    edx = MEM32(ebx);
    eax = MEM32(edx + 4);
    xmm0.f[0] = MEMF(eax + edi * 8 + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5A58); /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x28); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx + 0x40), xmm0.b, 16); /* movaps */

loc_0019F34C:
    eax = ZX8(MEM8(esi + 0x4A));
    edi = eax + eax * 2;
    SET_LO8(eax, MEM8(esi + 0x4B));
    edi = edi << 7;
    edi = edi + 0x625FB0;
    if (TEST_Z(LO8(eax), 1)) goto loc_0019F39A; /* je: equal / zero */

loc_0019F363:
    if (TEST_NZ(LO8(eax), 4)) goto loc_0019F39A; /* jne: not equal / not zero */

loc_0019F367:
    if (TEST_NZ(MEM8(edi + 0x174), 4)) goto loc_0019F37C; /* jne: not equal / not zero */

loc_0019F370:
    edx = 3;
    eax = ebx;
    PUSH32(esp, 0); sub_001A0B00(); /* call 0x001A0B00 */

loc_0019F37C:
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x174));
    SET_LO8(ecx, LO8(ecx) >> 2);
    PUSH32(esp, eax);
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = esi;
    PUSH32(esp, 0); sub_001A09F0(); /* call 0x001A09F0 */

loc_0019F39A:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
