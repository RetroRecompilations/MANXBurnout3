#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010CD10
 * Original: 0x0010CD10 - 0x0010D1B7 (1191 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CD10(void)
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

loc_0010CD10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi * 4 + 0x73A1A8);
    eax = eax + 0x390;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0012B390(); /* call 0x0012B390 */

loc_0010CD33:
    ecx = edi + edi * 2;
    ecx = ecx << 4;
    esi = MEM32(ecx + 0x64B38C);
    edx = MEM32(esi + 0x204);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    MEM32(esp + 0x1C) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0010CD74; /* jle: less or equal (signed <=) */

loc_0010CD56:
    ecx = esi + 0x8D3;
    /* nop */

loc_0010CD60:
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0010CD66; /* jne: not equal / not zero */

loc_0010CD65:
    edx++;

loc_0010CD66:
    ecx = ecx + 0xC0;
    eax--;
    if ((eax != 0)) goto loc_0010CD60; /* jne: not equal / not zero */

loc_0010CD6F:
    if (CMP_G(edx, 2)) goto loc_0010CD89; /* jg: greater (signed >) */

loc_0010CD74:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    xmm0.f[0] = MEMF(edi + ebx + 0x148); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x10); /* addss */
    edi = edi + ebx;
    goto loc_0010CD91;

loc_0010CD89:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    edi = edi + ebx;

loc_0010CD91:
    MEMF(edi + 0x148) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    eax = esi + 0xC0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x148); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A69C4) - sets EFLAGS */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    if ((xmm0.f[0] <= MEMF(0x3A69C4))) goto loc_0010D1AE; /* jbe: below or equal (unsigned <=) */

loc_0010CDDB:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_0010CE42; /* je: equal / zero */

loc_0010CDE4:
    ecx = MEM32(eax + 0x1B8);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0010CE42; /* je: equal / zero */

loc_0010CDF2:
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x90), _icall_esp); /* indirect call */
    }

loc_0010CDFA:
    if (CMP_EQ(eax, 6)) goto loc_0010D1AE; /* je: equal / zero */

loc_0010CE03:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0010CE0F:
    if (CMP_EQ(eax, 3)) goto loc_0010D1AE; /* je: equal / zero */

loc_0010CE18:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0010CE24:
    if (CMP_EQ(eax, 4)) goto loc_0010D1AE; /* je: equal / zero */

loc_0010CE2D:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0010CE39:
    if (CMP_EQ(eax, 5)) goto loc_0010D1AE; /* je: equal / zero */

loc_0010CE42:
    eax = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* mulps: xmm0.f[0] *= MEMF(esp + 0x40) (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x20)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = eax + 0x20;
    ecx = esp + 0x30;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_0010CEAA:
    xmm1.f[0] = MEMF(0x3A7950); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010D089; /* jbe: below or equal (unsigned <=) */

loc_0010CEBB:
    eax = esi + 0xD0;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = esp + 0x20;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x20))) goto loc_0010D089; /* jbe: below or equal (unsigned <=) */

loc_0010CF2B:
    ecx = MEM32(edi + 0x140);
    if (TEST_NZ(ecx, ecx)) goto loc_0010D089; /* jne: not equal / not zero */

loc_0010CF39:
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A795C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A795C))) goto loc_0010D089; /* jbe: below or equal (unsigned <=) */

loc_0010CF4E:
    /* comiss xmm0.f[0], MEMF(0x3B16B8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16B8))) goto loc_0010CFFA; /* jbe: below or equal (unsigned <=) */

loc_0010CF5B:
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x44) = ecx;
    /* comiss xmm0.f[0], MEMF(esp + 0x44) - sets EFLAGS */
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x18) = 0x20;
    if ((xmm0.f[0] > MEMF(esp + 0x44))) goto loc_0010CF90; /* ja: above (unsigned >) */

loc_0010CF88:
    MEM32(esp + 0x18) = 0x40;

loc_0010CF90:
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    eax = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010CFB3:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x20) ? xmm0.f[0] : MEMF(esp + 0x20)); /* minss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    eax = esi;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010CFE7:
    MEM32(edi + 0x140) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010CFFA:
    ecx = MEM32(esp + 0x28);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0010D007:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0x18) = 1;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0010D01F; /* ja: above (unsigned >) */

loc_0010D017:
    MEM32(esp + 0x18) = 2;

loc_0010D01F:
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B03EC); /* movss */
    eax = ebx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0010D042:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x24) ? xmm0.f[0] : MEMF(esp + 0x24)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x28) ? xmm0.f[0] : MEMF(esp + 0x28)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00125380(); /* call 0x00125380 */

loc_0010D076:
    MEM32(edi + 0x140) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010D089:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16B4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16B4))) goto loc_0010D1AE; /* jbe: below or equal (unsigned <=) */

loc_0010D09C:
    eax = MEM32(edi + 0x144);
    if (TEST_NZ(eax, eax)) goto loc_0010D1AE; /* jne: not equal / not zero */

loc_0010D0AA:
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    eax = MEM32(ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* FPU: fdivr dword ptr [0x3b168c] */
    /* shufps xmm1, xmm0, 0x39 */
    edx = eax;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    ecx = esp + 0x2C;
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 4);
    xmm0.f[0] = MEMF(0x3925A4); /* movss */
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(ebx) = eax;
    eax = eax + ecx;
    MEM32(ebx + 4) = eax;
    eax = MEM32(ebx);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17D8); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push((double)SMEM32(ebx)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0010D12F; /* jge: greater or equal (signed >=) */

loc_0010D129:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0010D12F:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x24) ? xmm0.f[0] : MEMF(esp + 0x24)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x28) ? xmm0.f[0] : MEMF(esp + 0x28)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1684) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1684))) goto loc_0010D181; /* jbe: below or equal (unsigned <=) */

loc_0010D16E:
    ecx = MEM32(esi + 0x204);
    edx = MEM32(esp + 0x1C);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    goto loc_0010D19F;

loc_0010D181:
    xmm1.f[0] = MEMF(0x3B16A4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010D1AE; /* jbe: below or equal (unsigned <=) */

loc_0010D18E:
    eax = MEM32(esi + 0x204);
    ecx = MEM32(esp + 0x1C);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);

loc_0010D19F:
    PUSH32(esp, 0); sub_00125100(); /* call 0x00125100 */

loc_0010D1A4:
    MEM32(edi + 0x144) = 1;

loc_0010D1AE:
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
