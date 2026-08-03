#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00059850
 * Original: 0x00059850 - 0x00059BC7 (887 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00059850:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    eax = esi;
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_00059871:
    edx = MEM32(ebx + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_000598A2; /* jne: not equal / not zero */

loc_0005987D:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(ebx + 8);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_000598A2:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    ecx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = eax + ecx + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x10);
    MEM32(esp + 8) = eax;
    /* cmp esi, MEM32(0x731F90) - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(esi, MEM32(0x731F90))) goto loc_000598D2; /* jge: greater or equal (signed >=) */

loc_000598C4:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4AD0);
    esi = esi + 0x667E90;
    goto loc_000598D4;

loc_000598D2:
    esi = 0; /* xor self */

loc_000598D4:
    MEM32(ebx + 0x2C) = esi;
    esi = ebx + 0x20;
    edi = 3;
    /* nop */

loc_000598E0:
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000598F1:
    MEM32(esi) = eax;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_000598E0; /* jne: not equal / not zero */

loc_000598F9:
    eax = MEM32(0x45B9BC);
    if (TEST_Z(eax, eax)) goto loc_00059918; /* je: equal / zero */

loc_00059902:
    if (CMP_EQ(eax, 1)) goto loc_00059918; /* je: equal / zero */

loc_00059907:
    ecx = MEM32(0x4D532C);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 0x1F08);
    goto loc_00059926;

loc_00059918:
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 0x1F0C);

loc_00059926:
    ecx = MEM32(ebx + 0x28);
    xmm3.f[0] = MEMF(0x54F374); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x54F394); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B17C8); /* mulss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(0x54FCCC); /* movss */
    xmm1.f[0] = MEMF(0x389A24); /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm3.f[0] = MEMF(0x3B209C); /* movss */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5594); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x399654); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm5.f[0]; /* movss */
    MEM32(ecx) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEM32(ecx + 0x3C) = 0x48430;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = 0x54FA20;
    MEM32(esp + 0x18) = 0x54FA50;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1D2C); /* mulss */
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, 0x11);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x4D6180);
    PUSH32(esp, 0x3FA00000);
    MEM32(esp + 0x38) = edx;
    xmm0.f[0] = MEMF(ecx + 0x10); /* movss */
    edx = MEM32(0x54FCDC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x54FA20);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x24);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B2098); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00059ACB:
    eax = ebx + 0x30;
    MEM16(eax) = 0x30;
    edx = MEM32(ebx + 0x24);
    MEM16(ebx + 0x32) = 0;
    ecx = MEM32(0x4D6180);
    xmm0.f[0] = MEMF(ecx + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x54FCDC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    xmm1.f[0] = MEMF(edx); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B1824); /* subss */
    ecx = ebx + 0x40;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = 0x54FA20;
    MEM32(esp + 8) = 0x54FA50;
    esi = MEM32(esp + 8);
    edi = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x30);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, 0x31);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(0x4D6180);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x42400000);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 0x10); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x54FA50);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00059BB5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(ebx + 0x48) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
