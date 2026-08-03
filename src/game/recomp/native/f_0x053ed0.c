#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053ED0
 * Original: 0x00053ED0 - 0x00054233 (867 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00053ED0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = esi;
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_00053EF1:
    edx = MEM32(ebx + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_00053F22; /* jne: not equal / not zero */

loc_00053EFD:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(ebx + 8);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_00053F22:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x27E0);
    ecx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = eax + ecx + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x10);
    SET_LO8(ecx, MEM8(ebp + 0xC));
    esi = esi + 0x73B2A0;
    MEM32(esp + 0xC) = edx;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(ebp + 0x14));
    MEM32(ebx + 0x30) = esi;
    MEMF(ebx + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x50) = LO8(ecx);
    MEMF(ebx + 0x4C) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x51) = LO8(edx);
    MEM8(ebx + 0x52) = LO8(eax);
    esi = ebx + 0x2C;
    edi = 4;

loc_00053F72:
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00053F83:
    MEM32(esi) = eax;
    esi = esi - 4;
    edi--;
    if ((edi != 0)) goto loc_00053F72; /* jne: not equal / not zero */

loc_00053F8B:
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x7F7FFFFF);
    MEM16(ebx + 0x44) = 0x2F;
    eax = ebx + 0x44;
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 9);
    MEM16(ebx + 0x48) = LO16(eax);
    MEM16(ebx + 0x42) = LO16(eax);
    eax = MEM32(0x54FAE0);
    ecx = MEM32(0x4D532C);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, 0x54FA30);
    PUSH32(esp, 0x54FA30);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54FAB0); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x388F08); /* subss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x1F48);
    ecx = esp + 0x40;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0005400F:
    SET_LO8(eax, MEM8(ebx + 0x52));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x389094); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00054026; /* jne: not equal / not zero */

loc_0005401E:
    xmm0.f[0] = MEMF(0x3B03F4); /* movss */

loc_00054026:
    xmm3.f[0] = MEMF(0x54F374); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x54F394); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B17C8); /* mulss */
    xmm4.f[0] = MEMF(0x3A5594); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(ebx + 0x20);
    xmm1.f[0] = MEMF(0x3897A8); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm3.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1FE0); /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm0.f[0] = MEMF(0x3A60AC); /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1790); /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm4.f[0]; /* movss */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, ebx);
    MEM32(eax + 0x3C) = 0x48430;
    PUSH32(esp, 0); sub_000542D0(); /* call 0x000542D0 */

loc_000540F9:
    SET_LO8(eax, MEM8(ebx + 0x52));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 0x2C);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00054139; /* je: equal / zero */

loc_0005410C:
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    eax = MEM32(ebx + 0x24);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    goto loc_00054196;

loc_00054139:
    ecx = MEM32(0x4D6180);
    xmm1.f[0] = MEMF(ecx + 0x10); /* movss */
    xmm2.f[0] = MEMF(eax + 0xC); /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(ebx + 0x24);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;

loc_00054196:
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = 0x54FA20;
    MEM32(esp + 0x10) = 0x54FA50;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FC00000);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x54FAE8);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x28);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x54FA20);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edx;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x48;
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00054229:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
