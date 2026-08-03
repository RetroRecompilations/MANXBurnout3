#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001820D0
 * Original: 0x001820D0 - 0x001824B1 (993 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001820D0(void)
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

loc_001820D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    edi = edi + 0x3A3648;
    eax = MEM32(edi);
    eax = eax << 8;
    ecx = eax + esi + 0x90;
    eax = MEM32(ebp + 0x24);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (TEST_Z(eax, eax)) goto loc_00182118; /* je: equal / zero */

loc_00182107:
    edx = ZX8(MEM8(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1B40); /* mulss */
    goto loc_00182120;

loc_00182118:
    xmm1.f[0] = MEMF(0x3B1684); /* movss */

loc_00182120:
    eax = MEM32(esi + 0x64558);
    ecx = MEM32(esi + 0x6455C);
    esi = esi + 0x64558;
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
    if (CMP_GE(eax & eax, 0)) goto loc_00182153; /* jge: greater or equal (signed >=) */

loc_0018214D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00182153:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(ebp + 0x2C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001821B3; /* je: equal / zero */

loc_00182172:
    xmm2.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm0.f[0] = MEMF(edi + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(edi + 0x34); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x48) = eax;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x18) = eax;
    goto loc_001821D4;

loc_001821B3:
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x18) = 0;

loc_001821D4:
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + 0x24);
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001821FD; /* je: equal / zero */

loc_001821E9:
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001821F8:
    ecx = MEM32(ebp + 0x24);
    MEM8(ecx) = LO8(eax);

loc_001821FD:
    xmm0.f[0] = MEMF(ebp + 0x20); /* movss */
    xmm1.f[0] = MEMF(edi + 0x2C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x18); /* movss */
    edx = MEM32(ebp + 0x10);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x24); /* movss */
    eax = MEM32(ebp + 0x14);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x28); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x18); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x20); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x18);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x10); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x10); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x14); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x10); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(esp + 0x48);
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B19D0); /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edi = ecx + edx;
    /* test edi, edi - flags set for next jcc */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm1.b, 16); /* movaps */
    if (CMP_LE(edi & edi, 0)) goto loc_001824A8; /* jle: less or equal (signed <=) */

loc_00182368:
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    eax = esp + 0xD4;
    edi--;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018237C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A7ED8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A7ED8))) goto loc_001824A0; /* jbe: below or equal (unsigned <=) */

loc_00182397:
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = esp + 0xE4;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_001823AD:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
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
    /* test eax, eax - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if (CMP_GE(eax & eax, 0)) goto loc_001823DB; /* jge: greater or equal (signed >=) */

loc_001823D5:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001823DB:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x110), 16); /* movaps */
    ecx = esp + 0x18;
    edx = esp + 0x90;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0xF4;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_0018242B:
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + 0x28);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    eax = esp + 0x1C;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* cmp edi, MEM32(esp + 0x48) - flags set for next jcc */
    eax = MEM32(esp + 0x34);
    SET_LO8(ecx, (CMP_G(edi, MEM32(esp + 0x48))) ? 1 : 0); /* setg */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x64578);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x74), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00035C00(); /* call 0x00035C00 */

loc_001824A0:
    if (CMP_G(edi & edi, 0)) goto loc_00182368; /* jg: greater (signed >) */

loc_001824A8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
