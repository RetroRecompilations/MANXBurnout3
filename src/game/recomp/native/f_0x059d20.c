#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00059D20
 * Original: 0x00059D20 - 0x00059F80 (608 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00059D20:
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
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    eax = edi;
    ecx = 2;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_00059D40:
    edx = MEM32(esi + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_00059D71; /* jne: not equal / not zero */

loc_00059D4C:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(esi + 8);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_00059D71:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x27E0);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(edx, MEM8(ebp + 8));
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    ebx = eax + ecx + 0x14;
    ecx = MEM32(esi + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    PUSH32(esp, ecx);
    edi = edi + 0x73B2A0;
    ecx = ebx;
    MEM32(esp + 0xC) = eax;
    MEMF(esi + 0x40) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x34) = edi;
    MEM8(esi + 0x94) = 0;
    MEM8(esi + 0x95) = LO8(edx);
    MEM32(esi + 0x3C) = 0;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00059DC0:
    edi = MEM32(esp + 8);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00059DD4:
    MEM32(esi + 0x24) = eax;
    SET_LO8(eax, MEM8(esi + 0x94));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00059E02; /* je: equal / zero */

loc_00059DE1:
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi + 1;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00059DEF:
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi + 1;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00059E00:
    goto loc_00059E07;

loc_00059E02:
    eax = 0; /* xor self */
    MEM32(esi + 0x28) = eax;

loc_00059E07:
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00059E17:
    MEM32(esi + 0x30) = eax;
    SET_LO8(ecx, MEM8(0x4D617F));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00059E33; /* je: equal / zero */

loc_00059E24:
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    ecx = 0x7E6;
    goto loc_00059E40;

loc_00059E33:
    xmm0.f[0] = MEMF(0x389B28); /* movss */
    ecx = 0x7E5;

loc_00059E40:
    xmm3.f[0] = MEMF(0x54F374); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x54F394); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B17C8); /* mulss */
    xmm4.f[0] = MEMF(0x3A5594); /* movss */
    xmm2.f[0] = MEMF(0x3897A8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm3.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm0.f[0] = MEMF(0x3B1FE0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A60AC); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1790); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm4.f[0]; /* movss */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(eax + 0x3C) = 0x48430;
    eax = MEM32(0x4D532C);
    edx = MEM32(eax + 0xC);
    eax = MEM32(0x54FD60);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x54FA30);
    PUSH32(esp, 0x54FA30);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54FCF8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x388F08); /* subss */
    PUSH32(esp, eax);
    eax = MEM32(edx + ecx * 4);
    ecx = esp + 0x30;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00059F70:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0005A010(); /* call 0x0005A010 */

loc_00059F76:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
