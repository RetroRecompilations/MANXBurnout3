#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000380D0
 * Original: 0x000380D0 - 0x000381F7 (295 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000380D0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_000380D0:
    xmm2.f[0] = MEMF(0x386EF4); /* movss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    ecx = 0; /* xor self */
    eax = 0x418F04;
    PUSH32(esp, esi);
    goto loc_000380F0;

    /* nop */

loc_000380F0:
    xmm0.f[0] = MEMF(eax + -24); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + -28); /* addss */
    edx = MEM32(eax + -4);
    /* test edx, edx - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + -32); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + -36); /* addss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    if (TEST_Z(edx, edx)) goto loc_0003816F; /* je: equal / zero */

loc_00038112:
    xmm4.f[0] = MEMF(eax + -24); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm4.f[0]; /* cvttss2si */
    xmm4.f[0] = MEMF(eax + -28); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm4.f[0]; /* cvttss2si */
    xmm4.f[0] = MEMF(eax + -32); /* movss */
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    edx = edx + 3;
    edx = edx & 0xFFFFFFFCu;
    edx = edx + esi;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm4.f[0]; /* cvttss2si */
    xmm4.f[0] = MEMF(eax + -36); /* movss */
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    edx = edx + esi;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm4.f[0]; /* cvttss2si */
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    esi = esi + ecx;
    ecx = esi + edx;

loc_0003816F:
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) goto loc_000381D6; /* je: equal / zero */

loc_00038175:
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax + -24); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = MEMF(eax + -28); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = MEMF(eax + -32); /* movss */
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    edx = edx + 3;
    edx = edx & 0xFFFFFFFCu;
    edx = edx + esi;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = MEMF(eax + -36); /* movss */
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    edx = edx + esi;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    esi = (int32_t)xmm1.f[0]; /* cvttss2si */
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    esi = esi + ecx;
    ecx = esi + edx;

loc_000381D6:
    eax = eax + 0x7C;
    if (CMP_L(eax, 0x4191EC)) goto loc_000380F0; /* jl: less (signed <) */

loc_000381E4:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_000381F3:
    esp = esp + 8;

}
