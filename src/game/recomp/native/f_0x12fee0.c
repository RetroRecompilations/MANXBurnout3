#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012FEE0
 * Original: 0x0012FEE0 - 0x001306FD (2077 bytes, 454 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012FEE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM8(eax + 0x45) = 0;
    MEM8(eax + 0x46) = 0;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x18C) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x40);
    SET_LO8(edx, MEM8(ecx + 0xC));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_00130007; /* jle: less or equal (signed <=) */

loc_0012FF21:
    edx = ebx + 0xFC0;

loc_0012FF27:
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    ecx = ecx << 0x10;
    edi = edi + esi;
    ecx = ecx + edi;
    MEM32(eax) = ecx;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = ecx + esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    if (CMP_GE(ecx & ecx, 0)) goto loc_0012FF4D; /* jge: greater or equal (signed >=) */

loc_0012FF47:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012FF4D:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + -24) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    ecx = ecx << 0x10;
    edi = edi + esi;
    ecx = ecx + edi;
    MEM32(eax) = ecx;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = ecx + esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    if (CMP_GE(ecx & ecx, 0)) goto loc_0012FF8E; /* jge: greater or equal (signed >=) */

loc_0012FF88:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012FF8E:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    ecx = ecx << 0x10;
    edi = edi + esi;
    ecx = ecx + edi;
    MEM32(eax) = ecx;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = ecx + esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    if (CMP_GE(ecx & ecx, 0)) goto loc_0012FFCE; /* jge: greater or equal (signed >=) */

loc_0012FFC8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012FFCE:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x1C);
    ecx++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    MEM32(esp + 0x1C) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esi + 0x40);
    edi = (uint32_t)(int32_t)SMEM8(edi + 0xC);
    if (CMP_L(ecx, edi)) goto loc_0012FF27; /* jl: less (signed <) */

loc_00130007:
    edx = 0xFFFFFAE0u;
    edx = edx - ebx;
    ecx = ebx + 0x520;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = 2;

loc_00130020:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    edi = MEM32(esi + 0x40);
    if (TEST_Z(edi, edi)) goto loc_00130089; /* je: equal / zero */

loc_00130052:
    edx = edx + ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + edi + 0x70), 16); /* movaps */
    edx = edx + edi + 0x70;
    memcpy((void *)XBOX_PTR(ecx + 0x1E0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x1F0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x200), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx + 0x210), xmm0.b, 16); /* movaps */

loc_00130089:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x50), xmm0.b, 16); /* movaps */
    edi = MEM32(esi + 0x40);
    if (TEST_Z(edi, edi)) goto loc_001300F9; /* je: equal / zero */

loc_001300BC:
    edx = edx + ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + edi + 0xB0), 16); /* movaps */
    edx = edx + edi + 0xB0;
    memcpy((void *)XBOX_PTR(ecx + 0x220), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x230), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x240), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx + 0x250), xmm0.b, 16); /* movaps */

loc_001300F9:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x90), xmm0.b, 16); /* movaps */
    edi = MEM32(esi + 0x40);
    if (TEST_Z(edi, edi)) goto loc_0013016F; /* je: equal / zero */

loc_00130132:
    edx = edx + ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + edi + 0xF0), 16); /* movaps */
    edx = edx + edi + 0xF0;
    memcpy((void *)XBOX_PTR(ecx + 0x260), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x270), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x280), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx + 0x290), xmm0.b, 16); /* movaps */

loc_0013016F:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0xB0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0xC0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0xD0), xmm0.b, 16); /* movaps */
    edi = MEM32(esi + 0x40);
    if (TEST_Z(edi, edi)) goto loc_001301EB; /* je: equal / zero */

loc_001301AE:
    edx = edx + ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + edi + 0x130), 16); /* movaps */
    edx = edx + edi + 0x130;
    memcpy((void *)XBOX_PTR(ecx + 0x2A0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x2B0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x2C0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx + 0x2D0), xmm0.b, 16); /* movaps */

loc_001301EB:
    edi = MEM32(esp + 0x1C);
    ecx = ecx + 0x100;
    edi--;
    MEM32(esp + 0x1C) = edi;
    if ((edi != 0)) goto loc_00130020; /* jne: not equal / not zero */

loc_00130200:
    ecx = MEM32(esi + 0x40);
    SET_LO8(edx, MEM8(ecx + 0xC));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = 0; /* xor self */
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0013037A; /* jle: less or equal (signed <=) */

loc_00130217:
    edx = ebx + 0x920;
    MEM32(esp + 0x28) = edx;
    edx = ebx + 0xF00;
    edi = 0xB60;
    MEM32(esp + 0x20) = edx;
    edx = ebx + 0x1A0;
    edi = edi - ebx;
    MEM32(esp + 0x18) = 0x2A4;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x2C) = edi;
    goto loc_00130250;

loc_0013024A:
    edi = MEM32(esp + 0x2C);
    edi = edi;

loc_00130250:
    if (TEST_Z(ecx, ecx)) goto loc_00130277; /* je: equal / zero */

loc_00130254:
    ecx = ecx + edi;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edx), 16); /* movaps */
    ecx = ecx + edx;
    memcpy((void *)XBOX_PTR(edx + -32), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + -16), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x10), xmm1.b, 16); /* movaps */

