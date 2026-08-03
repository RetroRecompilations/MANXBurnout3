#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00123FD0
 * Original: 0x00123FD0 - 0x001250F6 (4390 bytes, 938 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00123FD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2E4;
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebx + 0x1169));
    edx = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0xC0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x120) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x124) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x128) = xmm5.f[0]; /* movss */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_001250ED; /* jle: less or equal (signed <=) */

loc_0012403B:
    eax = MEM32(ebx + 0x204);
    eax = eax + 0x10;
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00124C28; /* jle: less or equal (signed <=) */

loc_00124057:
    eax = esp + 0x250;
    ecx = ebx + 0xCC8;
    edi = ebx + 0x840;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = edi;
    goto loc_00124080;

    /* nop */
    /* nop */

loc_00124080:
    eax = MEM32(esp + 0x24);
    MEM8(edi + 0x92) = 0;
    MEM8(edi + 0x94) = 0;
    edx = MEM32(ebx + 0xCC4);
    if (CMP_EQ(MEM8(edx + eax + 0x4AC), 3)) goto loc_00124AD7; /* je: equal / zero */

loc_001240A6:
    /* cmp eax, 2 - flags set for next jcc */
    xmm1.f[0] = MEMF(edi + 0x54); /* movss */
    if (CMP_GE(eax, 2)) goto loc_001240D6; /* jge: greater or equal (signed >=) */

loc_001240B0:
    xmm0.f[0] = MEMF(ebx + 0xCA8); /* movss */
    xmm2.f[0] = MEMF(ebx + 0xCAC); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xCA4); /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    goto loc_00124100;

loc_001240D6:
    xmm0.f[0] = MEMF(ebx + 0xCBC); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xCB8); /* movss */
    xmm2.f[0] = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xCB4); /* movss */

loc_00124100:
    SET_LO8(eax, MEM8(edi + 0x93));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001249EE; /* je: equal / zero */

loc_00124117:
    xmm0.f[0] = MEMF(edi + 0x44); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x40); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3A5A44) - sets EFLAGS */
    MEM32(esp + 0x34) = 0;
    MEM8(edi + 0x92) = 0;
    if ((xmm0.f[0] <= MEMF(0x3A5A44))) goto loc_00124140; /* jbe: below or equal (unsigned <=) */

loc_00124139:
    MEM8(edi + 0x92) = 1;

loc_00124140:
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi + 0x44); /* subss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm3.f[0])) goto loc_001241E7; /* jbe: below or equal (unsigned <=) */

loc_00124162:
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x44) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    if ((xmm0.f[0] > xmm5.f[0])) goto loc_0012418F; /* ja: above (unsigned >) */

loc_00124185:
    SET_LO8(eax, MEM8(ebx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00124197; /* jne: not equal / not zero */

loc_0012418F:
    MEM32(esp + 0x34) = 1;

loc_00124197:
    /* comiss xmm4.f[0], MEMF(0x3B16D0) - sets EFLAGS */
    xmm3.f[0] = MEMF(esp + 0x30); /* movss */
    if ((xmm4.f[0] <= MEMF(0x3B16D0))) goto loc_0012420A; /* jbe: below or equal (unsigned <=) */

loc_001241A6:
    eax = MEM32(esp + 0x28);
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    edx = esp + 0x94;
    MEMF(esp + 0x94) = xmm4.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    eax++;
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x28) = eax;
    goto loc_0012420A;

loc_001241E7:
    SET_LO8(eax, MEM8(ebx + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012420A; /* je: equal / zero */

loc_001241F1:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_0012420A; /* jbe: below or equal (unsigned <=) */

loc_00124201:
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */

loc_0012420A:
    SET_LO8(eax, MEM8(0x4D617E));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(edi + 0x44); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x40); /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x9C) = xmm3.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012423D; /* je: equal / zero */

loc_0012422A:
    xmm1.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1768); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_00124242;

loc_0012423D:
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xC); /* divss */

loc_00124242:
    eax = MEM32(ecx);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 0x44); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    edx = MEM32(ebx + 0x204);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm1.b, 16); /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x238;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0012427E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(edi + -32), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0xA4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(esp + 0x88); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x8C); /* mulss */
    esi = edi + -32;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    eax = esp + 0xA0;
    xmm0.f[0] = MEMF(eax); /* movss */
    SET_LO8(eax, MEM8(ebx + 0x210));
    esp = esp + 8;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x130), xmm1.b, 16); /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00124337; /* je: equal / zero */

