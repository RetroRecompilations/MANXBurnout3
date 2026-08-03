#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00186030
 * Original: 0x00186030 - 0x00186894 (2148 bytes, 492 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186030(void)
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

loc_00186030:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x160), 16); /* movaps */
    eax = MEM32(edi + 0xCC0);
    ecx = MEM32(edi + 0xCC4);
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x170), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x194); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x94); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x49C); /* addss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x190));
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x6457C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = edx & 0xFF;
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(edi + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x6457C); /* mulss */
    edx = edx << 4;
    edx = edx + 0x3A3BF8;
    eax = eax + 0x5C;
    ecx = esp + 0x68;
    esi = edx;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_001860F9:
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    MEM32(ebx + 0x6455C) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0018612F; /* jge: greater or equal (signed >=) */

loc_00186129:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018612F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fst */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = esp + 0x10;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B178C) - sets EFLAGS */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(0x3B178C))) goto loc_00186200; /* jbe: below or equal (unsigned <=) */

loc_001861A6:
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3A360C) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3A360C))) goto loc_00186200; /* jbe: below or equal (unsigned <=) */

loc_001861B5:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, eax);
    edi = edi + 0x11B0;
    edx = ebx + 0x5B9B0;
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00044EF0(); /* call 0x00044EF0 */

loc_001861EC:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    edi = MEM32(ebp + 8);

loc_00186200:
    /* comiss xmm0.f[0], MEMF(0x3B194C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B194C))) goto loc_0018679A; /* jbe: below or equal (unsigned <=) */

loc_0018620D:
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    MEM32(ebx + 0x6455C) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0018626C; /* jge: greater or equal (signed >=) */

loc_00186266:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018626C:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax << 0x10;
    eax = eax + edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x64558) = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebx + 0x6455C) = ecx;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001862BC; /* jge: greater or equal (signed >=) */

loc_001862B6:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001862BC:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax << 0x10;
    eax = eax + edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x64558) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebx + 0x6455C) = ecx;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0018630C; /* jge: greater or equal (signed >=) */

loc_00186306:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018630C:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    MEM32(ebx + 0x6455C) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00186358; /* jge: greater or equal (signed >=) */

loc_00186352:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186358:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7F34); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    MEM32(ebx + 0x6455C) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_001863CA; /* jge: greater or equal (signed >=) */

loc_001863C4:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001863CA:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(edi + 0xCC4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = ecx + 0x1017;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x68;
    edx = esp + 0x88;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00186462:
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    MEM32(ebx + 0x6455C) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_00186498; /* jge: greater or equal (signed >=) */

loc_00186492:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186498:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebx + 0x64558) = eax;
    eax = eax + ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebx + 0x6455C) = eax;
    eax = MEM32(ebx + 0x64558);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001864EE; /* jge: greater or equal (signed >=) */

loc_001864E8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001864EE:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebx + 0x64558) = eax;
    eax = eax + ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebx + 0x6455C) = eax;
    eax = MEM32(ebx + 0x64558);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00186544; /* jge: greater or equal (signed >=) */

loc_0018653E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186544:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebx + 0x64558) = eax;
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebx + 0x6455C) = eax;
    eax = MEM32(ebx + 0x64558);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00186596; /* jge: greater or equal (signed >=) */

loc_00186590:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186596:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A69BC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A69BC))) goto loc_001866A0; /* jbe: below or equal (unsigned <=) */

loc_001865F4:
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    eax = eax + ecx;
    MEM32(ebx + 0x6455C) = eax;
    eax = MEM32(ebx + 0x64558);
    if (CMP_GE(eax & eax, 0)) goto loc_00186630; /* jge: greater or equal (signed >=) */

loc_0018662A:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186630:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(edi + 0xCC4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + 0x1019;
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x74;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, edx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = esp + 0x88;
    eax = esp + 0x48;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 4;
    goto loc_00186794;

loc_001866A0:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x64558);
    ecx = MEM32(ebx + 0x6455C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(ebx + 0x64558) = eax;
    fp_push((double)SMEM32(ebx + 0x64558)); /* fild */
    eax = eax + ecx;
    MEM32(ebx + 0x6455C) = eax;
    eax = MEM32(ebx + 0x64558);
    if (CMP_GE(eax & eax, 0)) goto loc_00186707; /* jge: greater or equal (signed >=) */

loc_00186701:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00186707:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(edi + 0xCC4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = ecx + 0x1018;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x68;
    edx = esp + 0x88;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, ecx);
    eax = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 3;

loc_00186794:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_0018679A:
    memcpy(xmm2.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    ecx = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = 0x80000000u;
    esi = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A20); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0xC))) goto loc_00186873; /* jbe: below or equal (unsigned <=) */

loc_00186809:
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A3614) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A3614))) goto loc_00186873; /* jbe: below or equal (unsigned <=) */

loc_00186818:
    ecx = MEM32(esp + 0x64);
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x43160000);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = esp + 0x54;
    xmm0.f[0] = MEMF(eax); /* movss */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, ebx);
    ecx = 3;
    eax = esp + 0x9C;
    memcpy((void *)XBOX_PTR(esp + 0x9C), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_00186873:
    PUSH32(esp, 0x60DFD0);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_00187E40(); /* call 0x00187E40 */

loc_00186880:
    eax = edi;
    ecx = 0x40F270;
    PUSH32(esp, 0); sub_0014D2C0(); /* call 0x0014D2C0 */

loc_0018688C:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
