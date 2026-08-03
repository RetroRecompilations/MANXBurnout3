#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B24A0
 * Original: 0x001B24A0 - 0x001B26E5 (581 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B24A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001B24A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    ebx = ZX8(MEM8(edi + 0xE));
    esi = MEM32(edi);
    MEM32(esp + 0x30) = eax;
    eax = ZX8(MEM8(edi + 0xD));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ecx = 0; /* xor self */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(ecx + 0x50); /* movss */
    ebx = ebx + esi;
    /* cmp esi, ebx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_AE(esi, ebx)) goto loc_001B261D; /* jae: above or equal (unsigned >=) */

loc_001B24EB:
    goto loc_001B24F0;

    /* nop */

loc_001B24F0:
    eax = MEM32(esp + 0x18);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_001B2534; /* jne: not equal / not zero */

loc_001B24F9:
    edx = ZX8(MEM8(esi));
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_001B0F00(); /* call 0x001B0F00 */

loc_001B2505:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = ZX8(MEM8(esi + 1));
    PUSH32(esp, edi);
    eax = esp + 0xC4;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001B0F00(); /* call 0x001B0F00 */

loc_001B251E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = ZX8(MEM8(esi + 2));
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0xD4;
    goto loc_001B2549;

loc_001B2534:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x74), 16); /* movaps */
    edx = ZX8(MEM8(esi + 3));
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    eax = esp + 0x84;

loc_001B2549:
    PUSH32(esp, 0); sub_001B0F00(); /* call 0x001B0F00 */

loc_001B254E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x64;
    memcpy((void *)XBOX_PTR(esp + 0x84), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_001B257E:
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B25E7; /* je: equal / zero */

loc_001B2585:
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001B25E7; /* jbe: below or equal (unsigned <=) */

loc_001B2596:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    ecx = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_001B25E7:
    if (CMP_AE(MEM8(esi + 3), 0xFF)) goto loc_001B25FF; /* jae: above or equal (unsigned >=) */

loc_001B25ED:
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_001B25FF; /* jne: not equal / not zero */

loc_001B25F5:
    MEM32(esp + 0x18) = 1;
    goto loc_001B260D;

loc_001B25FF:
    eax = ZX8(MEM8(edi + 0xD));
    esi = esi + eax;
    MEM32(esp + 0x18) = 0;

loc_001B260D:
    if (CMP_B(esi, ebx)) goto loc_001B24F0; /* jb: below (unsigned <) */

loc_001B2615:
    ebx = MEM32(esp + 0x28);
    if (TEST_NZ(ebx, ebx)) goto loc_001B2626; /* jne: not equal / not zero */

loc_001B261D:
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B2626:
    edx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    edx = edx + 0x10;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = edx;
    esi = MEM32(ebp + 8);
    edi = MEM32(esp + 0x24);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = edi;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    eax = esp + 0x94;
    esi = esp + 0x84;
    PUSH32(esp, 0); sub_001B0FE0(); /* call 0x001B0FE0 */

loc_001B26A0:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(edi + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    esp = esp + 4;
    MEMF(edi + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    MEM32(edi + 0x60) = ebx;
    MEM32(edi + 0x68) = ecx;
    MEM32(edi + 0x64) = edx;
    MEMF(edi + 0x58) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);

}