loc_001242E7:
    xmm0.f[0] = MEMF(esp + 0x70); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A55F8); /* mulss */
    xmm2.f[0] = MEMF(esp + 0x30); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    /* comiss xmm2.f[0], MEMF(0x3B1684) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(0x3B1684))) goto loc_00124337; /* jbe: below or equal (unsigned <=) */

loc_00124308:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    eax = esp + 0x180;
    ecx = esp + 0x130;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_0012432F:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x130), 16); /* movaps */

loc_00124337:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xF0), 16); /* movaps */
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x1A8;
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    eax = ebx;
    memcpy((void *)XBOX_PTR(ebx + 0xF0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106590(); /* call 0x00106590 */

loc_00124360:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x100), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1A0), 16); /* movaps */
    eax = MEM32(esp + 0x34);
    /* test eax, eax - flags set for next jcc */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x100), xmm1.b, 16); /* movaps */
    MEM8(edi + 0x94) = 0;
    if (TEST_Z(eax, eax)) goto loc_001248CE; /* je: equal / zero */

loc_0012438C:
    PUSH32(esp, esi);
    eax = esp + 0x224;
    ecx = ebx;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_0012439B:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x198;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, esi);
    eax = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x1A0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106720(); /* call 0x00106720 */

loc_001243C4:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001248CE; /* jbe: below or equal (unsigned <=) */

loc_001243D0:
    ecx = MEM32(esp + 0x1C);
    MEM8(edi + 0x94) = 1;
    SET_LO8(eax, MEM8(ebx + 0x210));
    ecx++;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001248CE; /* je: equal / zero */

loc_001243EE:
    if (CMP_NE(MEM8(ebx + 0x215), 1)) goto loc_001248CE; /* jne: not equal / not zero */

loc_001243FB:
    if (CMP_GE(MEM32(esp + 0x24), 2)) goto loc_001248CE; /* jge: greater or equal (signed >=) */

loc_00124406:
    /* comiss xmm0.f[0], MEMF(0x3B1740) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1740))) goto loc_001248CE; /* jbe: below or equal (unsigned <=) */

loc_00124413:
    edx = MEM32(ebx + 0x13F4);
    eax = MEM32(edx + 0x1970);
    ecx = MEM32(edx + 0x1974);
    edx = MEM32(ebx + 0xCC0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEM32(esp + 0x88) = eax;
    eax = MEM32(ebx + 0xCC4);
    /* test eax, eax - flags set for next jcc */
    esi = eax + 0x300;
    MEM32(esp + 0x8C) = ecx;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_001248CE; /* je: equal / zero */

loc_00124462:
    eax = edx;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_001248CE; /* je: equal / zero */

loc_0012446F:
    eax = MEM32(eax + 0x40);
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_001248CE; /* je: equal / zero */

loc_0012447D:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_001248CE; /* jae: above or equal (unsigned >=) */

loc_00124486:
    SET_LO8(eax, MEM8(esi + 0x46));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001248CE; /* jne: not equal / not zero */

loc_00124491:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    eax = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001244A2:
    xmm1.f[0] = MEMF(0x3A35E0); /* movss */
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00124508; /* jbe: below or equal (unsigned <=) */

loc_001244B5:
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3A69C0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3A69C0))) goto loc_00124508; /* jbe: below or equal (unsigned <=) */

loc_001244C4:
    eax = esp + 0x180;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001244D4:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = esp + 0x40;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_001244E6:
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00019FB0(); /* call 0x00019FB0 */

loc_001244F1:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001248CE; /* jne: not equal / not zero */

loc_001244F9:
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00124502:
    xmm0.f[0] = MEMF(esp + 0x68); /* movss */

loc_00124508:
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx + 0x40);
    xmm1.f[0] = MEMF(eax + 0xE88); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xE98); /* subss */
    /* comiss xmm1.f[0], MEMF(0x3B1D34) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B1D34))) goto loc_00124531; /* jbe: below or equal (unsigned <=) */

loc_00124528:
    MEM32(esi + 0x38) = 1;
    goto loc_00124538;

loc_00124531:
    MEM32(esi + 0x38) = 0;

loc_00124538:
    ecx = MEM32(esp + 0x88);
    /* cmp ecx, 0x67D5A000 - flags set for next jcc */
    eax = MEM32(esp + 0x8C);
    if (CMP_NE(ecx, 0x67D5A000)) goto loc_00124555; /* jne: not equal / not zero */

