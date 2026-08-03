#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001645A0
 * Original: 0x001645A0 - 0x00164823 (643 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001645A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001645A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x7A4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(ebx + 0x1030);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(eax, edi)) goto loc_0016466A; /* jle: less or equal (signed <=) */

loc_001645C9:
    eax = esp + 0x40;
    ecx = ebx + 0x320;

loc_001645D3:
    esi = MEM32(ecx);
    SET_LO8(edx, MEM8(esi + 0x215));
    if (CMP_EQ(LO8(edx), 1)) goto loc_001645EF; /* je: equal / zero */

loc_001645E0:
    if (CMP_EQ(LO8(edx), 2)) goto loc_001645EF; /* je: equal / zero */

loc_001645E5:
    if (CMP_EQ(LO8(edx), 3)) goto loc_001645EF; /* je: equal / zero */

loc_001645EA:
    if (CMP_NE(LO8(edx), 4)) goto loc_00164638; /* jne: not equal / not zero */

loc_001645EF:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    edx = MEM32(esi + 0x204);
    memcpy((void *)XBOX_PTR(eax + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + -52); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = ecx + -64;
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x20) = edx;
    edi++;
    eax = eax + 0x40;
    goto loc_0016464C;

loc_00164638:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(ecx + 4) = 0;

loc_0016464C:
    edx = MEM32(esp + 0x10);
    esi = MEM32(ebx + 0x1030);
    edx++;
    ecx = ecx + 0x70;
    /* cmp edx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(edx, esi)) goto loc_001645D3; /* jl: less (signed <) */

loc_00164666:
    MEM32(esp + 0x1C) = edi;

loc_0016466A:
    if (CMP_LE(edi & edi, 0)) goto loc_00164762; /* jle: less or equal (signed <=) */

loc_00164672:
    ecx = MEM32(ebx + 0x1030);
    edx = 1;
    eax = esp + 0x90;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edi;

loc_00164694:
    if (CMP_GE(edx, ecx)) goto loc_00164747; /* jge: greater or equal (signed >=) */

loc_0016469C:
    ecx = ecx - edx;
    ebx = eax;
    MEM32(esp + 0x20) = ecx;

loc_001646A4:
    ecx = ebx + -16;
    PUSH32(esp, ecx);
    edx = eax + -80;
    ecx = ebx + -32;
    PUSH32(esp, edx);
    eax = eax + 0xFFFFFFA0u;
    esi = esp + 0x34;
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_00164480(); /* call 0x00164480 */

loc_001646BF:
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    /* comiss xmm2.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(0x3B16E0))) goto loc_00164725; /* jbe: below or equal (unsigned <=) */

loc_001646CE:
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(eax + -64); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    xmm1.f[0] = MEMF(esp + 0x2C); /* movss */
    eax = eax + 0xFFFFFFA0u;
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00164725; /* jbe: below or equal (unsigned <=) */

loc_001646E9:
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm0.f[0], MEMF(eax + 0x24) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x24))) goto loc_0016470F; /* jbe: below or equal (unsigned <=) */

loc_001646FF:
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    edx = MEM32(ebx + 0x10);
    MEM32(eax + 0x2C) = edx;

loc_0016470F:
    /* comiss xmm0.f[0], MEMF(ebx + 4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebx + 4))) goto loc_00164725; /* jbe: below or equal (unsigned <=) */

loc_00164715:
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(eax + 0x30);
    MEM32(ebx + 0xC) = eax;

loc_00164725:
    eax = MEM32(esp + 0x20);
    ebx = ebx + 0x40;
    eax--;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x10);
    if ((eax != 0)) goto loc_001646A4; /* jne: not equal / not zero */

loc_0016473B:
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);

loc_00164747:
    esi = MEM32(esp + 0x14);
    eax = eax + 0x40;
    edx++;
    esi--;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = esi;
    if ((esi != 0)) goto loc_00164694; /* jne: not equal / not zero */

loc_00164762:
    esi = 0; /* xor self */
    if (CMP_L(edi, 4)) goto loc_001647F3; /* jl: less (signed <) */

loc_0016476D:
    edx = edi + -4;
    edx = edx >> 2;
    edx++;
    eax = esp + 0x54;
    esi = edx * 4;
    /* nop */

loc_00164780:
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(eax);
    MEM32(ecx + 0x50) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 0x44) = ebx;
    ecx = MEM32(eax + 0x4C);
    ebx = MEM32(eax + 0x40);
    MEM32(ecx + 0x50) = ebx;
    ebx = MEM32(eax + 0x44);
    MEM32(ecx + 0x54) = ebx;
    ebx = MEM32(eax + 0x48);
    MEM32(ecx + 0x44) = ebx;
    ecx = MEM32(eax + 0x8C);
    ebx = MEM32(eax + 0x80);
    MEM32(ecx + 0x50) = ebx;
    ebx = MEM32(eax + 0x84);
    MEM32(ecx + 0x54) = ebx;
    ebx = MEM32(eax + 0x88);
    MEM32(ecx + 0x44) = ebx;
    ecx = MEM32(eax + 0xCC);
    ebx = MEM32(eax + 0xC0);
    MEM32(ecx + 0x50) = ebx;
    ebx = MEM32(eax + 0xC4);
    MEM32(ecx + 0x54) = ebx;
    ebx = MEM32(eax + 0xC8);
    eax = eax + 0x100;
    edx--;
    MEM32(ecx + 0x44) = ebx;
    if ((edx != 0)) goto loc_00164780; /* jne: not equal / not zero */

loc_001647F3:
    if (CMP_GE(esi, edi)) goto loc_0016481C; /* jge: greater or equal (signed >=) */

loc_001647F7:
    ecx = esi;
    ecx = ecx << 6;
    eax = esp + ecx + 0x54;
    edi = edi - esi;

loc_00164802:
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 8);
    eax = eax + 0x40;
    edi--;
    MEM32(ecx + 0x44) = edx;
    if ((edi != 0)) goto loc_00164802; /* jne: not equal / not zero */

loc_0016481C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
