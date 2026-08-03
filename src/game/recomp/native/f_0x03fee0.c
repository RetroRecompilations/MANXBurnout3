#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003FEE0
 * Original: 0x0003FEE0 - 0x000402C0 (992 bytes, 234 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0003FEE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0.f[0] = MEMF(0x35BEE0); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x35FB48);
    xmm1.f[0] = MEMF(esi + 0xEF8); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0xEFC); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, edi);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xEF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xEFC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0034F5B0(); /* call 0x0034F5B0 */

loc_0003FF33:
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0003FF48; /* jb: below (unsigned <) */

loc_0003FF3A:
    eax = MEM32(0x3609FC);
    PUSH32(esp, eax);
    eax = eax >> 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003518E0(); /* call 0x003518E0 */

loc_0003FF48:
    PUSH32(esp, 0); sub_003558A0(); /* call 0x003558A0 */

loc_0003FF4D:
    ebx = MEM32(ebp + 8);
    MEM32(esi) = eax;
    edx = ebx + 0x500;
    eax = ebx + 0x6E0;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0); sub_0003FE10(); /* call 0x0003FE10 */

loc_0003FF6B:
    ecx = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    eax = ebx + 0x660;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 0x664); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1684); /* addss */
    MEM32(esp + 0x1C) = eax;
    eax = ebx + 0x9D0;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEMF(ebx + 0x664) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_0034D410(); /* call 0x0034D410 */

loc_0003FFA8:
    eax = MEM32(0x35FB48);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    esi = eax + 0xCA0;
    edi = ebx + 0x540;
    eax = 0x80;
    ecx = 0x10;
    MEM32(esp + 0x30) = edi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x998) = eax;
    MEM32(ebx + 0x99C) = eax;
    eax = ebx + 0x680;
    ecx = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    eax = ebx + 0x580;
    edx = ebx + 0xA10;
    MEM32(ebx + 0x990) = ecx;
    MEM32(ebx + 0x994) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(ebx + 0x9A0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x9A4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = ebx + 0x5C0;
    edx = ebx + 0x620;
    eax = ebx + 0xA50;
    MEM32(ebx + 0x9C4) = 0x901;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x2C) = eax;

loc_00040064:
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00040CF0(); /* call 0x00040CF0 */

loc_00040077:
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x24);
    eax = MEM32(0x35FB48);
    edi = edx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0xC60;
    esi = edx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x35FB50);
    esi = MEM32(esp + 0x2C);
    ecx = ecx | 0xFF0200;
    PUSH32(esp, 0x43480000);
    MEM32(0x35FB50) = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3DCCCCCD);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    ecx = esi;
    PUSH32(esp, 0); sub_001AF280(); /* call 0x001AF280 */

loc_000400D1:
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x44);
    esp = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF153(); /* call 0x001CF153 */

loc_000400E8:
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 8), xmm3.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x18), xmm3.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm1.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x28), xmm4.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm1.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x38), xmm4.b + 8, 8); /* movhps */
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00040310(); /* call 0x00040310 */

loc_0004013C:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x83);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034C2E0(); /* call 0x0034C2E0 */

loc_00040153:
    PUSH32(esp, 0);
    PUSH32(esp, 0x7397B0);
    PUSH32(esp, 0); sub_001AD350(); /* call 0x001AD350 */

loc_0004015F:
    PUSH32(esp, 1);
    PUSH32(esp, 0x7397B0);
    PUSH32(esp, 0); sub_001AD350(); /* call 0x001AD350 */

loc_0004016B:
    PUSH32(esp, 2);
    PUSH32(esp, 0x7397B0);
    PUSH32(esp, 0); sub_001AD350(); /* call 0x001AD350 */

loc_00040177:
    SET_LO8(eax, MEM8(0x60E18C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000401E7; /* je: equal / zero */

loc_00040180:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x60E174); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    edx = esp + 0x60;
    ecx = 0x60;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0034F840(); /* call 0x0034F840 */

loc_000401C6:
    PUSH32(esp, 0); sub_000323D0(); /* call 0x000323D0 */

loc_000401CB:
    ebx = 4;
    PUSH32(esp, 0); sub_00032580(); /* call 0x00032580 */

loc_000401D5:
    ebx = 5;
    PUSH32(esp, 0); sub_00032580(); /* call 0x00032580 */

loc_000401DF:
    PUSH32(esp, 0); sub_000324A0(); /* call 0x000324A0 */

loc_000401E4:
    ebx = MEM32(ebp + 8);

loc_000401E7:
    eax = 0x60E040;
    PUSH32(esp, 0); sub_00188F80(); /* call 0x00188F80 */

loc_000401F1:
    eax = MEM32(esp + 0x18);
    eax++;
    /* cmp eax, 6 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, 6)) goto loc_00040064; /* jl: less (signed <) */

loc_00040203:
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x9C4) = 0x900;
    PUSH32(esp, 0); sub_0003FE10(); /* call 0x0003FE10 */

loc_0004021A:
    eax = MEM32(0x35FB48);
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x14);
    edi = eax + 0xC60;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(0x35FB50);
    edx = edx + 0x40;
    PUSH32(esp, edx);
    edi = edi | 0xFF0200;
    PUSH32(esp, 1);
    MEM32(0x35FB50) = edi;
    PUSH32(esp, 0); sub_0034D410(); /* call 0x0034D410 */

loc_00040251:
    esi = MEM32(0x35FB48);
    xmm1.f[0] = MEMF(0x35BEE0); /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0xEF8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0xEFC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0034F5B0(); /* call 0x0034F5B0 */

loc_00040288:
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0004029D; /* jb: below (unsigned <) */

loc_0004028F:
    eax = MEM32(0x3609FC);
    PUSH32(esp, eax);
    eax = eax >> 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003518E0(); /* call 0x003518E0 */

loc_0004029D:
    PUSH32(esp, 0); sub_003558A0(); /* call 0x003558A0 */

loc_000402A2:
    MEM32(esi) = eax;
    eax = MEM32(ebx + 0x868);
    PUSH32(esp, eax);
    ebx = ebx + 0x890;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0034CBF0(); /* call 0x0034CBF0 */

loc_000402B7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
