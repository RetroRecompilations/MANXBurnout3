#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00181A80
 * Original: 0x00181A80 - 0x001820CF (1615 bytes, 372 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00181A80:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x194;
    edx = MEM32(ebp + 0x28);
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    esi = esi + 0x3A3648;
    eax = MEM32(esi);
    eax = eax << 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = eax + ebx + 0x90;
    eax = ZX8(MEM8(edx));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebx + 0x64558);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1B40); /* mulss */
    PUSH32(esp, edi);
    edi = ebx + 0x64558;
    edx = eax;
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(edi + 4);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(edi) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    MEM32(edi + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00181AF6; /* jge: greater or equal (signed >=) */

loc_00181AF0:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00181AF6:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(ebp + 0x30));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00181B59; /* je: equal / zero */

loc_00181B17:
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(esi + 0x34); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x3C) = eax;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x38) = eax;
    goto loc_00181B7B;

loc_00181B59:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x38) = 0;

loc_00181B7B:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00181B98:
    ecx = MEM32(ebp + 0x28);
    edx = MEM32(esp + 0x38);
    MEM8(ecx) = LO8(eax);
    eax = MEM32(esp + 0x3C);
    edx = edx + eax;
    if ((edx == 0)) goto loc_001820C6; /* je: equal / zero */

loc_00181BAD:
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_00181BB5:
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_00181BC5:
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm2.f[0] = MEMF(esi + 0x2C); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = esp + 0x2C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 0x64580); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x18); /* mulss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esi + 0x24); /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esi + 0x28); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x18); /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x20); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x10); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x14); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 0x14);
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm3.b, 16); /* movaps */
    MEM32(esp + 0x48) = eax;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    eax = esp + 0x44;
    xmm3.f[0] = MEMF(eax); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    edx = esp + 0x28;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* addps: xmm3.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    esp = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm3.b, 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = 0x80000000u;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    eax = MEM32(ebp + 0x20);
    xmm3.f[0] = MEMF(0x41A53C); /* movss */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x41A544); /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x41A540); /* addss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x41A538); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm2.b, 16); /* movaps */
    /* nop */

loc_00181E10:
    SET_LO8(eax, MEM8(ebp + 0x30));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x38);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00181E1F; /* jne: not equal / not zero */

loc_00181E1B:
    eax = MEM32(esp + 0x3C);

loc_00181E1F:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_001820B6; /* jle: less or equal (signed <=) */

loc_00181E2B:
    edx = MEM32(ebp + 0xC);
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(edi);
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    ecx = esp + 0x64;
    esi = eax;
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(edi + 4);
    esi = (uint32_t)((int32_t)esi >> 0x10);
    esi = esi + ecx;
    eax = eax << 0x10;
    eax = eax + esi;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    MEM32(edi) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    MEM32(edi + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00181E83; /* jge: greater or equal (signed >=) */

loc_00181E7D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00181E83:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 0x30);
    ecx = esp + 0x54;
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 0x6457C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x64578); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x6457C); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_00181ED5:
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    ecx = edi;
    eax = esp + 0x194;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00181EEB:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A7ED8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A7ED8))) goto loc_0018207B; /* jbe: below or equal (unsigned <=) */

loc_00181F06:
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = edi;
    eax = esp + 0x164;
    PUSH32(esp, 0); sub_0017E6E0(); /* call 0x0017E6E0 */

loc_00181F1C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x140;
    PUSH32(esp, ecx);
    ecx = edi;
    eax = esp + 0x184;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00181F3A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp + 0x120;
    PUSH32(esp, edx);
    ecx = edi;
    eax = esp + 0x174;
    memcpy((void *)XBOX_PTR(esp + 0xB4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00181F5B:
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x6C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = esp + 0x68;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    ecx = esp + 0x60;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00182007; /* jb: below (unsigned <) */

loc_00181FF6:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    goto loc_00182029;

loc_00182007:
    xmm2.f[0] = MEMF(esp + 0x40); /* movss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm4.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    if ((xmm4.f[0] <= xmm1.f[0])) goto loc_00182029; /* jbe: below or equal (unsigned <=) */

loc_0018201F:
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */

loc_00182029:
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    edx = esp + 0xF4;
    memcpy((void *)XBOX_PTR(esp + 0xF4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00035C00(); /* call 0x00035C00 */

loc_00182077:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001820AE; /* je: equal / zero */

loc_0018207B:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0xA0) (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x58); /* addss */
    eax--;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00181ED5; /* jne: not equal / not zero */

loc_001820AE:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */

loc_001820B6:
    SET_LO8(eax, MEM8(ebp + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001820C6; /* je: equal / zero */

loc_001820BD:
    MEM8(ebp + 0x30) = 0;
    goto loc_00181E10;

loc_001820C6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