loc_0012454E:
    if (CMP_EQ(eax, 0x77042838)) goto loc_001245A9; /* je: equal / zero */

loc_00124555:
    if (CMP_NE(ecx, 0x67FCB000)) goto loc_00124564; /* jne: not equal / not zero */

loc_0012455D:
    if (CMP_EQ(eax, 0x77042838)) goto loc_001245A9; /* je: equal / zero */

loc_00124564:
    if (CMP_NE(ecx, 0x6823C000)) goto loc_00124573; /* jne: not equal / not zero */

loc_0012456C:
    if (CMP_EQ(eax, 0x77042838)) goto loc_001245A9; /* je: equal / zero */

loc_00124573:
    if (CMP_NE(ecx, 0x66EE2E00)) goto loc_00124582; /* jne: not equal / not zero */

loc_0012457B:
    if (CMP_EQ(eax, 0x77042838)) goto loc_001245A9; /* je: equal / zero */

loc_00124582:
    if (CMP_NE(ecx, 0xA1422A00u)) goto loc_00124591; /* jne: not equal / not zero */

loc_0012458A:
    if (CMP_EQ(eax, 0x790798FB)) goto loc_001245A9; /* je: equal / zero */

loc_00124591:
    if (CMP_NE(ecx, 0x671E0800)) goto loc_001245B0; /* jne: not equal / not zero */

loc_00124599:
    if (CMP_NE(eax, 0x77042838)) goto loc_001245B0; /* jne: not equal / not zero */

loc_001245A0:
    MEM32(esi + 0x38) = 2;
    goto loc_001245B0;

loc_001245A9:
    MEM32(esi + 0x38) = 1;

loc_001245B0:
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x38);
    eax = eax - 0;
    edx = 2;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = edx;
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x188) = 0;
    if ((eax == 0)) goto loc_001245F8; /* je: equal / zero */

loc_001245DE:
    eax--;
    if ((eax == 0)) goto loc_001245E4; /* je: equal / zero */

loc_001245E1:
    eax--;
    if ((eax == 0)) goto loc_001245EE; /* je: equal / zero */

loc_001245E4:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E78); /* mulss */
    goto loc_00124600;

loc_001245EE:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E74); /* mulss */
    goto loc_00124600;

loc_001245F8:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1E70); /* mulss */

loc_00124600:
    SET_LO8(eax, MEM8(esi + 0x46));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012461F; /* je: equal / zero */

loc_0012460F:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1870); /* mulss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */

loc_0012461F:
    eax = MEM32(esi + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x140), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    edx = esp + 0x140;
    memcpy((void *)XBOX_PTR(esp + 0x160), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, edx);
    memcpy((void *)XBOX_PTR(esp + 0x174), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_0012465E:
    eax = edi + -32;
    PUSH32(esp, eax);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    eax = esp + 0x1F8;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00124676:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x184;
    ecx = esi + 0x140;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_0012468C:
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x144;
    PUSH32(esp, edx);
    eax = esp + 0x208;
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_001246A5:
    esp = esp + 8;
    PUSH32(esp, eax);
    eax = esp + 0x114;
    ecx = esi + 0x150;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_001246BB:
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x40);
    SET_LO8(eax, MEM8(edx + 0xC));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001246EF; /* jle: less or equal (signed <=) */

loc_001246CA:
    eax = 0xF90;
    /* nop */

loc_001246D0:
    edx = MEM32(esi + 0x14);
    edx = MEM32(eax + edx);
    MEM32(esi + eax + -3632) = edx;
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x40);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    ecx++;
    eax = eax + 4;
    if (CMP_L(ecx, edx)) goto loc_001246D0; /* jl: less (signed <) */

loc_001246EF:
    xmm0.f[0] = MEMF(esi + 0x17C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1694) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1694))) goto loc_0012470E; /* jbe: below or equal (unsigned <=) */

loc_00124700:
    eax = MEM32(esi + 0x17C);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0012C670(); /* call 0x0012C670 */

loc_0012470E:
    PUSH32(esp, 0); sub_0012E450(); /* call 0x0012E450 */

loc_00124713:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00124731; /* je: equal / zero */

