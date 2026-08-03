#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154270
 * Original: 0x00154270 - 0x0015434F (223 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154270(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00154270:
    eax = MEM32(esi + 0x5E4);
    esp = esp - 0x48;
    if (TEST_Z(eax, eax)) goto loc_0015434B; /* je: equal / zero */

loc_00154281:
    eax = MEM32(esi + 0x5EC);
    if (TEST_NZ(eax, eax)) goto loc_0015434B; /* jne: not equal / not zero */

loc_0015428F:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    eax = MEM32(esi + 0x5E8);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    ecx = esp;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x628); /* movss */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    eax = 0x40B844;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x49) = 0;
    MEM8(esp + 0x48) = 0xD;
    MEM8(esp + 0x4A) = 1;
    PUSH32(esp, 0); sub_001CD9F0(); /* call 0x001CD9F0 */

loc_00154336:
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x5EC) = eax;
    if (TEST_Z(eax, eax)) goto loc_0015434B; /* je: equal / zero */

loc_00154340:
    MEM32(esi + 0x618) = MEM32(esi + 0x618) | 4;
    MEM8(eax + 0x31) = MEM8(eax + 0x31) | 0x10;

loc_0015434B:
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}
