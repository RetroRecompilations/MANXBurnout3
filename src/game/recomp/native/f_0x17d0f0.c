#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017D0F0
 * Original: 0x0017D0F0 - 0x0017D1E9 (249 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0017D0F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0017D1E0; /* jle: less or equal (signed <=) */

loc_0017D10B:
    goto loc_0017D110;

    /* nop */

loc_0017D110:
    if (TEST_NZ(ebx, ebx)) goto loc_0017D11D; /* jne: not equal / not zero */

loc_0017D114:
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x18) = eax;
    goto loc_0017D124;

loc_0017D11D:
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = ecx;

loc_0017D124:
    edx = ebx + ebx * 2;
    edx = edx << 4;
    esi = MEM32(edx + 0x64B38C);
    eax = MEM32(esi + 0x204);
    eax = eax + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edi + 0x60);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = MEM32(esp + 0x18);
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x1C))) goto loc_0017D1D4; /* jbe: below or equal (unsigned <=) */

loc_0017D1A7:
    /* cmp MEM32(eax + 0x40), 2 - flags set for next jcc */
    PUSH32(esp, eax);
    if (CMP_NE(MEM32(eax + 0x40), 2)) goto loc_0017D1B2; /* jne: not equal / not zero */

loc_0017D1AE:
    SET_LO8(eax, 1);
    goto loc_0017D1B4;

loc_0017D1B2:
    SET_LO8(eax, 0); /* xor self */

loc_0017D1B4:
    PUSH32(esp, 0); sub_00125790(); /* call 0x00125790 */

loc_0017D1B9:
    eax = MEM32(edi + 0x60);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEM32(ebx * 4 + 0x7353E8) = ecx;
    MEMF(edx) = xmm0.f[0]; /* movss */

loc_0017D1D4:
    eax = MEM32(ebp + 0x10);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_0017D110; /* jl: less (signed <) */

loc_0017D1E0:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
