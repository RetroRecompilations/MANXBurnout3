#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001084E0
 * Original: 0x001084E0 - 0x00108EF0 (2576 bytes, 609 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001084E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001084E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    memcpy(xmm2.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    memcpy(xmm6.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    edx = esp + 0x18;
    xmm4.f[0] = MEMF(edx); /* movss */
    /* shufps xmm4, xmm4, 0 */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = esp + 0x18;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm4.b, xmm6.b, 16); /* movaps */
    /* mulps: xmm4.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = esp + 0x18;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm5.b, 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = esp + 0x18;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm7.b, 16); /* movaps */
    /* mulps: xmm7.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm7.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x160), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm0.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0x18;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x170), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x120), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm4.f[0] = MEMF(ecx); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    /* shufps xmm4, xmm4, 0 */
    /* mulps: xmm1.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, (void *)XBOX_PTR(0x40A5B0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40A5C0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40A5D0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm1.b, 16); /* movaps */
    edx = esp + 0x18;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm1.f[0] = MEMF(edx); /* movss */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm5.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm7.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm6.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x184;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x1CC;
    memcpy((void *)XBOX_PTR(esp + 0xFC), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1CC), xmm5.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_001086A1:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_001086AC:
    eax = esp + 0x188;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x1DC;
    memcpy((void *)XBOX_PTR(esp + 0x1DC), xmm6.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_001086D8:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_001086E3:
    eax = esp + 0x18C;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x1EC;
    memcpy((void *)XBOX_PTR(esp + 0x1EC), xmm7.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_0010870F:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_0010871A:
    eax = esp + 0x190;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x1FC;
    memcpy((void *)XBOX_PTR(esp + 0x1FC), xmm4.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108746:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108751:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */
    eax = esp + 0x194;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x20C;
    memcpy((void *)XBOX_PTR(esp + 0x20C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108785:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108790:
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x214;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001087A8:
    ecx = esp + 0x198;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    esi = esp + 0x21C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_001087CC:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_001087D7:
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x134;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_001087EF:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x224;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108803:
    edx = esp + 0x19C;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    esi = esp + 0x22C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108827:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108832:
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    ecx = esp + 0x134;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_0010884A:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x234;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0010885E:
    eax = esp + 0x1A0;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x23C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108882:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_0010888D:
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_001088A5:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x244;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001088B9:
    ecx = esp + 0x1A4;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    esi = esp + 0x24C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_001088DD:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_001088E8:
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x154;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_00108900:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x254;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108914:
    edx = esp + 0x1A8;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    esi = esp + 0x25C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108938:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108943:
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    ecx = esp + 0x154;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_0010895B:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x264;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0010896F:
    eax = esp + 0x1AC;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x26C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108993:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_0010899E:
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x154;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_001089B6:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x274;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001089CA:
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    esi = esp + 0x27C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_001089EE:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_001089F9:
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x144;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_00108A11:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x284;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108A25:
    edx = esp + 0x1B4;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    esi = esp + 0x28C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108A49:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108A54:
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    ecx = esp + 0x144;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_00108A6C:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x294;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108A80:
    eax = esp + 0x1B8;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    esi = esp + 0x29C;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108AA4:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108AAF:
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_00108AC7:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esp + 0x2A4;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108ADB:
    ecx = esp + 0x1BC;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    esi = esp + 0x2AC;
    PUSH32(esp, 0); sub_00107FD0(); /* call 0x00107FD0 */

loc_00108AFF:
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108DEE; /* jne: not equal / not zero */

loc_00108B0A:
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00108EE7; /* je: equal / zero */

loc_00108B15:
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    ebx = ebx | 0xFFFFFFFFu;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    edi = esp + 0x1C0;
    /* nop */

loc_00108B30:
    eax = edi;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_00108B37:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108B6E; /* jne: not equal / not zero */

loc_00108B3B:
    eax = edi;
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_00108B42:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + esi * 4 + 0x184); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + esi * 4 + 0x184) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00108B6E; /* jbe: below or equal (unsigned <=) */

loc_00108B66:
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ebx = esi;

loc_00108B6E:
    esi++;
    edi = edi + 0x10;
    if (CMP_L(esi, 0xF)) goto loc_00108B30; /* jl: less (signed <) */

loc_00108B77:
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00108DEE; /* je: equal / zero */

loc_00108B80:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x160) (packed 4xfloat) */
    ecx = ebx;
    ecx = ecx << 4;
    edx = esp + ecx + 0x1C0;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    ecx = esp + 0x24;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108BAF:
    eax = esp + 0x20;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00108BBC:
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00108BDA; /* jbe: below or equal (unsigned <=) */

loc_00108BC5:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    eax = esp + 0x50;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_00108BDA:
    if (CMP_GE(ebx, 3)) goto loc_00108C72; /* jge: greater or equal (signed >=) */

loc_00108BE3:
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00108BF1:
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00108080(); /* call 0x00108080 */

loc_00108C02:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108C13:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = MEM32(ebp + 8);
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    ecx = MEM32(ebp + 0xC);
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0x74;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    MEMF(edx) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108C58:
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108C69:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00108C72:
    if (CMP_GE(ebx, 6)) goto loc_00108D00; /* jge: greater or equal (signed >=) */

loc_00108C7B:
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x114;
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_00108080(); /* call 0x00108080 */

loc_00108C90:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108CA1:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(ebp + 8);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edx = esp + 0x40;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + 0xC);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    eax = esp + 0x74;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108CE6:
    ecx = MEM32(ebp + 0x10);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108CF7:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00108D00:
    ecx = ebx + -6;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    edi = (uint32_t)(int32_t)SMEM8(eax + edx + 0x39A99C);
    eax = eax + edx;
    edx = eax + eax * 2;
    ecx = ecx - edx;
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0x39A99C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x2C0;
    ecx = esp + 0x118;
    PUSH32(esp, 0); sub_00108240(); /* call 0x00108240 */

loc_00108D42:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108D53:
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00108D61:
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00108080(); /* call 0x00108080 */

loc_00108D72:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x104;
    ecx = esp + 0x54;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108D86:
    esi = esi << 4;
    eax = esp + esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    eax = esp + 0x104;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_00108DA1:
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    ecx = esp + 0x34;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108DB2:
    ecx = edi;
    ecx = ecx << 4;
    esi = esp + ecx + 0x130;
    eax = esp + 0x30;
    ecx = esi;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00108DC9:
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x3B188C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x18))) goto loc_00108DF7; /* jbe: below or equal (unsigned <=) */

loc_00108DEE:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00108DF7:
    xmm0.f[0] = MEMF(esp + edi * 8 + 0x2BC); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + edi * 8 + 0x2B8); /* movss */
    eax = esp + 0x50;
    ecx = esp + 0x30;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00108E25:
    eax = esp + 0x30;
    ecx = esp + 0x40;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_00108E38:
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x68); /* divss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x8C) ? xmm0.f[0] : MEMF(esp + 0x8C)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    eax = esp + 0x100;
    edx = esi;
    PUSH32(esp, 0); sub_00011610(); /* call 0x00011610 */

loc_00108E7D:
    PUSH32(esp, eax);
    eax = esp + 0x74;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_00013BD0(); /* call 0x00013BD0 */

loc_00108E8B:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    eax = MEM32(ebp + 8);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x6C;
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = esp + 0x40;
    MEMF(eax) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0x104;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108ED3:
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x104;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00108EE7:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
