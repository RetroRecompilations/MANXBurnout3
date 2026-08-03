#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012D640
 * Original: 0x0012D640 - 0x0012E380 (3392 bytes, 787 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D640(void)
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

loc_0012D640:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x558;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    /* cmp ecx, 5 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0xB) = 0;
    if (CMP_A(ecx, 5)) goto loc_0012DDFB; /* ja: above (unsigned >) */

loc_0012D663:
    { uint32_t _jt = MEM32(ecx * 4 + 0x12E380); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0012D66Au) goto loc_0012D66A;
    if (_jt == 0x0012D689u) goto loc_0012D689;
    if (_jt == 0x0012DDC7u) goto loc_0012DDC7;
    if (_jt == 0x0012DDE9u) goto loc_0012DDE9;
    if (_jt == 0x0012DDFBu) goto loc_0012DDFB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012D66A:
    MEM8(esp + 0xA) = 1;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x1C) = 7;
    goto loc_0012D6A6;

loc_0012D689:
    MEM8(esp + 0xA) = 0;
    MEM32(esp + 0xC) = 5;

loc_0012D696:
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 6;

loc_0012D6A6:
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D6B5:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    esi = MEM32(esp + 0xC);
    eax = eax + 0x30;
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0xC4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D6D9:
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    edx = esp + 0x2E0;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D6EF:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x180), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x190), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1A0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x320;
    PUSH32(esp, eax);
    ecx = esi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x1B4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D72F:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1C0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1E0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1F0), xmm0.b, 16); /* movaps */

loc_0012D75E:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    ecx = esp + 0x160;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012D774:
    xmm0.f[0] = MEMF(ebx + 0x17C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x178); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1768); /* mulss */
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    edx = esp + 0x160;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = ebx + 0x150;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_00129340(); /* call 0x00129340 */

loc_0012D7AF:
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    fp_push((double)SMEM32(ebx)); /* fild */
    MEM32(ebx + 4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_0012D7D3; /* jge: greater or equal (signed >=) */

loc_0012D7CD:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012D7D3:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x185);
    ecx = esp + 0x2C0;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    ecx = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebx + 0x154) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012D801:
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    ecx = ecx + eax;
    MEM32(ebx) = eax;
    SET_LO8(eax, MEM8(esp + 0xB));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012E37A; /* jne: not equal / not zero */

loc_0012D825:
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x185);
    if (CMP_NE(esi, MEM32(esp + 0xC))) goto loc_0012D87A; /* jne: not equal / not zero */

loc_0012D832:
    ecx = MEM32(ebx);
    fp_push((double)SMEM32(ebx)); /* fild */
    /* test ecx, ecx - flags set for next jcc */
    eax = esp + 0x2C0;
    PUSH32(esp, eax);
    if (CMP_GE(ecx & ecx, 0)) goto loc_0012D848; /* jge: greater or equal (signed >=) */

loc_0012D842:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012D848:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x3B168C)); /* fld float */
    eax = ebx + 0x150;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00129340(); /* call 0x00129340 */

loc_0012D87A:
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = edi;
    esi = ebx;
    PUSH32(esp, 0); sub_0012D460(); /* call 0x0012D460 */

