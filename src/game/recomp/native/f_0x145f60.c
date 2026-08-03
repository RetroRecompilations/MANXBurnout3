#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00145F60
 * Original: 0x00145F60 - 0x00146273 (787 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145F60:
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx + 0xD0));
    esp = esp - 0x1C;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00145F9B; /* je: equal / zero */

loc_00145F73:
    edi = edx + 0xF0;
    esi = 0x10;
    edi = edi;

loc_00145F80:
    if (CMP_EQ(MEM32(edi), 0)) goto loc_00145F8A; /* je: equal / zero */

loc_00145F85:
    PUSH32(esp, 0); sub_00147CE0(); /* call 0x00147CE0 */

loc_00145F8A:
    edi = edi + 0x130;
    esi--;
    if ((esi != 0)) goto loc_00145F80; /* jne: not equal / not zero */

loc_00145F93:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00145F9B:
    eax = 0; /* xor self */
    MEM32(edx + 0xE0) = eax;
    ecx = MEM32(0x73A1C0);
    /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(ecx, eax)) goto loc_0014612B; /* jle: less or equal (signed <=) */

loc_00145FBC:
    edi = 0x73B3BE;
    ebp = edx + 0xD8;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebp;
    /* nop */

loc_00145FD0:
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x7CE);
    esi = ZX8(MEM8(ebx + 0x649B36));
    eax = MEM32(edx + 0xE0);
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = eax + esi;
    MEM32(edx + 0xE0) = eax;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x28) = esi;
    MEM8(esp + 0x13) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00146020; /* je: equal / zero */

loc_00146000:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], MEMF(ebp) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(ebp))) goto loc_00146044; /* jbe: below or equal (unsigned <=) */

loc_0014600E:
    xmm0.f[0] = MEMF(ebp); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7ED8); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    goto loc_00146038;

loc_00146020:
    xmm0.f[0] = MEMF(ebp); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00146044; /* jbe: below or equal (unsigned <=) */

loc_0014602D:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A69C4); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */

loc_00146038:
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00146044; /* jbe: below or equal (unsigned <=) */

loc_0014603F:
    MEMF(ebp) = xmm1.f[0]; /* movss */

loc_00146044:
    ecx = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(esi & esi, 0)) goto loc_00146103; /* jle: less or equal (signed <=) */

loc_00146052:
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19);
    ebp = edx + 0x21C;
    edx = eax + 0x6499F8;
    MEM32(esp + 0x24) = edx;
    goto loc_00146070;

    /* nop */

loc_00146070:
    eax = MEM32(esp + 0x24);
    edi = ZX8(MEM8(eax + ecx));
    edx = 0; /* xor self */
    eax = ebp;
    /* nop */

loc_00146080:
    if (CMP_NE(MEM32(eax + -28), edi)) goto loc_00146089; /* jne: not equal / not zero */

loc_00146085:
    if (CMP_EQ(MEM8(eax), LO8(ebx))) goto loc_00146096; /* je: equal / zero */

loc_00146089:
    edx++;
    eax = eax + 0x130;
    if (CMP_L(edx, 0x10)) goto loc_00146080; /* jl: less (signed <) */

loc_00146094:
    goto loc_0014609B;

loc_00146096:
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_001460EA; /* jne: not equal / not zero */

loc_0014609B:
    edx = 0; /* xor self */
    eax = ebp;
    /* nop */

loc_001460A0:
    if (CMP_NE(MEM32(eax + -28), 0xFFFFFFFFu)) goto loc_001460AB; /* jne: not equal / not zero */

loc_001460A6:
    if (CMP_EQ(MEM8(eax), 0xFF)) goto loc_001460B8; /* je: equal / zero */

loc_001460AB:
    edx++;
    eax = eax + 0x130;
    if (CMP_L(edx, 0x10)) goto loc_001460A0; /* jl: less (signed <) */

loc_001460B6:
    goto loc_001460EA;

loc_001460B8:
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_001460EA; /* je: equal / zero */

loc_001460BD:
    ecx = MEM32(esp + 0x30);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x130);
    eax = edi + edi * 2;
    eax = eax << 7;
    esi = edx + ecx + 0xF0;
    eax = eax + 0x625FB0;
    edx = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00147800(); /* call 0x00147800 */

loc_001460E2:
    esi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x14);

loc_001460EA:
    ecx++;
    /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, esi)) goto loc_00146070; /* jl: less (signed <) */

loc_001460F7:
    edx = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);

