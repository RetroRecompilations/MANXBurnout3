#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00197F90
 * Original: 0x00197F90 - 0x00198187 (503 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197F90(void)
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

loc_00197F90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x204);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x204);
    ecx = eax + 0x20;
    eax = edx + 0x20;
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_00197FB6:
    xmm1.f[0] = MEMF(0x3B1770); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00198014; /* jbe: below or equal (unsigned <=) */

loc_00197FC3:
    eax = MEM32(edi + 0x204);
    ecx = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    ecx = eax + 0x20;
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF160(); /* call 0x000FF160 */

loc_00197FEB:
    xmm1.f[0] = MEMF(0x3A7964); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019817F; /* jbe: below or equal (unsigned <=) */

loc_00197FFC:
    PUSH32(esp, esi);
    PUSH32(esp, 0x411560);
    edx = edi;
    PUSH32(esp, 0); sub_00141700(); /* call 0x00141700 */

loc_00198009:
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00198014:
    xmm1.f[0] = MEMF(0x3B1DA4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019817F; /* jbe: below or equal (unsigned <=) */

loc_00198025:
    esi = MEM32(esi + 0x204);
    edi = MEM32(edi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0019804A:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x10;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x39A25C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x395D78); /* mulss */
    xmm1.f[0] = MEMF(0x41A798); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0019811A; /* ja: above (unsigned >) */

loc_00198109:
    xmm3.f[0] = MEMF(0x3B1A04); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_0019817F; /* jbe: below or equal (unsigned <=) */

loc_0019811A:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 0xBF800000u;
    ecx = ecx | 0x3F800000;
    MEM32(esp + 0x10) = ecx;
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    edx = edx & 0xBF800000u;
    edx = edx | 0x3F800000;
    MEM32(esp + 0x10) = edx;
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00198174; /* jp: parity */

loc_00198169:
    eax = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00198174:
    eax = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019817F:
    POP32(esp, edi);
    eax = 0; /* xor self */
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
