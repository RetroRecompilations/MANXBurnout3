#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146530
 * Original: 0x00146530 - 0x00146A61 (1329 bytes, 334 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146530(void)
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

loc_00146530:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    /* cmp MEM32(esi + 0x20), 7 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(esi + 0x20), 7)) goto loc_00146A58; /* je: equal / zero */

loc_0014654C:
    xmm1.f[0] = MEMF(0x3B1D38); /* movss */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00146561; /* jbe: below or equal (unsigned <=) */

loc_0014655E:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_00146561:
    SET_LO8(ecx, MEM8(esi + 4));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0014658E; /* jne: not equal / not zero */

loc_00146575:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x40FBF0); /* subss */
    xmm1.f[0] = MEMF(ebp + 0x20); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00146A58; /* ja: above (unsigned >) */

loc_0014658E:
    /* cmp LO8(ecx), 1 - flags set for next jcc */
    SET_LO8(ebx, 0x3C);
    if (CMP_NE(LO8(ecx), 1)) goto loc_0014659A; /* jne: not equal / not zero */

loc_00146595:
    if (CMP_NE(MEM32(esi), 0)) goto loc_001465B7; /* jne: not equal / not zero */

loc_0014659A:
    if (CMP_BE(MEM8(esi + 6), LO8(ebx))) goto loc_001465A2; /* jbe: below or equal (unsigned <=) */

loc_0014659F:
    MEM8(esi + 6) = LO8(ebx);

loc_001465A2:
    SET_LO8(eax, MEM8(esi + 6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001465B7; /* je: equal / zero */

loc_001465A9:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi + 6) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_001465B7:
    if (CMP_NE(LO8(ecx), 1)) goto loc_00146644; /* jne: not equal / not zero */

loc_001465C0:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00146644; /* je: equal / zero */

loc_001465C6:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001465CB:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001468B1; /* je: equal / zero */

loc_001465D3:
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x14);
    if (CMP_NE(ecx, MEM32(esi + 0x34))) goto loc_001468B1; /* jne: not equal / not zero */

loc_001465E1:
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_001465EA:
    eax = 0x3AE83C;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_001465F4:
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0);
    ebx = esp + 0x24;
    eax = 0x40B7F4;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_0014660C:
    MEM32(esp + 0x80) = eax;
    eax = MEM32(ebp + 0x18);
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(esi);
    edi = esp + 0x68;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_00146641:
    MEM8(esi + 5) = MEM8(esi + 5) + 1;

loc_00146644:
    SET_LO8(eax, MEM8(esi + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001468C7; /* jne: not equal / not zero */

loc_0014664F:
    ebx = MEM32(ebp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    edx = MEM32(ebp + 0x1C);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_0014666E:
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_00146677:
    eax = esp + 0x30;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00146684:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm1.f[0] = MEMF(0x40FC14); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = ebx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_001466BD:
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = esp + 0x14;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_00146707:
    eax = MEM32(esi + 0x38);
    edx = eax + eax * 2;
    edx = edx << 4;
    eax = MEM32(edx + 0x64B38C);
    eax = MEM32(eax + 0x204);
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00146725:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x14); /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_00146749; /* jbe: below or equal (unsigned <=) */

loc_00146746:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */

loc_00146749:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = MEMF(0x40FC18); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(0x40FC1C); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x40FBF0); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBF4); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebp + 0x20); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x40FC0C); /* movss */
    xmm0.f[0] = MEMF(0x40FC10); /* movss */
    xmm2.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(0x40FBFC); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x40FBF8); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(0x40FBBA);
    eax = MEM32(0x40FBB8);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x40FBBC);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x40FBBC) = ecx;
    edx = 0; /* xor self */
    ecx = 0x7D0;
    MEM32(0x40FBB8) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00146863; /* jge: greater or equal (signed >=) */

loc_0014685D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00146863:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esi + 0x24);
    eax = ebx;
    ecx = esp + 0x30;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x40FC00)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(0x40FC04)); /* fld float */
    MEM32(esi + 0x28) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esi + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_001468AA:
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    goto loc_001468CA;

loc_001468B1:
    MEM8(esi + 6) = LO8(ebx);
    MEM8(esi + 4) = 0;
    MEM32(esi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_001468C7:
    edi = MEM32(ebp + 0x10);

loc_001468CA:
    xmm1.f[0] = MEMF(esi + 0x28); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00146A58; /* jb: below (unsigned <) */

loc_001468DB:
    /* comiss xmm0.f[0], MEMF(esi + 0x24) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esi + 0x24))) goto loc_00146A58; /* jbe: below or equal (unsigned <=) */

loc_001468E5:
    SET_LO8(eax, MEM8(esi + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00146A58; /* jne: not equal / not zero */

loc_001468F0:
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(eax, 2)) goto loc_00146929; /* je: equal / zero */

loc_001468F8:
    if (CMP_EQ(eax, 1)) goto loc_00146929; /* je: equal / zero */

loc_001468FD:
    PUSH32(esp, 0); sub_00243D95(); /* call 0x00243D95 */

loc_00146902:
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0014690E; /* jns: not sign (positive) */

loc_00146909:
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0014690E:
    eax++;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0x3AE824);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0014691F:
    xmm0.f[0] = MEMF(0x40FC20); /* movss */
    goto loc_00146953;

loc_00146929:
    PUSH32(esp, 0); sub_00243D95(); /* call 0x00243D95 */

loc_0014692E:
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0014693A; /* jns: not sign (positive) */

loc_00146935:
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0014693A:
    eax++;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x3AE830);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0014694B:
    xmm0.f[0] = MEMF(0x40FC24); /* movss */

loc_00146953:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    esp = esp + 0xC;
    eax = esp + 0x68;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0014696B:
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00146974:
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0);
    ebx = esp + 0x54;
    eax = 0x40B7F4;
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_0014698C:
    xmm0.f[0] = MEMF(edi); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEM32(esp + 0x80) = eax;
    eax = 0x3AE818;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xAD) = 0;
    MEM8(esp + 0xAC) = 0xA;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_001469F2:
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0);
    ebx = esp + 0x24;
    eax = 0x40B7F4;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_00146A0A:
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00146A1D; /* jge: greater or equal (signed >=) */

loc_00146A17:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00146A1D:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = esp + 0x68;
    esi = 0x40B844;
    MEMF(esp + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00146A35:
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    MEM8(ecx + 5) = 0;
    if (TEST_Z(eax, eax)) goto loc_00146A58; /* je: equal / zero */

loc_00146A42:
    edx = MEM32(eax + 0xC);
    MEM8(edx + 0x84) = 0xFF;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x34) = edx;
    MEM8(ecx + 4) = 1;

loc_00146A58:
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
