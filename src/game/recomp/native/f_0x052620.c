#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00052620
 * Original: 0x00052620 - 0x000526B6 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052620(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00052620:
    esp = esp - 0x20;
    /* ucomiss xmm0.f[0], MEMF(0x3B172C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    if (1 /* jp after test - parity */) goto loc_00052639; /* jp: parity */

loc_00052631:
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    goto loc_00052689;

loc_00052639:
    xmm1.f[0] = MEMF(0x3B1838); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    esi = (int32_t)xmm2.f[0]; /* cvttss2si */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B17E8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2928); /* mulss */
    PUSH32(esp, edi);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);

loc_00052689:
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3AB2EC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243816(); /* call 0x00243816 */

loc_0005269D:
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0x20);
    edx = esp + 0x20;
    PUSH32(esp, 0); sub_001B2C60(); /* call 0x001B2C60 */

loc_000526AC:
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}
