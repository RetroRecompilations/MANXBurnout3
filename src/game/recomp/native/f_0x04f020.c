#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004F020
 * Original: 0x0004F020 - 0x0004F218 (504 bytes, 131 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0004F020:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    esi = edx;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    eax = esi;
    ecx = 2;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0004F044:
    edx = MEM32(edi + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_0004F075; /* jne: not equal / not zero */

loc_0004F050:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(edi + 8);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_0004F075:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    ecx = MEM32(edi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    ebx = eax + ecx + 0x14;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    eax = eax + 0x73B2A0;
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x48) = esi;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AB2D4);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0004F0AE:
    MEM32(edi + 0x34) = eax;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AB150);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0004F0C1:
    esi = MEM32(esp + 0x18);
    MEM32(edi + 0x38) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebx;
    MEM32(edi + 0x44) = 0;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004F0DC:
    MEM32(edi + 0x20) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = esi + 1;
    ecx = ebx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004F0F1:
    MEM32(edi + 0x24) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004F101:
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004F113:
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(edi + 0x28) = eax;
    PUSH32(esp, 0); sub_0004F520(); /* call 0x0004F520 */

loc_0004F11F:
    eax = edi;
    PUSH32(esp, 0); sub_0004F7F0(); /* call 0x0004F7F0 */

loc_0004F126:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0004F630(); /* call 0x0004F630 */

loc_0004F12C:
    eax = MEM32(edi + 0x24);
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7964); /* addss */
    xmm3.f[0] = MEMF(0x54F374); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x54F394); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B17C8); /* mulss */
    xmm4.f[0] = MEMF(0x3A5594); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3897A8); /* movss */
    edi = MEM32(edi + 0x2C);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm3.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B20B8); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(0x3A60AC); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x24) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1920); /* movss */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(edi + 0x3C) = 0x48430;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