loc_00146103:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x73A1C0);
    eax++;
    ebp = ebp + 4;
    edi = edi + 0x27E0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = edi;
    if (CMP_L(eax, ecx)) goto loc_00145FD0; /* jl: less (signed <) */

loc_0014612B:
    edi = edx + 0xF0;
    MEM32(esp + 0x1C) = 0x10;
    goto loc_00146141;

loc_0014613B:
    ecx = MEM32(0x73A1C0);

loc_00146141:
    ebp = MEM32(edi + 0x110);
    /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_001461B6; /* je: equal / zero */

loc_00146151:
    if (CMP_LE(ecx & ecx, 0)) goto loc_001461AD; /* jle: less or equal (signed <=) */

loc_00146155:
    esi = 0x73BB8C;
    MEM32(esp + 0x20) = ecx;
    edi = edi;

loc_00146160:
    edx = (uint32_t)(int32_t)SMEM8(esi);
    edx = ZX8(MEM8(edx + 0x649B36));
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00146194; /* jle: less or equal (signed <=) */

loc_00146170:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x12C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19);
    eax = eax + 0x6499F8;
    /* nop */

loc_00146180:
    ebx = ZX8(MEM8(eax));
    if (CMP_EQ(ebx, ebp)) goto loc_0014618F; /* je: equal / zero */

loc_00146187:
    ecx++;
    eax++;
    if (CMP_L(ecx, edx)) goto loc_00146180; /* jl: less (signed <) */

loc_0014618D:
    goto loc_00146194;

loc_0014618F:
    MEM8(esp + 0x13) = 1;

loc_00146194:
    eax = MEM32(esp + 0x20);
    esi = esi + 0x27E0;
    eax--;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_00146160; /* jne: not equal / not zero */

loc_001461A5:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001461B2; /* jne: not equal / not zero */

loc_001461AD:
    PUSH32(esp, 0); sub_00147CE0(); /* call 0x00147CE0 */

loc_001461B2:
    edx = MEM32(esp + 0x30);

loc_001461B6:
    eax = MEM32(esp + 0x1C);
    edi = edi + 0x130;
    eax--;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_0014613B; /* jne: not equal / not zero */

loc_001461CB:
    POP32(esp, ebp);
    MEM32(edx + 0xD4) = 0;
    eax = edx + 0x2E8;
    ecx = 4;
    POP32(esp, ebx);

loc_001461E2:
    esi = MEM32(eax + -304);
    if (TEST_Z(esi, esi)) goto loc_001461F2; /* je: equal / zero */

loc_001461EC:
    MEM32(edx + 0xD4) = MEM32(edx + 0xD4) + 1;

loc_001461F2:
    if (CMP_EQ(MEM32(eax), 0)) goto loc_001461FD; /* je: equal / zero */

loc_001461F7:
    MEM32(edx + 0xD4) = MEM32(edx + 0xD4) + 1;

loc_001461FD:
    esi = MEM32(eax + 0x130);
    if (TEST_Z(esi, esi)) goto loc_0014620D; /* je: equal / zero */

loc_00146207:
    MEM32(edx + 0xD4) = MEM32(edx + 0xD4) + 1;

loc_0014620D:
    esi = MEM32(eax + 0x260);
    if (TEST_Z(esi, esi)) goto loc_0014621D; /* je: equal / zero */

loc_00146217:
    MEM32(edx + 0xD4) = MEM32(edx + 0xD4) + 1;

loc_0014621D:
    eax = eax + 0x4C0;
    ecx--;
    if ((ecx != 0)) goto loc_001461E2; /* jne: not equal / not zero */

loc_00146225:
    edi = edx + 0xF0;
    esi = 0x10;

loc_00146230:
    if (CMP_EQ(MEM32(edi), 0)) goto loc_00146245; /* je: equal / zero */

loc_00146235:
    eax = MEM32(edx + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00146FA0(); /* call 0x00146FA0 */

loc_00146241:
    edx = MEM32(esp + 0x28);

loc_00146245:
    edi = edi + 0x130;
    esi--;
    if ((esi != 0)) goto loc_00146230; /* jne: not equal / not zero */

loc_0014624E:
    esi = edx + 0x13F0;
    edi = 0x10;
    /* nop */

loc_00146260:
    if (CMP_EQ(MEM32(esi), 0)) goto loc_0014626C; /* je: equal / zero */

loc_00146265:
    eax = esi;
    PUSH32(esp, 0); sub_00142690(); /* call 0x00142690 */

loc_0014626C:
    esi = esi + 0x5C;
    edi--;
    if ((edi != 0)) goto loc_00146260; /* jne: not equal / not zero */

loc_00146272:
    POP32(esp, edi);

}
