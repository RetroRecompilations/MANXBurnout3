#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0005A010
 * Original: 0x0005A010 - 0x0005A38E (894 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0005A010:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ebx + 0x95));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005A031; /* je: equal / zero */

loc_0005A029:
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 0x68);
    goto loc_0005A037;

loc_0005A031:
    ecx = MEM32(ebx + 0x34);
    ecx = MEM32(ecx + 0x68);

loc_0005A037:
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebx + 0x38) = ecx;
    eax = ebx + 0x44;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0005A050; /* jge: greater or equal (signed >=) */

loc_0005A041:
    SET_LO16(edx, MEM16(0x3F7B0C));
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM16(eax) = LO16(edx);
    eax = eax + 2;

loc_0005A050:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001B2EF0(); /* call 0x001B2EF0 */

loc_0005A059:
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 0x80);
    eax = MEM32(ebx + 0x20);
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEM32(ebx + 0x3C) = ecx;
    xmm3.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = 0x54FA20;
    MEM32(esp + 0x20) = 0x54FA50;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 1);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(0x54FD08);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x24);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(0x4D6180);
    MEM32(esp + 0x5C) = edx;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0x54FA50);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x389CB8); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B16B0); /* addss */
    PUSH32(esp, ecx);
    eax = ebx + 0x44;
    ecx = esp + 0x48;
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0005A140:
    SET_LO8(eax, MEM8(ebx + 0x94));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005A385; /* je: equal / zero */

loc_0005A14E:
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    eax = MEM32(ebx + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x10);
    esi = edx + eax + 0x14;
    edx = MEM32(ebx + 0x34);
    ecx = MEM32(edx + 0x74);
    edi++;
    /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esp + 0x30) = esi;
    if (CMP_NE(ecx, 4)) goto loc_0005A174; /* jne: not equal / not zero */

loc_0005A170:
    eax = 0; /* xor self */
    goto loc_0005A181;

loc_0005A174:
    /* cmp ecx, 2 - flags set for next jcc */
    eax = 4;
    if (CMP_EQ(ecx, 2)) goto loc_0005A181; /* je: equal / zero */

loc_0005A17E:
    eax = ecx + 1;

loc_0005A181:
    /* cmp eax, 4 - flags set for next jcc */
    MEM32(ebx + 0x98) = ecx;
    if (CMP_EQ(eax, 4)) goto loc_0005A37A; /* je: equal / zero */

loc_0005A190:
    ecx = MEM32(ebx + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_0005A37A; /* je: equal / zero */

loc_0005A19B:
    ecx = MEM32(eax * 4 + 0x389B30);
    esi = MEM32(0x4D532C);
    edx = MEM32(edx + 0x80);
    esi = MEM32(esi + 0xC);
    ecx = MEM32(esi + ecx * 4);
    esi = MEM32(edx + eax * 4);
    eax = MEM32(0x3AB3E8);
    xmm1.f[0] = MEMF(0x3A7F34); /* movss */
    edx = MEM32(0x3AB3F0);
    xmm0.f[0] = MEMF(ebx + 0x40); /* movss */
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(0x3AB3F4));
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x3AB3EC);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x48) = edx;
    MEM8(esp + 0x4C) = LO8(eax);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7950); /* addss */
    PUSH32(esp, 0xF);
    eax = esp + 0x54;
    edx = esp + 0x44;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0); sub_001B2C60(); /* call 0x001B2C60 */

loc_0005A213:
    eax = ebx + 0x54;
    esp = esp + 4;
    ecx = esp + 0x50;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_001B2DF0(); /* call 0x001B2DF0 */

loc_0005A22A:
    if (CMP_GE(esi & esi, 0)) goto loc_0005A241; /* jge: greater or equal (signed >=) */

loc_0005A22E:
    SET_LO16(edx, MEM16(0x3F7B0C));
    esi = (uint32_t)(-(int32_t)esi);
    MEM16(eax) = LO16(edx);
    ecx = esi;
    eax = eax + 2;
    goto loc_0005A245;

loc_0005A241:
    ecx = MEM32(esp + 0x20);

loc_0005A245:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001B2EF0(); /* call 0x001B2EF0 */

loc_0005A24E:
    eax = MEM32(ebx + 0x20);
    xmm5.f[0] = MEMF(eax + 0xC); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(0x3A7B88);
    ecx = MEM32(esp + 0x24);
    xmm6.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B1688); /* movss */
    esi = MEM32(ebx + 0x28);
    xmm7.f[0] = MEMF(esp + 0x20); /* movss */
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x54FA10);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(0x4D6180);
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    memcpy(xmm2.b, xmm7.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001C1B20(); /* call 0x001C1B20 */

loc_0005A2B5:
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 8); /* divss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xC); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;
    eax = MEM32(ebx + 0x28);
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    ecx = MEM32(0x3A7B88);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    edx = MEM32(esp + 0x28);
    ebx = MEM32(ebx + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x54FA10);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(0x4D6180);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    esi = ebx;
    MEMF(esp + 0x54) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C1B20(); /* call 0x001C1B20 */

loc_0005A335:
    ecx = MEM32(esp + 0x30);
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 8); /* divss */
    xmm4.f[0] = xmm4.f[0] / MEMF(ebx + 0xC); /* divss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x30) = edx;
    edx = MEM32(ecx + 0x2C);
    edi = edi << 4;
    ecx = MEM32(edx + edi);
    eax = edx + edi;
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0005A37A:
    eax = MEM32(esi + 0x2C);
    edi = edi << 4;
    edi = edi + eax;
    MEM32(edi) = MEM32(edi) | 1;

loc_0005A385:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
