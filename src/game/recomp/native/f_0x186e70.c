#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00186E70
 * Original: 0x00186E70 - 0x001871B6 (838 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186E70(void)
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

loc_00186E70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    eax = MEM32(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0xA);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    eax = ZX8(MEM8(eax + 0x10));
    MEM32(esp + 0x3C) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    /* cmp eax, 8 - flags set for next jcc */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx + 0x64B38C);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0xB0), 16); /* movaps */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x48) = esi;
    if (CMP_A(eax, 8)) goto loc_00186EEB; /* ja: above (unsigned >) */

loc_00186EC1:
    { uint32_t _jt = MEM32(eax * 4 + 0x1871B8); /* switch: 9 entries, 6 targets */
    if (_jt == 0x00186EC8u) goto loc_00186EC8;
    if (_jt == 0x00186ECFu) goto loc_00186ECF;
    if (_jt == 0x00186ED6u) goto loc_00186ED6;
    if (_jt == 0x00186EDDu) goto loc_00186EDD;
    if (_jt == 0x00186EE4u) goto loc_00186EE4;
    if (_jt == 0x001871ADu) goto loc_001871AD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00186EC8:
    eax = 3;
    goto loc_00186EEF;

loc_00186ECF:
    eax = 2;
    goto loc_00186EEF;

loc_00186ED6:
    eax = 5;
    goto loc_00186EEF;

loc_00186EDD:
    eax = 1;
    goto loc_00186EEF;

loc_00186EE4:
    eax = 4;
    goto loc_00186EEF;

loc_00186EEB:
    eax = MEM32(esp + 0x1C);

loc_00186EEF:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0x14;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0.f[0], MEMF(0x395D58) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(0x395D58))) goto loc_00186F34; /* ja: above (unsigned >) */

loc_00186F22:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00186F34:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16A4); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B16B4); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1920); /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x372B18); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    edx = esp + 0x14;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x39CC08); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    ecx = esp + 0x14;
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    ebx = eax + edi + 0x39E10;
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    esi = edi + 0x64558;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x14) = 0x64;
    goto loc_00187050;

loc_0018704C:
    edi = MEM32(ebp + 8);
    /* nop */

loc_00187050:
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0xC4;
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_00187066:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
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
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    if (CMP_GE(eax & eax, 0)) goto loc_0018709C; /* jge: greater or equal (signed >=) */

loc_00187096:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0018709C:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    ecx = esp + 0x18;
    edx = esp + 0x70;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    ecx = esi;
    eax = esp + 0xB4;
    memcpy((void *)XBOX_PTR(esp + 0x64), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E600(); /* call 0x0017E600 */

loc_001870DD:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebx + 0x50);
    /* addps: xmm0.f[0] += MEMF(esp + 0x60) (packed 4xfloat) */
    eax = eax + eax * 4;
    ecx = ebx + eax * 4;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x64578); /* movss */
    edi = MEM32(ecx + 8);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    edx = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + edx;
    edx = edi;
    edx = edx & 3;
    ebx = edx;
    ebx = ebx << 5;
    ebx = ebx + eax + 0x10;
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(ecx + 4);
    edi++;
    /* cmp edi, ebx - flags set for next jcc */
    MEM32(ecx + 8) = edi;
    if (CMP_NE(edi, ebx)) goto loc_00187137; /* jne: not equal / not zero */

loc_00187130:
    MEM32(ecx + 8) = 0;

loc_00187137:
    ebx = MEM32(esp + 0x1C);
    edi = MEM32(ebx + 0x50);
    xmm1.f[0] = MEMF(esp + 0x30); /* movss */
    xmm2.f[0] = MEMF(esp + 0x38); /* movss */
    edi++;
    edi = edi & 3;
    MEM32(ebx + 0x50) = edi;
    edi = MEM32(esp + 0x18);
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x18) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + edx * 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    eax--;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0018704C; /* jne: not equal / not zero */

loc_001871AD:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