loc_00124717:
    xmm0.f[0] = MEMF(esi + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x17C); /* mulss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    goto loc_00124808;

loc_00124731:
    xmm0.f[0] = MEMF(esi + 0x17C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x150), 16); /* movaps */
    ecx = esp + 0xAC;
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x150), xmm1.b, 16); /* movaps */
    SET_LO8(eax, MEM8(esi + 0x46));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = esi + 0x150;
    eax = esp + 0x110;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012477D; /* je: equal / zero */

loc_00124776:
    PUSH32(esp, 0x40AF50);
    goto loc_00124782;

loc_0012477D:
    PUSH32(esp, 0x40AF40);

loc_00124782:
    PUSH32(esp, 0); sub_000328B0(); /* call 0x000328B0 */

loc_00124787:
    xmm0.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x17C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esi + 0x17C))) goto loc_001248CE; /* ja: above (unsigned >) */

loc_0012479C:
    eax = esi + 0x150;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_001247A7:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001248CE; /* jne: not equal / not zero */

loc_001247AF:
    eax = esi + 0x150;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_001247BA:
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 0xAC0);
    if (TEST_Z(eax, eax)) goto loc_00124808; /* je: equal / zero */

loc_001247C7:
    edx = esi + 0x178;
    PUSH32(esp, edx);
    eax = esi + 0x185;
    PUSH32(esp, eax);
    ecx = esi + 0x184;
    PUSH32(esp, ecx);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0); sub_00128A20(); /* call 0x00128A20 */

loc_001247EA:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x184);
    ecx = esi;
    PUSH32(esp, 0); sub_0012F8E0(); /* call 0x0012F8E0 */

loc_001247F8:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x185);
    PUSH32(esp, 0); sub_0012F8E0(); /* call 0x0012F8E0 */

loc_00124804:
    edi = MEM32(esp + 0x2C);

loc_00124808:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], MEMF(esi + 0x24) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(esi + 0x24))) goto loc_00124823; /* jb: below (unsigned <) */

loc_00124816:
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */

loc_00124823:
    xmm0.f[0] = MEMF(esi + 0x17C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39B6EC); /* mulss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x78); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xA0) ? xmm0.f[0] : MEMF(esp + 0xA0)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xA8) ? xmm0.f[0] : MEMF(esp + 0xA8)); /* minss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x60EA1C); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A7950); /* mulss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_001248C7; /* jbe: below or equal (unsigned <=) */

loc_0012489F:
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    eax = esi + 0x140;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    edi = esi + 0x150;
    PUSH32(esp, 0); sub_0012F9B0(); /* call 0x0012F9B0 */

loc_001248BB:
    edi = MEM32(esp + 0x2C);
    MEMF(esi + 0x17C) = xmm2.f[0]; /* movss */

loc_001248C7:
    eax = esi;
    PUSH32(esp, 0); sub_0012E4D0(); /* call 0x0012E4D0 */

loc_001248CE:
    SET_LO8(eax, MEM8(ebx + 0x215));
    if (CMP_EQ(LO8(eax), 1)) goto loc_001248E5; /* je: equal / zero */

loc_001248D8:
    if (CMP_EQ(LO8(eax), 2)) goto loc_001248E5; /* je: equal / zero */

loc_001248DC:
    /* cmp LO8(eax), 3 - flags set for next jcc */
    MEM8(esp + 0x1B) = 0;
    if (CMP_NE(LO8(eax), 3)) goto loc_001248EA; /* jne: not equal / not zero */

loc_001248E5:
    MEM8(esp + 0x1B) = 1;

