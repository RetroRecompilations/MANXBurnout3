#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B1370
 * Original: 0x001B1370 - 0x001B1775 (1029 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001B1370:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ecx);
    edx = ZX8(MEM8(ecx + 0xC));
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    ecx = ZX8(MEM8(ecx + 0xD));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx + eax;
    /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_AE(eax, ecx)) goto loc_001B15C9; /* jae: above or equal (unsigned >=) */

loc_001B13BB:
    goto loc_001B13C1;

loc_001B13BD:
    eax = MEM32(esp + 0x18);

loc_001B13C1:
    ecx = ZX8(MEM8(eax + 2));
    ecx = ecx + ecx * 2;
    xmm0.f[0] = MEMF(ebx + ecx * 4); /* movss */
    esi = ebx + ecx * 4;
    ecx = ZX8(MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    edx = ecx + ecx * 2;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + edx * 4); /* movss */
    edi = ebx + edx * 4;
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_001B147D:
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B14C3; /* je: equal / zero */

loc_001B1484:
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001B14C3; /* jbe: below or equal (unsigned <=) */

loc_001B1495:
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = 0;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_001B14C3:
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ecx + 3));
    if (CMP_AE(LO8(eax), 0xFF)) goto loc_001B15A7; /* jae: above or equal (unsigned >=) */

loc_001B14D2:
    eax = ZX8(LO8(eax));
    edx = eax + eax * 2;
    xmm0.f[0] = MEMF(ebx + edx * 4); /* movss */
    eax = ebx + edx * 4;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi); /* movss */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x70;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_001B1561:
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B15A7; /* je: equal / zero */

loc_001B1568:
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001B15A7; /* jbe: below or equal (unsigned <=) */

loc_001B1579:
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = 1;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_001B15A7:
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x28);
    eax = eax + edx;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(eax, ecx)) goto loc_001B13BD; /* jb: below (unsigned <) */

loc_001B15C1:
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_001B15D2; /* jne: not equal / not zero */

loc_001B15C9:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B15D2:
    eax = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    eax = eax + 0x10;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(esp + 0x34);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    edi = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x74);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x7C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x24);
    /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_001B1695; /* jne: not equal / not zero */

loc_001B1636:
    eax = ZX8(MEM8(ecx + 2));
    edx = eax + eax * 2;
    xmm0.f[0] = MEMF(ebx + edx * 4); /* movss */
    eax = ebx + edx * 4;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(ecx + 1));
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(ecx));
    ecx = eax + eax * 2;
    edx = esp + 0x40;
    eax = ebx + ecx * 4;
    PUSH32(esp, edx);
    goto loc_001B16F3;

loc_001B1695:
    eax = ZX8(MEM8(ecx + 3));
    eax = eax + eax * 2;
    xmm0.f[0] = MEMF(ebx + eax * 4); /* movss */
    eax = ebx + eax * 4;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(ecx + 1));
    edx = eax + eax * 2;
    eax = ebx + edx * 4;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    eax = ZX8(MEM8(ecx + 2));
    eax = eax + eax * 2;
    ecx = esp + 0x40;
    eax = ebx + eax * 4;
    PUSH32(esp, ecx);

loc_001B16F3:
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    esi = esp + 0x84;
    eax = esp + 0x54;
    ecx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B0FE0(); /* call 0x001B0FE0 */

loc_001B172D:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    esp = esp + 4;
    MEMF(edi + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEM32(edi + 0x68) = ebx;
    MEM32(edi + 0x64) = eax;
    MEM32(edi + 0x60) = edx;
    MEMF(edi + 0x58) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