loc_0012D88F:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    memcpy((void *)XBOX_PTR(esp + 0xD4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0012D460(); /* call 0x0012D460 */

loc_0012D8A8:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x320;
    PUSH32(esp, ecx);
    ecx = edi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x264), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D8C4:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x30;
    edx = esp + 0x2E0;
    PUSH32(esp, edx);
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D8E3:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    eax = MEM32(ebx + 0x38);
    /* test eax, eax - flags set for next jcc */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    if (TEST_Z(eax, eax)) goto loc_0012D937; /* je: equal / zero */

loc_0012D90F:
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */

loc_0012D937:
    eax = esp + 0x40;
    PUSH32(esp, eax);
    edi = esp + 0x18;
    eax = esp + 0x34;
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_0012D310(); /* call 0x0012D310 */

loc_0012D94D:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    edx = esp + 0x320;
    PUSH32(esp, edx);
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x64), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D96B:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    esi = MEM32(esp + 0xC);
    eax = eax + 0x30;
    eax = esp + 0x2E0;
    PUSH32(esp, eax);
    ecx = esi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0xC4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D98F:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    eax = eax + 0x30;
    edx = esp + 0x520;
    PUSH32(esp, edx);
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x274), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D9B4:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x180), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x190), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1A0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x4E0;
    PUSH32(esp, eax);
    ecx = esi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x1B4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012D9F4:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1C0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1E0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    ecx = esp + 0x360;
    memcpy((void *)XBOX_PTR(esp + 0x1F0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012DA3A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x124), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x134), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x144), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x154), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    edx = esp + 0x3E4;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012DA8E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE8), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF8), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x108), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x468;
    memcpy((void *)XBOX_PTR(esp + 0x118), xmm0.b, 16); /* movaps */
    PUSH32(esp, eax);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012DAD4:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x210), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x224), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    edx = esp + 0x3A4;
    PUSH32(esp, edx);
    ecx = esp + 0xD8;
    eax = esp + 0x188;
    memcpy((void *)XBOX_PTR(esp + 0x238), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012DB29:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012DB6E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    esp = esp + 8;
    edx = esp + 0x160;
    PUSH32(esp, edx);
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012DB92:
    eax = esp + 0x160;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001292B0(); /* call 0x001292B0 */

loc_0012DBAB:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    esp = esp + 8;
    PUSH32(esp, ebx);
    ecx = esp + 0x74;
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00129040(); /* call 0x00129040 */

loc_0012DBCA:
    edx = esp + 0x120;
    PUSH32(esp, edx);
    eax = esp + 0x424;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    eax = esp + 0x1C8;
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012DBED:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = esp + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, ecx);
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012DC32:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = esp + 0x248;
    esp = esp + 8;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012DC51:
    ecx = esp + 0x240;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001292B0(); /* call 0x001292B0 */

loc_0012DC6A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    PUSH32(esp, ebx);
    ecx = esp + 0x74;
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00129040(); /* call 0x00129040 */

loc_0012DC84:
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    eax = esp + 0x4A0;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012DC9A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = eax + 0x30;
    ecx = esp + 0x280;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012DCB7:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    eax = eax + 0x30;
    eax = MEM32(ebx + 0x38);
    /* test eax, eax - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    if (TEST_Z(eax, eax)) goto loc_0012DD17; /* je: equal / zero */

loc_0012DCEF:
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */

loc_0012DD17:
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edi = esp + 0xC0;
    eax = esp + 0x34;
    esi = esp + 0xC4;
    PUSH32(esp, 0); sub_0012D310(); /* call 0x0012D310 */

loc_0012DD33:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x260), 16); /* movaps */
    eax = MEM32(ebx + 0x38);
    /* test eax, eax - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x270), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    if (TEST_Z(eax, eax)) goto loc_0012DD92; /* je: equal / zero */

loc_0012DD6A:
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */

loc_0012DD92:
    eax = esp + 0x40;
    PUSH32(esp, eax);
    edi = esp + 0x54;
    eax = esp + 0x34;
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_0012D310(); /* call 0x0012D310 */

loc_0012DDA8:
    xmm0.f[0] = MEMF(esp + 0xBC); /* movss */
    xmm1.f[0] = MEMF(esp + 0x50); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0012DE05; /* jbe: below or equal (unsigned <=) */

loc_0012DDBC:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_0012DE13;

loc_0012DDC7:
    MEM8(esp + 0xA) = 1;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x1C) = 7;
    goto loc_0012D6A6;

loc_0012DDE9:
    MEM8(esp + 0xA) = 0;
    MEM32(esp + 0xC) = 4;
    goto loc_0012D696;