loc_001248EA:
    SET_LO8(eax, MEM8(ebx + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00124ACC; /* je: equal / zero */

loc_001248F8:
    SET_LO8(eax, MEM8(ebx + 0x116B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00124ACC; /* jne: not equal / not zero */

loc_00124906:
    MEM32(edi + 0x58) = 5;
    xmm0.f[0] = MEMF(ebx + 0xBC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A69C4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A69C4))) goto loc_00124ACC; /* jbe: below or equal (unsigned <=) */

loc_00124922:
    esi = edi + -16;
    PUSH32(esp, esi);
    eax = esp + 0x214;
    ecx = ebx;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00124934:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = esp + 0xB0;
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012494B:
    eax = MEM32(ebx + 0x204);
    ecx = esp + 0xB0;
    PUSH32(esp, 0); sub_00013C60(); /* call 0x00013C60 */

loc_0012495D:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1169);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    eax = esp + 0x110;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esp + 0xB0;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fimul dword ptr [esp + 0x2c] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001249A7:
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001249DA; /* jne: not equal / not zero */

loc_001249AF:
    ecx = MEM32(ebx + 0xCC4);
    SET_LO8(eax, MEM8(ecx + 0x101B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001249DA; /* jne: not equal / not zero */

loc_001249BF:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    eax = esp + 0x110;
    ecx = esp + 0xB0;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_001249DA:
    PUSH32(esp, esi);
    eax = esp + 0xB4;
    esi = ebx;
    PUSH32(esp, 0); sub_001064B0(); /* call 0x001064B0 */

loc_001249E9:
    goto loc_00124ACC;

loc_001249EE:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3A55F8); /* mulss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x38) ? xmm0.f[0] : MEMF(esp + 0x38)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x60) ? xmm0.f[0] : MEMF(esp + 0x60)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm4.f[0] = MEMF(esp + 0x14); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x6C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1730); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(edi + 0x40); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_00124A86; /* jbe: below or equal (unsigned <=) */

loc_00124A80:
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00124A8F;

loc_00124A86:
    /* comiss xmm4.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm3.f[0])) goto loc_00124A94; /* jbe: below or equal (unsigned <=) */

loc_00124A8B:
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_00124A8F:
    MEMF(edi + 0x40) = xmm1.f[0]; /* movss */

loc_00124A94:
    edx = MEM32(ecx);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    ecx = MEM32(ebx + 0x204);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x40); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x248;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00124AC2:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(edi + -32), xmm0.b, 16); /* movaps */

loc_00124ACC:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */

loc_00124AD7:
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x7C);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x1169);
    eax++;
    ecx = ecx + 4;
    esi = esi + 0x10;
    edi = edi + 0xC0;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x7C) = esi;
    MEM32(esp + 0x2C) = edi;
    if (CMP_L(eax, edx)) goto loc_00124080; /* jl: less (signed <) */

loc_00124B0F:
    eax = MEM32(esp + 0x28);
    if (CMP_LE(eax & eax, 0)) goto loc_00124B50; /* jle: less or equal (signed <=) */

loc_00124B17:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    eax = esp + 0x14;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x130), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm0.b, 16); /* movaps */

loc_00124B50:
    eax = MEM32(esp + 0x1C);
    if (CMP_LE(eax & eax, 0)) goto loc_00124C28; /* jle: less or equal (signed <=) */

loc_00124B5C:
    ecx = MEM32(ebx + 0x204);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x110), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0x14;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = esp + 0x14;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x110), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x110), xmm0.b, 16); /* movaps */
    esi = esp + 0x250;
    edi = ebx + 0x820;
    MEM32(esp + 0x20) = 4;
    /* nop */

loc_00124BD0:
    SET_LO8(eax, MEM8(edi + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00124C14; /* je: equal / zero */

loc_00124BDA:
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] / xmm0.f[0]; /* divss */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, edi);
    ecx = esi;
    eax = ebx;
    memcpy((void *)XBOX_PTR(esi), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_00124C09:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */

loc_00124C14:
    eax = MEM32(esp + 0x20);
    esi = esi + 0x10;
    edi = edi + 0xC0;
    eax--;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_00124BD0; /* jne: not equal / not zero */

loc_00124C28:
    xmm1.f[0] = MEMF(ebx + 0x1164); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1E7C); /* mulss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B19FC); /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3B19F8); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B19F0); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3B19EC); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B19E8); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3B19F4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebx + 0x1169));
    eax = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_001250ED; /* jle: less or equal (signed <=) */

loc_00124CEC:
    edx = ebx + 0xCC8;
    MEM32(esp + 0x1C) = 0x4E8;
    MEM32(esp + 0x28) = edx;
    edi = ebx + 0x878;
    ecx = 4;
    /* nop */

loc_00124D10:
    edx = MEM32(ebx + 0xCC4);
    if (CMP_EQ(MEM8(edx + eax + 0x4AC), 3)) goto loc_001250BF; /* je: equal / zero */

loc_00124D24:
    SET_LO8(ecx, MEM8(ebx + 0x215));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00124D3D; /* je: equal / zero */

loc_00124D2F:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_00124D3D; /* je: equal / zero */

loc_00124D34:
    if (CMP_EQ(LO8(ecx), 3)) goto loc_00124D3D; /* je: equal / zero */