loc_00130277:
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    MEM32(esp + 0x20) = ecx;
    goto loc_00130290;

    /* nop */
    edi = edi;

loc_00130290:
    MEMF(ecx) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + -32), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + -16), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm1.b, 16); /* movaps */
    ecx = MEM32(esi + 0x40);
    if (TEST_Z(ecx, ecx)) goto loc_00130328; /* je: equal / zero */

loc_001302C6:
    esi = MEM32(esp + 0x18);
    esi = esi + edx;
    esi = esi << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + ecx + -42640), 16); /* movaps */
    esi = esi + ecx + -42640;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + edx + -628;
    ecx = ecx << 6;
    ecx = ecx + ebx;
    ebx = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm1.b, 16); /* movaps */
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(ebx + 0x40);
    esi = ecx + edx;
    esi = MEM32(ebx + esi * 4);
    ebx = MEM32(ebp + 0xC);
    ecx = ecx + edx;
    MEM32(ebx + ecx * 4 + 0x4A0) = esi;
    esi = MEM32(ebp + 8);

loc_00130328:
    ecx = MEM32(esp + 0x20);
    edx++;
    ecx = ecx + 4;
    edi = edi + 0x40;
    /* cmp edx, 2 - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(edx, 2)) goto loc_00130290; /* jl: less (signed <) */

loc_00130340:
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + 2;
    edx++;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = edi;
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    edx = edx + 0x40;
    /* cmp MEM32(esp + 0x1C), edi - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (CMP_L(MEM32(esp + 0x1C), edi)) goto loc_0013024A; /* jl: less (signed <) */

loc_00130378:
    edi = 0; /* xor self */

loc_0013037A:
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, edi)) goto loc_001303AC; /* je: equal / zero */

loc_00130381:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xB80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xB90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xBA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x20), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xBB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x30), xmm1.b, 16); /* movaps */

loc_001303AC:
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, edi)) goto loc_001303DF; /* je: equal / zero */

loc_001303B3:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xBC0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x40), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xBD0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x50), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xBE0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x60), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xBF0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x70), xmm1.b, 16); /* movaps */

loc_001303DF:
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, edi)) goto loc_0013041E; /* je: equal / zero */

loc_001303E6:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC00), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x80), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x90), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xA0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xB0), xmm1.b, 16); /* movaps */

loc_0013041E:
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, edi)) goto loc_0013045D; /* je: equal / zero */

loc_00130425:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xC0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xD0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xE0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xF0), xmm1.b, 16); /* movaps */

loc_0013045D:
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, edi)) goto loc_0013049C; /* je: equal / zero */

loc_00130464:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x100), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xC90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x110), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xCA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x120), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xCB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm1.b, 16); /* movaps */

loc_0013049C:
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, edi)) goto loc_001304DB; /* je: equal / zero */

loc_001304A3:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xCC0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x140), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xCD0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x150), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xCE0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x160), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xCF0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x170), xmm1.b, 16); /* movaps */

loc_001304DB:
    MEM8(ebx + 0x101B) = 0;
    edx = MEM32(esi + 0x40);
    ecx = 0; /* xor self */
    if (CMP_LE(MEM8(edx + 0xC), LO8(ecx))) goto loc_00130504; /* jle: less or equal (signed <=) */

loc_001304EC:
    /* nop */

loc_001304F0:
    MEM8(ebx + ecx + 0x101C) = 0;
    edx = MEM32(esi + 0x40);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_001304F0; /* jl: less (signed <) */

loc_00130504:
    MEM8(ebx + 0x1014) = 0;
    MEMF(ebx + 0x1010) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x1015) = 0;
    MEM8(ebx + 0x1016) = 0;
    ecx = 0; /* xor self */
    edx = ebx + 0x4B8;
    /* nop */

loc_00130530:
    MEM8(ebx + ecx + 0x4AC) = 0;
    MEMF(edx + 0xAC0) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 6)) goto loc_00130530; /* jl: less (signed <) */

loc_0013054D:
    edx = MEM32(esi + 0x40);
    ecx = 0; /* xor self */
    if (CMP_LE(MEM8(edx + 0xC), LO8(ecx))) goto loc_0013057D; /* jle: less or equal (signed <=) */

loc_00130557:
    edx = ebx + 0xF90;
    /* nop */

loc_00130560:
    MEM8(ebx + ecx + 0x4B2) = 0;
    MEMF(edx) = xmm0.f[0]; /* movss */
    edi = MEM32(esi + 0x40);
    edi = (uint32_t)(int32_t)SMEM8(edi + 0xC);
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, edi)) goto loc_00130560; /* jl: less (signed <) */

loc_0013057B:
    edi = 0; /* xor self */

loc_0013057D:
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x38) = edi;
    MEM8(eax + 0x44) = 0;
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x3C) = 8;
    MEM32(eax + 0x40) = 4;
    MEM8(eax + 0x45) = 0;
    MEMF(eax + 0x160) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x164) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x168) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x16C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x170) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x174) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x178) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x184) = 4;
    MEM8(eax + 0x185) = 4;
    MEMF(eax + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x180) = xmm0.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(eax + 0x140), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x150), xmm1.b, 16); /* movaps */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x120) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x124) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x128) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x12C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x110) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x114) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
