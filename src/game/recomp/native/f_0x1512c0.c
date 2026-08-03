#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001512C0
 * Original: 0x001512C0 - 0x001513D2 (274 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001512C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001512C0:
    esp = esp - 0x48;
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    SET_LO8(eax, MEM8(ebp + 0x8E4));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    MEM8(esp + 0x48) = 0;
    MEM8(esp + 0x49) = 0;
    MEM8(esp + 0x4A) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001513C4; /* jne: not equal / not zero */

loc_00151362:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    eax = MEM32(ebp + 0x85C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(ebp + 0x8E8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17D8); /* movss */
    edi = esp + 0xC;
    esi = 0x40B844;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x51) = 1;
    MEM8(esp + 0x50) = 2;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001513A4:
    MEM32(ebp + 0x87C) = eax;
    ecx = MEM32(eax + 0xC);
    MEM8(ecx + 0x84) = 0xFF;
    eax = MEM32(ebp + 0x87C);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001513C4; /* je: equal / zero */

loc_001513C0:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 0x10;

loc_001513C4:
    MEM8(ebp + 0x8E4) = 1;
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

}
