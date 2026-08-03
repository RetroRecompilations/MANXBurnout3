#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00127CC0
 * Original: 0x00127CC0 - 0x001280A8 (1000 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00127CC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    xmm0.f[0] = MEMF(0x3B1820); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_00127CD5:
    esi = MEM32(edx);
    esi = esi + ecx;
    edi = MEM32(esi);
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x24) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = esi;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    ecx = ecx + 0x20;
    if (CMP_L(ecx, 0x200)) goto loc_00127CD5; /* jl: less (signed <) */

loc_00127D29:
    ecx = eax + 4;
    esi = 8;
    goto loc_00127D40;

    /* nop */
    /* nop */

loc_00127D40:
    xmm1.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    ecx = ecx + 0x10;
    esi--;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    if ((esi != 0)) goto loc_00127D40; /* jne: not equal / not zero */

loc_00127D71:
    ecx = MEM32(edx);
    ecx = ecx + 0x180;
    esi = MEM32(ecx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(ecx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x80), xmm0.b, 16); /* movaps */
    ecx = MEM32(edx);
    ecx = ecx + 0x1A0;
    esi = MEM32(ecx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(ecx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xA0), xmm0.b, 16); /* movaps */
    ecx = MEM32(edx);
    ecx = ecx + 0x1C0;
    esi = MEM32(ecx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(ecx + 4);
    xmm2.f[0] = MEMF(0x3A69C4); /* movss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = esi;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x90), xmm0.b, 16); /* movaps */
    ecx = MEM32(edx);
    ecx = ecx + 0x1E0;
    esi = MEM32(ecx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(ecx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xB0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x88); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xA8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xA8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x98); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x38); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xB8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x88); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = MEMF(eax + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(eax + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x80); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x80); /* addss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x98); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = MEMF(eax + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(eax + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x90); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x90); /* addss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    ecx = MEM32(edx);
    xmm0.f[0] = MEMF(eax + 0xA8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x28); /* subss */
    xmm1.f[0] = MEMF(eax + 0x38); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x28); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax + 0x20); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xA0); /* subss */
    ecx = ecx + 0x1A0;
    esi = MEM32(ecx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    edx = MEM32(edx);
    xmm0.f[0] = MEMF(eax + 0xB8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x28); /* subss */
    xmm1.f[0] = MEMF(eax + 0x38); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x28); /* subss */
    edx = edx + 0x1E0;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x20); /* subss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 4);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax + 0x20); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xB0); /* subss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x28) = esi;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    POP32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;

}
