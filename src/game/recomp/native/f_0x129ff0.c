#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00129FF0
 * Original: 0x00129FF0 - 0x0012A1FF (527 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00129FF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_0012A023; /* jle: less or equal (signed <=) */

loc_0012A00C:
    esi = edx + 0xAC4;

loc_0012A012:
    if (CMP_EQ(MEM32(esi), 4)) goto loc_0012A1ED; /* je: equal / zero */

loc_0012A01B:
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, eax)) goto loc_0012A012; /* jl: less (signed <) */

loc_0012A023:
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 0x18);

loc_0012A02F:
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0012A04D; /* jle: less or equal (signed <=) */

loc_0012A035:
    edi = edx + 0xAC4;
    goto loc_0012A040;

    /* nop */

loc_0012A040:
    if (CMP_EQ(MEM32(edi), 2)) goto loc_0012A050; /* je: equal / zero */

loc_0012A045:
    esi++;
    edi = edi + 4;
    if (CMP_L(esi, eax)) goto loc_0012A040; /* jl: less (signed <) */

loc_0012A04D:
    esi = esi | 0xFFFFFFFFu;

loc_0012A050:
    if (TEST_S(ecx, ecx)) goto loc_0012A1F6; /* jl: less (signed <) */

loc_0012A058:
    if (TEST_S(esi, esi)) goto loc_0012A1F6; /* jl: less (signed <) */

loc_0012A060:
    eax = MEM32(ebx + 0x14);
    if (CMP_EQ(MEM8(eax + ecx + 0x4B2), 3)) goto loc_0012A1F6; /* je: equal / zero */

loc_0012A071:
    edi = esi + 6;
    ebx = esi + 0x34;
    edi = edi << 6;
    ebx = ebx << 6;
    ecx = edi + eax;
    PUSH32(esp, 0x40AF70);
    eax = ebx + edx;
    PUSH32(esp, 0); sub_0010C3B0(); /* call 0x0010C3B0 */

loc_0012A08D:
    eax = MEM32(ebp + 0x18);
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esi = esi << 7;
    eax = esi;
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + eax + 0xC70), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + eax + 0xC30), 16); /* movaps */
    ecx = ecx + eax;
    ecx = MEM32(esi + 0x18);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    eax = eax + ecx;
    ecx = MEM32(esi + 0x14);
    edx = esp + 0x20;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x2E0), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x2A0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    edx = esp + 0x20;
    eax = esp + 0x24;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm1.f[0] = MEMF(edx); /* movss */
    PUSH32(esp, eax);
    ecx = ecx + edi;
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    memcpy((void *)XBOX_PTR(esp + 0x3C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0012A11A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esi + 0x18);
    edx = esp + 0x3C;
    eax = eax + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x54;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0012A136:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0x14);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x34), 16); /* movaps */
    eax = eax << 6;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + ecx + 0x1B0), 16); /* movaps */
    eax = eax + ecx + 0x1B0;
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm2.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    SET_LO8(eax, MEM8(ebp + 0x10));
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    esp = esp + 0x14;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012A18D; /* je: equal / zero */

loc_0012A17F:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69C0); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_0012A18D:
    xmm1.f[0] = MEMF(esp + 0x38); /* movss */
    edx = MEM32(ebp + 0x14);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = esp + 0x30;
    MEMF(edx) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0012A1A7:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(esp + 0x18))) goto loc_0012A1F6; /* jae: above or equal (unsigned >=) */

loc_0012A1CC:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0012A1D5:
    xmm1.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0012A1ED:
    MEM32(esp + 0x18) = ecx;
    goto loc_0012A02F;

loc_0012A1F6:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
