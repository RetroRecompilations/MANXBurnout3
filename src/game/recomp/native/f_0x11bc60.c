#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0011BC60
 * Original: 0x0011BC60 - 0x0011BE3E (478 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0011BC60:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C;
    ecx = MEM32(esi + 0x13F4);
    edx = MEM32(ecx + 0x1920);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(edx, edx)) goto loc_0011BC8C; /* jne: not equal / not zero */

loc_0011BC7A:
    xmm2.f[0] = MEMF(esi + 0xBC); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x60EA1C); /* mulss */
    goto loc_0011BCA9;

loc_0011BC8C:
    if (CMP_LE(eax & eax, 0)) goto loc_0011BCA6; /* jle: less or equal (signed <=) */

loc_0011BC90:
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xBC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x60EA1C); /* mulss */
    goto loc_0011BCA9;

loc_0011BCA6:
    xmm2.f[0] = 0.0f; /* xorps self = zero */

loc_0011BCA9:
    eax = MEM32(esi + 0x204);
    xmm0.f[0] = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x34); /* movss */
    eax = eax + 0x30;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(esi + 0x200);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1D0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(eax) = 0;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x217);
    ecx = MEM32(esi + 0x204);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1CC);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0xC;
    ecx = ecx + 0x30;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, ecx);
    edi = edi + 0x7397C8;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM8(0x478A30) = 0;
    PUSH32(esp, 0); sub_001AD4A0(); /* call 0x001AD4A0 */

loc_0011BD55:
    MEM8(esi + 0x216) = LO8(eax);
    edx = MEM32(edi + 0x2C);
    ecx = SX8(LO8(eax));
    eax = MEM32(edi + 0x24);
    if (CMP_EQ(eax, edx)) goto loc_0011BD70; /* je: equal / zero */

loc_0011BD68:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0xC))); }
    if (CMP_EQ(ecx, edx)) goto loc_0011BDA0; /* je: equal / zero */

loc_0011BD70:
    if (TEST_S(ecx, ecx)) goto loc_0011BDA0; /* jl: less (signed <) */

loc_0011BD74:
    if (CMP_GE(ecx, MEM32(edi + 0xC))) goto loc_0011BDA0; /* jge: greater or equal (signed >=) */

loc_0011BD79:
    ecx = MEM32(edi + ecx * 4 + 0x17C);
    if (CMP_NE(MEM32(ecx), 2)) goto loc_0011BDA0; /* jne: not equal / not zero */

loc_0011BD85:
    if (TEST_Z(ecx, ecx)) goto loc_0011BDA0; /* je: equal / zero */

loc_0011BD89:
    eax = MEM32(ecx + 0xA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x11BBE0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AFF70(); /* call 0x001AFF70 */

loc_0011BDA0:
    SET_LO8(eax, MEM8(esi + 0x1351));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011BE39; /* je: equal / zero */

loc_0011BDAE:
    ecx = MEM32(esi + 0x200);
    if (CMP_GE(MEM32(ecx), 0x5A)) goto loc_0011BE32; /* jge: greater or equal (signed >=) */

loc_0011BDB9:
    edi = 0; /* xor self */
    ecx = esi + 0x11F0;

loc_0011BDC1:
    edx = MEM32(esi + 0x200);
    eax = MEM32(edx);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + -32), 16); /* movaps */
    eax = eax << 6;
    eax = eax + MEM32(edx + 4);
    /* cmp edi, 2 - flags set for next jcc */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x200);
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM16(eax + edx * 2) = 0;
    eax = MEM32(esi + 0x200);
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    eax = eax + edx * 2;
    if (CMP_GE(edi, 2)) goto loc_0011BE16; /* jge: greater or equal (signed >=) */

loc_0011BE11:
    MEM8(eax) = 0x26;
    goto loc_0011BE19;

loc_0011BE16:
    MEM8(eax) = 0x1A;

loc_0011BE19:
    eax = MEM32(esi + 0x200);
    edx = MEM32(eax);
    edx++;
    edi++;
    ecx = ecx + 0x40;
    /* cmp edi, 6 - flags set for next jcc */
    MEM32(eax) = edx;
    if (CMP_L(edi, 6)) goto loc_0011BDC1; /* jl: less (signed <) */

loc_0011BE2D:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011BE32:
    MEM8(esi + 0x1351) = 0;

loc_0011BE39:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
