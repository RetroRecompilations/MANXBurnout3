#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00182920
 * Original: 0x00182920 - 0x00182CA9 (905 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00182920:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    xmm0.f[0] = MEMF(0x41A534); /* movss */
    xmm5.f[0] = MEMF(ebp + 0x1C); /* movss */
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    PUSH32(esp, esi);
    ebx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    edi = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEMF(0x41A534) = xmm1.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00182980; /* je: equal / zero */

loc_0018295D:
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1708); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edi = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x41A534) = xmm0.f[0]; /* movss */

loc_00182980:
    eax = MEM32(ebp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x395D58) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x395D58))) goto loc_001829C0; /* jbe: below or equal (unsigned <=) */

loc_001829B6:
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_001829E0;

loc_001829C0:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1A08); /* mulss */

loc_001829E0:
    edi = edi + ebx;
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    ecx = MEM32(ebp + 0x18);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = esp + 0x18;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3879E4); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1B3C); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    edx = esp + 0x18;
    xmm0.f[0] = MEMF(edx); /* movss */
    edx = MEM32(ebp + 0xC);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ecx = esp + 0x18;
    xmm1.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 0x14);
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm1.b, 16); /* movaps */
    if ((edi == 0)) goto loc_00182C75; /* je: equal / zero */

loc_00182AF2:
    esi = MEM32(ebp + 8);
    esi = esi + 0x64558;
    goto loc_00182B10;

loc_00182AFD:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    /* nop */

loc_00182B10:
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    edi--;
    if (CMP_GE(eax & eax, 0)) goto loc_00182B37; /* jge: greater or equal (signed >=) */

loc_00182B31:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00182B37:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi);
    edx = eax;
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = eax + ecx;
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if (CMP_GE(eax & eax, 0)) goto loc_00182B81; /* jge: greater or equal (signed >=) */

loc_00182B7B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00182B81:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0xC4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00182BAD:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edx = esp + 0x18;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00182C20; /* jbe: below or equal (unsigned <=) */

loc_00182C03:
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x3C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */

loc_00182C20:
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0xB4;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00182C33:
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x64578);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm5.f[0] = MEMF(ebp + 0x20); /* movss */
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    /* cmp edi, ebx - flags set for next jcc */
    edx = esp + 0x58;
    SET_LO8(eax, (CMP_G(edi, ebx)) ? 1 : 0); /* setg */
    PUSH32(esp, edx);
    ecx = ecx + 0x39DD0;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000365D0(); /* call 0x000365D0 */

loc_00182C65:
    if (TEST_NZ(edi, edi)) goto loc_00182AFD; /* jne: not equal / not zero */

loc_00182C6D:
    xmm5.f[0] = MEMF(ebp + 0x1C); /* movss */
    eax = MEM32(ebp + 0x10);

loc_00182C75:
    ecx = MEM32(ebp + 0x20);
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3B16EC); /* mulss */
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    MEMF(esp) = xmm5.f[0]; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_00182CA0:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
