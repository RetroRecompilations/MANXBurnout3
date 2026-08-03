#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00106F20
 * Original: 0x00106F20 - 0x00107295 (885 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00106F20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x2B0);
    SET_LO8(eax, MEM8(eax + 0x218));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_00106F49; /* jl: less (signed <) */

loc_00106F3C:
    edx = MEM32(esi);
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00106F49:
    ecx = MEM32(esi + 0x2B0);
    edx = MEM32(ecx + 0x204);
    ecx = MEM32(esi + 0x204);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00106F66:
    eax = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm3.b, 16); /* movaps */
    eax = esi + 0x70;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm2.b, 16); /* movaps */
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm3.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_00106FA7:
    ecx = MEM32(esi + 0x204);
    ecx = ecx + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2B0);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00106FC0:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* cmp MEM8(esi + 0x2BA), 2 - flags set for next jcc */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if (CMP_NE(MEM8(esi + 0x2BA), 2)) goto loc_00107107; /* jne: not equal / not zero */

loc_00106FF2:
    ecx = (uint32_t)(int32_t)SMEM16(0x64ACEA);
    eax = MEM32(0x64ACE8);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x64ACEC);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEM32(0x64ACE8) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00107024; /* jge: greater or equal (signed >=) */

loc_0010701E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00107024:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0010705D; /* jge: greater or equal (signed >=) */

loc_00107057:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010705D:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x64ACE8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00107096; /* jge: greater or equal (signed >=) */

loc_00107090:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00107096:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(0x64ACE8);
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax + edx;
    eax = eax + ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x64ACE8) = eax;
    MEM32(0x64ACEC) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_001070D5; /* jge: greater or equal (signed >=) */

loc_001070CF:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001070D5:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    eax = esp + 0xC;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */

loc_00107107:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_00107110:
    SET_LO8(eax, MEM8(esi + 0x2BA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00107151; /* jne: not equal / not zero */

loc_0010711A:
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x10); /* divss */
    edx = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x100), xmm1.b, 16); /* movaps */
    goto loc_0010720B;

loc_00107151:
    eax = MEM32(esi + 0x2B0);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xE0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0xE0), xmm0.b, 16); /* movaps */
    ecx = MEM32(esi + 0x2B0);
    xmm0.f[0] = MEMF(esi + 0x1F0); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x1F0); /* divss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xE0), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xE0), xmm1.b, 16); /* movaps */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2B8);
    eax = MEM32(esi + 0x2B0);
    edx = MEM32(eax + 0x204);
    ecx = ecx + ecx * 2;
    ecx = ecx << 6;
    ecx = ecx + eax + 0xD70;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_001071C9:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xE0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3A2D50); /* movss */
    memcpy((void *)XBOX_PTR(esi + 0xE0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xE0), 16); /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = esp + 0x14;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(esi + 0xE0), xmm1.b, 16); /* movaps */

loc_0010720B:
    SET_LO8(ecx, MEM8(esi + 0x2BA));
    SET_LO8(eax, 1);
    if (CMP_NE(LO8(ecx), LO8(eax))) goto loc_00107247; /* jne: not equal / not zero */

loc_00107217:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x260), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x1E0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x1E0), xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x260), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x1D0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x1D0), xmm1.b, 16); /* movaps */

loc_00107247:
    MEM8(esi + 0x20C) = LO8(eax);
    eax = esi + 0x2C0;
    MEM32(esi + 0x208) = eax;
    ecx = eax + 0x40;
    MEM32(eax + 4) = ecx;
    edx = eax + 0x1C;
    ecx = eax + 0x100;
    MEM32(eax) = edx;
    MEM32(eax + 8) = ecx;
    edx = eax + 0x180;
    ecx = eax + 0x1A4;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    ecx = esi + 0x1D0;
    edx = esi + 0x1E0;
    PUSH32(esp, 0); sub_00156510(); /* call 0x00156510 */

loc_00107290:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
