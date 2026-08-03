#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00135350
 * Original: 0x00135350 - 0x00135492 (322 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135350(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00135350:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 4));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013539B; /* je: equal / zero */

loc_0013535F:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC064); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1868); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00135740(); /* call 0x00135740 */

loc_00135381:
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x35);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC064); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    goto loc_001353CD;

loc_0013539B:
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC064); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39BA2C); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00135740(); /* call 0x00135740 */

loc_001353BD:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x35);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC064); /* mulss */

loc_001353CD:
    xmm1.f[0] = MEMF(0x3EC928); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x68F8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC92C); /* movss */
    MEMF(esi + 0x62D8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x62E4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x6900) = xmm1.f[0]; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x39));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x6810));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00135431; /* je: equal / zero */

loc_00135412:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x6904) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00135426; /* je: equal / zero */

loc_0013541D:
    MEM8(esi + 0x683C) = MEM8(esi + 0x683C) & 0xFD;
    goto loc_00135454;

loc_00135426:
    eax = MEM32(esi + 0x63A4);
    eax = eax & 0xFFFFFFF7u;
    goto loc_0013544E;

loc_00135431:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x6904) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00135445; /* je: equal / zero */

loc_0013543C:
    MEM8(esi + 0x683C) = MEM8(esi + 0x683C) | 2;
    goto loc_00135454;

loc_00135445:
    eax = MEM32(esi + 0x63A4);
    eax = eax | 8;

loc_0013544E:
    MEM32(esi + 0x63A4) = eax;

loc_00135454:
    ecx = 0x16;
    esi = 0x3EC870;
    edi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0013548C; /* jle: less or equal (signed <=) */

loc_0013546E:
    ecx = MEM32(esp + 0x54);
    ecx = ecx + 0x14;

loc_00135475:
    SET_LO8(edx, MEM8(eax + ebx));
    edi = MEM32(ecx);
    edi = edi & 0xFFFFFFF0u;
    edx = ZX8(LO8(edx));
    edi = edi | edx;
    MEM32(ecx) = edi;
    eax++;
    ecx = ecx + 0x18;
    if (CMP_L(eax, esi)) goto loc_00135475; /* jl: less (signed <) */

loc_0013548C:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}
