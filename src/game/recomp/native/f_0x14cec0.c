#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014CEC0
 * Original: 0x0014CEC0 - 0x0014D0E3 (547 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CEC0:
    PUSH32(esp, ecx);
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x20);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0014CEE9; /* je: equal / zero */

loc_0014CED8:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x20) = ebx;

loc_0014CEE9:
    eax = MEM32(edi + 0x24);
    if (CMP_EQ(eax, ebx)) goto loc_0014CF01; /* je: equal / zero */

loc_0014CEF0:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x24) = ebx;

loc_0014CF01:
    eax = MEM32(edi + 0x60);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x30) = ebx;
    MEM32(edi + 0x34) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0014CF1F; /* je: equal / zero */

loc_0014CF0E:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x60) = ebx;

loc_0014CF1F:
    eax = MEM32(edi + 0x64);
    if (CMP_EQ(eax, ebx)) goto loc_0014CF37; /* je: equal / zero */

loc_0014CF26:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x64) = ebx;

loc_0014CF37:
    eax = MEM32(edi + 0xA0);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x70) = ebx;
    MEM32(edi + 0x74) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0014CF5B; /* je: equal / zero */

loc_0014CF47:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xA0) = ebx;

loc_0014CF5B:
    eax = MEM32(edi + 0xA4);
    if (CMP_EQ(eax, ebx)) goto loc_0014CF79; /* je: equal / zero */

loc_0014CF65:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xA4) = ebx;

loc_0014CF79:
    eax = MEM32(edi + 0xE0);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0xB0) = ebx;
    MEM32(edi + 0xB4) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0014CFA3; /* je: equal / zero */

loc_0014CF8F:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xE0) = ebx;

loc_0014CFA3:
    eax = MEM32(edi + 0xE4);
    if (CMP_EQ(eax, ebx)) goto loc_0014CFC1; /* je: equal / zero */

loc_0014CFAD:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xE4) = ebx;

loc_0014CFC1:
    eax = MEM32(edi + 0x120);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0xF0) = ebx;
    MEM32(edi + 0xF4) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0014CFEB; /* je: equal / zero */

loc_0014CFD7:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x120) = ebx;

loc_0014CFEB:
    eax = MEM32(edi + 0x124);
    if (CMP_EQ(eax, ebx)) goto loc_0014D009; /* je: equal / zero */

loc_0014CFF5:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x124) = ebx;

loc_0014D009:
    eax = MEM32(edi + 0x160);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x130) = ebx;
    MEM32(edi + 0x134) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0014D033; /* je: equal / zero */

loc_0014D01F:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x160) = ebx;

loc_0014D033:
    eax = MEM32(edi + 0x164);
    if (CMP_EQ(eax, ebx)) goto loc_0014D051; /* je: equal / zero */

loc_0014D03D:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | 4;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x164) = ebx;

loc_0014D051:
    MEM32(edi + 0x170) = ebx;
    MEM32(edi + 0x174) = ebx;
    eax = MEM32(edi + 0x880);
    if (CMP_EQ(eax, ebx)) goto loc_0014D07D; /* je: equal / zero */

loc_0014D067:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_0014D071:
    MEM32(edi + 0x880) = 0;
    ebx = 0; /* xor self */

loc_0014D07D:
    ebp = edi + 0x91C;
    MEM32(esp + 0x10) = 4;
    goto loc_0014D090;

    /* nop */

loc_0014D090:
    esi = MEM32(ebp);
    if (CMP_EQ(esi, ebx)) goto loc_0014D0C1; /* je: equal / zero */

loc_0014D097:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_0014D0A1:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0014D0AB:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);

loc_0014D0C1:
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = ebx;
    MEM32(ebp + 0x10) = ebx;
    ebp = ebp + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0014D090; /* jne: not equal / not zero */

loc_0014D0D5:
    PUSH32(esp, 0); sub_0014CDF0(); /* call 0x0014CDF0 */

loc_0014D0DA:
    MEM32(edi) = 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

}
