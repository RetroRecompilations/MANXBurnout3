#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013B270
 * Original: 0x0013B270 - 0x0013B47E (526 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B270:
    edx = MEM32(0x73A19C);
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0013B2C5; /* jle: less or equal (signed <=) */

loc_0013B286:
    goto loc_0013B290;

    /* nop */
    /* nop */

loc_0013B290:
    eax = MEM32(edi * 4 + 0x73A1A8);
    esi = MEM32(eax + 0x1924);
    if (TEST_Z(esi, esi)) goto loc_0013B2B8; /* je: equal / zero */

loc_0013B2A1:
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0013B2A9:
    eax = MEM32(esi + 8);
    edx = MEM32(0x73A19C);
    MEM32(esp + edi * 4 + 0x18) = eax;
    goto loc_0013B2C0;

loc_0013B2B8:
    MEM32(esp + edi * 4 + 0x18) = 0;

loc_0013B2C0:
    edi++;
    if (CMP_L(edi, edx)) goto loc_0013B290; /* jl: less (signed <) */

loc_0013B2C5:
    esi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0013B475; /* jle: less or equal (signed <=) */

loc_0013B2CF:
    /* nop */

loc_0013B2D0:
    ecx = MEM32(esp + esi * 4 + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0013B46C; /* je: equal / zero */

loc_0013B2DC:
    edx = MEM32(esi * 4 + 0x73A1A8);
    eax = MEM32(edx + 0x1924);
    /* cmp MEM8(eax + 0xC6), 0 - flags set for next jcc */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = MEM32(eax + 0x70);
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm5.f[0] = MEMF(edi + 0x24); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3EC0CC); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    if (CMP_EQ(MEM8(eax + 0xC6), 0)) goto loc_0013B44A; /* je: equal / zero */

loc_0013B326:
    xmm1.f[0] = MEMF(eax + 0x158); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    edx = eax + eax * 2;
    edx = edx << 4;
    eax = MEM32(edx + 0x64B38C);
    xmm2.f[0] = MEMF(eax + 0x13D4); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3EC0D0); /* mulss */
    xmm3.f[0] = MEMF(eax + 0x13D4); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3EC0D4); /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x38994C); /* mulss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0013B381; /* jbe: below or equal (unsigned <=) */

loc_0013B37C:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    goto loc_0013B389;

loc_0013B381:
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_0013B389; /* jbe: below or equal (unsigned <=) */

loc_0013B386:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */

loc_0013B389:
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm6.f[0], MEMF(esp + 0x34) - sets EFLAGS */
    if ((xmm6.f[0] >= MEMF(esp + 0x34))) goto loc_0013B3E3; /* jae: above or equal (unsigned >=) */

loc_0013B3AC:
    edx = MEM32(eax + 0x13F4);
    edx = MEM32(edx + 0x27D0);
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    MEMF(ebp + edx * 4 + 0x1E0) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EC0D8); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0013B3E3:
    eax = MEM32(eax + 0x13F4);
    SET_LO8(edx, MEM8(eax + 0x11EE));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0013B421; /* je: equal / zero */

loc_0013B3F3:
    xmm1.f[0] = MEMF(eax + 0x11D4); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(0x3F72F0); /* divss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */

loc_0013B421:
    if (CMP_LE(MEM32(0x73A1C0), 1)) goto loc_0013B44A; /* jle: less or equal (signed <=) */

loc_0013B42A:
    /* cmp MEM8(ecx + 0x5E), 1 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3EC0C0); /* movss */
    if (CMP_EQ(MEM8(ecx + 0x5E), 1)) goto loc_0013B440; /* je: equal / zero */

loc_0013B438:
    xmm0.f[0] = MEMF(0x3EC0C4); /* movss */

loc_0013B440:
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0013B44A:
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esi * 4 + 0x73A1A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0013B466:
    edx = MEM32(0x73A19C);

loc_0013B46C:
    esi++;
    if (CMP_L(esi, edx)) goto loc_0013B2D0; /* jl: less (signed <) */

loc_0013B475:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
