#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00189D50
 * Original: 0x00189D50 - 0x0018A164 (1044 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D50(void)
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

loc_00189D50:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x184;
    xmm0.f[0] = MEMF(0x60DF78); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(esi + 0xF4);
    esi = esi + 0xF0;
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
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_GE(eax & eax, 0)) goto loc_00189DA2; /* jge: greater or equal (signed >=) */

loc_00189D9C:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00189DA2:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    ecx = 0x7547E4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x20) = ecx;
    ebx = 0x41A6EC;
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi;

loc_00189DF0:
    xmm0.f[0] = MEMF(ebx + -16); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = MEMF(ebx + -8); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx); /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -12); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -4); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -12); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    edi = MEM32(ebx + -20);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + -12); /* subss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(ebx + 0x10); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x20); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x28); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x14); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x18); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x1C); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0x24); /* movss */
    edi = edi << 8;
    MEMF(esp + 0xAC) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    edi = edi + 0x5A9A90;
    /* test eax, eax - flags set for next jcc */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm2.b, 16); /* movaps */
    if (TEST_Z(eax, eax)) goto loc_0018A145; /* je: equal / zero */

loc_00189F96:
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_00189FA0:
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = esp + 0x174;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00189FB6:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp + 0x140;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0x184;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00189FD4:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    ecx = MEM32(esi + 4);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= MEMF(esp + 0xB0) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esi);
    edx = eax;
    eax = eax << 0x10;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi) = eax;
    eax = eax + ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    ecx = esp + 0x120;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    ecx = esi;
    eax = esp + 0x164;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E6E0(); /* call 0x0017E6E0 */

loc_0018A039:
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(edi + 0x24);
    ecx = MEM32(edi + 0x1C);
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    edx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    /* addps: xmm0.f[0] += MEMF(esp + 0xF0) (packed 4xfloat) */
    eax = eax + eax * 2;
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    eax = eax << 4;
    eax = eax + ecx;
    /* test edx, edx - flags set for next jcc */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xD0); /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xD4); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xD8); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_GE(edx & edx, 0)) goto loc_0018A0CE; /* jge: greater or equal (signed >=) */

loc_0018A0C8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018A0CE:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = MEMF(esp + 0x6C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x60); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x24);
    /* test eax, eax - flags set for next jcc */
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0018A128; /* jne: not equal / not zero */

loc_0018A122:
    eax = MEM32(edi + 0x20);
    MEM32(edi + 0x24) = eax;

loc_0018A128:
    ecx = MEM32(edi + 0x24);
    eax = MEM32(esp + 0x24);
    ecx--;
    eax--;
    MEM32(edi + 0x24) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_00189FA0; /* jne: not equal / not zero */

loc_0018A13E:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x20);

loc_0018A145:
    ebx = ebx + 0x40;
    ecx = ecx + 4;
    /* cmp ebx, 0x41A7AC - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(ebx, 0x41A7AC)) goto loc_00189DF0; /* jl: less (signed <) */

loc_0018A15B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