loc_0012DDFB:
    MEM8(esp + 0xB) = 1;
    goto loc_0012D75E;

loc_0012DE05:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */

loc_0012DE13:
    ecx = esp + 0x280;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012DE2F:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x124), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x134), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x144), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x154), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    edx = esp + 0x4A4;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012DE83:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE8), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF8), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x108), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x428;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x11C), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_0012DEC9:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x210), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x224), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    edx = esp + 0x3A4;
    PUSH32(esp, edx);
    ecx = esp + 0xD8;
    eax = esp + 0x188;
    memcpy((void *)XBOX_PTR(esp + 0x238), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012DF1E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012DF63:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    esp = esp + 8;
    edx = esp + 0x160;
    PUSH32(esp, edx);
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012DF87:
    eax = esp + 0x160;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001292B0(); /* call 0x001292B0 */

loc_0012DFA0:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x184);
    PUSH32(esp, ebx);
    ecx = esp + 0x74;
    PUSH32(esp, 0); sub_00129040(); /* call 0x00129040 */

loc_0012DFBF:
    edx = esp + 0x120;
    PUSH32(esp, edx);
    eax = esp + 0x464;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    eax = esp + 0x1C8;
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012DFE2:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = esp + 0xA0;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, ecx);
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012E027:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esi = MEM32(esp + 0x14);
    esp = esp + 8;
    eax = esp + 0x240;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128D40(); /* call 0x00128D40 */

loc_0012E04A:
    ecx = esp + 0x240;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001292B0(); /* call 0x001292B0 */

loc_0012E063:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    PUSH32(esp, ebx);
    ecx = esp + 0x74;
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00129040(); /* call 0x00129040 */

loc_0012E07D:
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x14);
    esi = eax + 0x1C;
    eax = eax << 6;
    ecx = eax + edx + 0x730;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    esi = esi << 6;
    eax = esi + edx;
    edx = esp + 0x3E4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012E0AC:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebx + 0x14);
    ecx = ecx + esi;
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(esp + 0x1C);
    esi = eax + 0x1C;
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(ebx + 0x14);
    eax = eax << 6;
    ecx = eax + edx + 0x730;
    eax = esp + 0xE0;
    esi = esi << 6;
    PUSH32(esp, eax);
    eax = esi + edx;
    edx = esp + 0x364;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012E0FE:
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = ecx + esi;
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    SET_LO8(eax, MEM8(esp + 0xA));
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    edi = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 0x18);
    SET_LO8(ecx, MEM8(eax + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012E159; /* je: equal / zero */

loc_0012E131:
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0012E232; /* jle: less or equal (signed <=) */

loc_0012E139:
    eax = eax + 0xAC4;
    edi = edi;

loc_0012E140:
    if (CMP_EQ(MEM32(eax), 4)) goto loc_0012E194; /* je: equal / zero */

loc_0012E145:
    ecx = MEM32(ebx + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, edx)) goto loc_0012E140; /* jl: less (signed <) */

loc_0012E154:
    goto loc_0012E232;

loc_0012E159:
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0012E176; /* jle: less or equal (signed <=) */

loc_0012E15D:
    eax = eax + 0xAC4;

loc_0012E162:
    if (CMP_EQ(MEM32(eax), 5)) goto loc_0012E194; /* je: equal / zero */

loc_0012E167:
    ecx = MEM32(ebx + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, edx)) goto loc_0012E162; /* jl: less (signed <) */

loc_0012E176:
    eax = MEM32(ebx + 0x1C);
    /* test eax, eax - flags set for next jcc */
    edi = 2;
    if (TEST_Z(eax, eax)) goto loc_0012E240; /* je: equal / zero */

loc_0012E186:
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    eax = eax - edi;
    goto loc_0012E245;

loc_0012E194:
    if (TEST_S(edi, edi)) goto loc_0012E232; /* jl: less (signed <) */