loc_00124D39:
    SET_LO8(ecx, 0); /* xor self */
    goto loc_00124D3F;

loc_00124D3D:
    SET_LO8(ecx, 1);

loc_00124D3F:
    SET_LO8(edx, MEM8(ebx + 0x210));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00124D4D; /* jne: not equal / not zero */

loc_00124D49:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00124D73; /* jne: not equal / not zero */

loc_00124D4D:
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    SET_LO8(ecx, MEM8(edi + 0x5B));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1758); /* mulss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00124D73; /* je: equal / zero */

loc_00124D66:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */

loc_00124D73:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    xmm1.f[0] = MEMF(0x3B1B10); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(edi) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00124D98; /* jbe: below or equal (unsigned <=) */

loc_00124D92:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00124DA9;

loc_00124D98:
    xmm3.f[0] = MEMF(0x3B1B0C); /* movss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm0.f[0])) goto loc_00124DAD; /* jbe: below or equal (unsigned <=) */

loc_00124DA5:
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00124DA9:
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_00124DAD:
    xmm3.f[0] = MEMF(edi); /* movss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1734); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = MEMF(0x3B1738); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm3.f[0], MEMF(0x39BF24) - sets EFLAGS */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    if ((xmm3.f[0] <= MEMF(0x39BF24))) goto loc_00124DED; /* jbe: below or equal (unsigned <=) */

loc_00124DE3:
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */

loc_00124DED:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B19FC); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B19F8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B19F0); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B19EC); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B19E8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B19F4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x60)); /* sqrtss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x39A25C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00124EA9; /* jbe: below or equal (unsigned <=) */

loc_00124EA1:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16C0); /* mulss */

loc_00124EA9:
    if (CMP_GE(MEM32(esp + 0x1C), 0x4F0)) goto loc_00124EBB; /* jge: greater or equal (signed >=) */

loc_00124EB3:
    xmm5.f[0] = MEMF(esp + 0x64); /* movss */
    goto loc_00124EBE;

loc_00124EBB:
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */

loc_00124EBE:
    /* test LO8(eax), 1 - flags set for next jcc */
    xmm3.f[0] = MEMF(edi + 0x18); /* movss */
    edx = MEM32(esp + 0x28);
    esi = MEM32(edx);
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(edi + 0x14); /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    if (TEST_Z(LO8(eax), 1)) goto loc_00124EEE; /* je: equal / zero */

loc_00124EDE:
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi + 0x14); /* subss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    goto loc_00124EF9;

loc_00124EEE:
    xmm3.f[0] = MEMF(edi + 0x14); /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */

loc_00124EF9:
    MEMF(esi) = xmm5.f[0]; /* movss */
    MEMF(esi + 4) = xmm4.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm7.b, xmm4.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm6.b, xmm5.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x18) = xmm6.f[0]; /* movss */
    memcpy(xmm6.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x20) = xmm6.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x24) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x28) = xmm5.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0xCC4);
    if (CMP_NE(MEM8(edx + eax + 0x4AC), 2)) goto loc_00124FEE; /* jne: not equal / not zero */

loc_00124F67:
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    eax = esp + 0x2B0;
    PUSH32(esp, eax);
    eax = esp + 0x124;
    PUSH32(esp, 0); sub_00011900(); /* call 0x00011900 */

loc_00124F83:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x144), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    PUSH32(esp, esi);
    ecx = esp + 0x254;
    memcpy((void *)XBOX_PTR(esp + 0x164), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x148;
    memcpy((void *)XBOX_PTR(esp + 0x178), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00124FCA:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm3.f[0] = MEMF(esp + 0x48); /* movss */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */

loc_00124FEE:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, esi);
    edx = esp + 0x1B4;
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0xD8;
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00125066:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1B0), 16); /* movaps */
    edx = MEM32(esp + 0x1C);
    xmm2.f[0] = MEMF(esp + 0x78); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1C0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1D0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1E0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(ebx + 0xCC4);
    ecx = MEM32(edi + 4);
    MEM32(edx + eax) = ecx;
    eax = MEM32(esp + 0x24);
    ecx = 4;

loc_001250BF:
    edx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x1C);
    edx = edx + ecx;
    MEM32(esp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x1169);
    eax++;
    esi = esi + ecx;
    edi = edi + 0xC0;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(eax, edx)) goto loc_00124D10; /* jl: less (signed <) */

loc_001250ED:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
