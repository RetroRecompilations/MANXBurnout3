#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00147EA0
 * Original: 0x00147EA0 - 0x00147F8A (234 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147EA0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00147EA0:
    esp = esp - 0x48;
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    eax = MEM32(ebx + 0xCC);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(0x752D80));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x4A) = 0;
    MEM8(esp + 0x49) = 1;
    MEM8(esp + 0x48) = 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00147F49; /* je: equal / zero */

loc_00147F3B:
    xmm0.f[0] = MEMF(0x3A2808); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00147F49:
    eax = MEM32(ebx + 0x110);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xFD2;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0xC;
    esi = 0x40B844;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00147F6E:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0xC0) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00147F83; /* je: equal / zero */

loc_00147F7A:
    edx = MEM32(eax + 0x14);
    MEM32(ebx + 0x118) = edx;

loc_00147F83:
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

}