loc_0012E19C:
    eax = MEM32(ebx + 0x14);
    SET_LO8(ecx, MEM8(eax + edi + 0x4B2));
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0012E232; /* je: equal / zero */

loc_0012E1AF:
    if (CMP_EQ(LO8(ecx), 4)) goto loc_0012E232; /* je: equal / zero */

loc_0012E1B8:
    esi = edi;
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    edi = edi + 6;
    esi = esi << 6;
    edx = esp + 0x284;
    edi = edi << 6;
    ecx = esi + eax + 0x1B0;
    eax = eax + edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012E1E1:
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + edi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = ecx + edi;
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(ebx + 0x14);
    ecx = esi + eax + 0x1B0;
    PUSH32(esp, ecx);
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012E221:
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(esi + ecx + 0x1B0), xmm0.b, 16); /* movaps */

loc_0012E232:
    SET_LO8(eax, MEM8(esp + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012E176; /* je: equal / zero */

loc_0012E23E:
    edi = 0; /* xor self */

loc_0012E240:
    eax = 2;

loc_0012E245:
    if (CMP_LE(eax & eax, 0)) goto loc_0012E2AC; /* jle: less or equal (signed <=) */

loc_0012E249:
    esi = edi;
    esi = esi << 6;
    MEM32(esp + 0x10) = eax;

loc_0012E252:
    eax = MEM32(ebx + 0x14);
    SET_LO8(ecx, MEM8(eax + edi + 0x4AC));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012E29D; /* jne: not equal / not zero */

loc_0012E260:
    edx = esp + 0x120;
    PUSH32(esp, edx);
    eax = eax + esi;
    edx = esp + 0x284;
    ecx = eax + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012E27A:
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = ecx + esi;
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */

loc_0012E29D:
    eax = MEM32(esp + 0x10);
    edi++;
    esi = esi + 0x40;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0012E252; /* jne: not equal / not zero */

loc_0012E2AC:
    SET_LO8(eax, MEM8(esp + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012E37A; /* je: equal / zero */

loc_0012E2B8:
    esi = 0; /* xor self */
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x54) = 1;
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_0012E2D0:
    ecx = MEM32(ebx + 0x18);
    SET_LO8(edx, MEM8(ecx + 0xC));
    eax = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0012E36C; /* jle: less or equal (signed <=) */

loc_0012E2E0:
    edx = MEM32(esp + esi * 4 + 0x50);
    ecx = ecx + 0xAC4;
    /* nop */

loc_0012E2F0:
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_0012E305; /* je: equal / zero */

loc_0012E2F4:
    edi = MEM32(ebx + 0x18);
    edi = (uint32_t)(int32_t)SMEM8(edi + 0xC);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edi)) goto loc_0012E2F0; /* jl: less (signed <) */

loc_0012E303:
    goto loc_0012E36C;

loc_0012E305:
    if (TEST_S(eax, eax)) goto loc_0012E36C; /* jl: less (signed <) */

loc_0012E309:
    edi = MEM32(ebx + 0x14);
    SET_LO8(ecx, MEM8(edi + eax + 0x4B2));
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0012E36C; /* je: equal / zero */

loc_0012E318:
    if (CMP_EQ(LO8(ecx), 4)) goto loc_0012E36C; /* je: equal / zero */

loc_0012E31D:
    esi = eax + 6;
    eax = eax << 6;
    ecx = eax + edi + 0x1B0;
    eax = esp + 0x200;
    PUSH32(esp, eax);
    edx = esp + 0x284;
    esi = esi << 6;
    eax = edi + esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001295B0(); /* call 0x001295B0 */

loc_0012E345:
    ecx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = ecx + esi;
    esi = MEM32(esp + 0x10);
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */

loc_0012E36C:
    esi++;
    /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, 2)) goto loc_0012E2D0; /* jl: less (signed <) */

loc_0012E37A:
    POP32(esp, edi);
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
