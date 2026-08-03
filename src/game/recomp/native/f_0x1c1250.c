#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1250
 * Original: 0x001C1250 - 0x001C1480 (560 bytes, 159 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001C1250:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x74;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = eax;
    ecx = ecx & 0x7F;
    PUSH32(esp, esi);
    esi = MEM32(ebx + ecx * 4 + 0x20);
    /* cmp MEM16(esi + 0x1C), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM16(esi + 0x1C), LO16(eax))) goto loc_001C1281; /* je: equal / zero */

loc_001C1271:
    ecx = MEM32(ebx + 0x1C);

loc_001C1274:
    if (CMP_EQ(esi, ecx)) goto loc_001C1281; /* je: equal / zero */

loc_001C1278:
    esi = esi + 0x20;
    if (CMP_NE(MEM16(esi + 0x1C), LO16(eax))) goto loc_001C1274; /* jne: not equal / not zero */

loc_001C1281:
    edx = MEM32(ebx + 8);
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    eax = MEM32(ebx + 0xC);
    xmm2.f[0] = MEMF(esi + 0x10); /* movss */
    MEM32(ebp + -8) = edx;
    xmm1.f[0] = MEMF(ebp + -8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + -16) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    xmm1.f[0] = MEMF(ebp + -4); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    edx = MEM32(ebp + -12);
    MEM32(ebp + -8) = ecx;
    xmm1.f[0] = MEMF(ebp + -8); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + -4) = edx;
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    MEMF(ebp + -80) = xmm2.f[0]; /* movss */
    MEMF(ebp + -76) = xmm2.f[0]; /* movss */

loc_001C12E3:
    xmm3.f[0] = MEMF(esi); /* movss */
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm3.f[0] < xmm2.f[0])) goto loc_001C1425; /* jb: below (unsigned <) */

loc_001C12F0:
    xmm2.f[0] = MEMF(esi + 0x10); /* movss */
    xmm3.f[0] = MEMF(esi + 0x14); /* movss */
    edi = MEM32(ebx + 4);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -16) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ebp + -4); /* movss */
    eax = MEM32(ebp + -16);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(ebp + -24) = eax;
    MEMF(ebp + -12) = xmm3.f[0]; /* movss */
    ecx = MEM32(ebp + -12);
    xmm3.f[0] = MEMF(ebp + -24); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEM32(ebp + -20) = ecx;
    xmm0.f[0] = MEMF(ebp + -20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x14); /* addss */
    ecx = MEM32(esi);
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -40);
    MEMF(ebp + -32) = xmm3.f[0]; /* movss */
    edx = MEM32(ebp + -32);
    MEM32(ebp + -96) = edx;
    edx = MEM32(esi + 4);
    MEM32(ebp + -48) = eax;
    xmm0.f[0] = MEMF(ebp + -48); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -96); /* addss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    MEM32(ebp + -112) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(ebp + -44) = ecx;
    xmm0.f[0] = MEMF(ebp + -44); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -92); /* addss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    eax = MEM32(ebp + -52);
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    ecx = MEM32(ebp + -64);
    MEM32(ebp + -108) = edx;
    edx = MEM32(ebp + -56);
    MEM32(ebp + -84) = eax;
    /* cmp edi, MEM32(0x4A1B78) - flags set for next jcc */
    MEM32(ebp + -88) = edx;
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -60);
    MEM32(ebp + -104) = ecx;
    MEM32(ebp + -100) = edx;
    if (CMP_EQ(edi, MEM32(0x4A1B78))) goto loc_001C1400; /* je: equal / zero */

loc_001C13D7:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C13E5; /* jbe: below or equal (unsigned <=) */

loc_001C13E0:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C13E5:
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001C13F4; /* je: equal / zero */

loc_001C13EC:
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034DE60(); /* call 0x0034DE60 */

loc_001C13F4:
    MEM32(0x75DB70) = edi;
    MEM32(0x4A1B78) = edi;

loc_001C1400:
    eax = ebp + -112;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + -96;
    PUSH32(esp, 0); sub_001C7430(); /* call 0x001C7430 */

loc_001C1415:
    xmm1.f[0] = MEMF(ebp + -8); /* movss */
    xmm0.f[0] = MEMF(ebp + -72); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;

loc_001C1425:
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    eax = ZX16(MEM16(eax));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001C1477; /* je: equal / zero */

loc_001C1436:
    xmm3.f[0] = MEMF(esi + 0x18); /* movss */
    edx = eax;
    edx = edx & 0x7F;
    esi = MEM32(ebx + edx * 4 + 0x20);
    /* cmp MEM16(esi + 0x1C), LO16(eax) - flags set for next jcc */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebp + -72) = xmm3.f[0]; /* movss */
    if (CMP_EQ(MEM16(esi + 0x1C), LO16(eax))) goto loc_001C146D; /* je: equal / zero */

loc_001C1457:
    ecx = MEM32(ebx + 0x1C);
    /* nop */

loc_001C1460:
    if (CMP_EQ(esi, ecx)) goto loc_001C146D; /* je: equal / zero */

loc_001C1464:
    esi = esi + 0x20;
    if (CMP_NE(MEM16(esi + 0x1C), LO16(eax))) goto loc_001C1460; /* jne: not equal / not zero */

loc_001C146D:
    xmm0.f[0] = MEMF(ebp + -72); /* movss */
    goto loc_001C12E3;

loc_001C1477:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}
