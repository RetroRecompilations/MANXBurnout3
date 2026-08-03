#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0005A3F0
 * Original: 0x0005A3F0 - 0x0005A5C4 (468 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0005A3F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edi = edx;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    eax = edi;
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0005A410:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x27E0);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ecx = edx + eax + 0x14;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    SET_LO8(eax, MEM8(ebp + 8));
    edi = edi + 0x73B2A0;
    MEM32(esi + 0x2C) = edi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 8) = edx;
    MEM8(esi + 0x34) = LO8(eax);
    edi = esi + 0x20;
    ebx = 3;

loc_0005A447:
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0005A458:
    MEM32(edi) = eax;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_0005A447; /* jne: not equal / not zero */

loc_0005A460:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    ecx = MEM32(0x4D532C);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41D80000);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x54FA30);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x54FA30);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x1F74);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54FDB8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x388F08); /* subss */
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0005A4D7:
    eax = MEM32(esi + 0x24);
    xmm1.f[0] = MEMF(0x389CC4); /* movss */
    xmm0.f[0] = MEMF(0x3897A8); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x399654); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    eax = MEM32(esi + 0x28);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7964); /* addss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x54F374); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x54F394); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B17C8); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1FE0); /* movss */
    MEM32(esp + 8) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1790); /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B2094); /* mulss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, esi);
    MEM32(eax + 0x3C) = 0x48430;
    PUSH32(esp, 0); sub_0005A640(); /* call 0x0005A640 */

loc_0005A5BA:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
