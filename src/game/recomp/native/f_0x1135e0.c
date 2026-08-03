#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001135E0
 * Original: 0x001135E0 - 0x00113881 (673 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001135E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001135E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x234;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x5C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x6C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x7C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x8C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x9C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xAC), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xBC), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xCC), xmm0.b, 16); /* movaps */
    ecx = MEM32(esi + 0x208);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x28);
    eax = MEM32(edi + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x160), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x170), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x180), xmm0.b, 16); /* movaps */
    eax = MEM32(edi + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x190), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1A0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    edx = esp + 0x190;
    memcpy((void *)XBOX_PTR(esp + 0x1B0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    PUSH32(esp, edx);
    memcpy((void *)XBOX_PTR(esp + 0x1C4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00040AE0(); /* call 0x00040AE0 */

loc_001136DB:
    SET_LO8(eax, MEM8(edi));
    ecx = 0; /* xor self */
    if (CMP_NE(LO8(eax), 3)) goto loc_001136F8; /* jne: not equal / not zero */

loc_001136E3:
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 0xB0);
    if (TEST_Z(eax, eax)) goto loc_00113719; /* je: equal / zero */

loc_001136F0:
    ecx = eax + 0x1060;
    goto loc_00113719;

loc_001136F8:
    if (CMP_EQ(LO8(eax), 2)) goto loc_00113710; /* je: equal / zero */

loc_001136FC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113710; /* je: equal / zero */

loc_00113700:
    if (CMP_EQ(LO8(eax), 1)) goto loc_00113710; /* je: equal / zero */

loc_00113704:
    if (CMP_EQ(LO8(eax), 4)) goto loc_00113710; /* je: equal / zero */

loc_00113708:
    if (CMP_EQ(LO8(eax), 6)) goto loc_00113710; /* je: equal / zero */

loc_0011370C:
    if (CMP_NE(LO8(eax), 7)) goto loc_00113719; /* jne: not equal / not zero */

loc_00113710:
    ecx = MEM32(edi + 0xC);
    ecx = MEM32(ecx + 0x208);

loc_00113719:
    eax = esp + 0x30;
    MEM32(esp + 0x120) = ecx;
    MEM32(esp + 0x210) = 1;
    PUSH32(esp, 0); sub_0010ABC0(); /* call 0x0010ABC0 */

loc_00113734:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebx + 0x2C) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113878; /* je: equal / zero */

loc_0011373F:
    SET_LO8(eax, MEM8(esi + 0x210));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x211) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011378B; /* je: equal / zero */

loc_00113750:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x218);
    eax = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00114910(); /* call 0x00114910 */

loc_00113771:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(ecx + 0x211) = 1;
    PUSH32(esp, 0); sub_00113960(); /* call 0x00113960 */

loc_00113782:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0011378B:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x230), 16); /* movaps */
    eax = MEM32(esp + 0x214);
    /* test eax, eax - flags set for next jcc */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x220), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm0.b, 16); /* movaps */
    if (TEST_Z(eax, eax)) goto loc_001137EB; /* je: equal / zero */

loc_001137AD:
    edx = MEM32(edi + 4);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x180), 16); /* movaps */
    eax = MEM32(esi + 0x204);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x130), xmm1.b, 16); /* movaps */

loc_001137EB:
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    ecx = esi;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_001137F7:
    ecx = MEM32(edi + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm0.f[0] = MEMF(ecx + 0xC4); /* movss */
    eax = MEM32(edi + 4);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    eax = MEM32(0x4A1D9C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    /* shufps xmm0, xmm0, 0 */
    PUSH32(esp, edx);
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, ebx);
    edi = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0010A490(); /* call 0x0010A490 */

loc_00113845:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00113873; /* jbe: below or equal (unsigned <=) */

loc_00113853:
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_0011385F:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(ebx + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00113873:
    MEMF(ebx + 0x20) = xmm1.f[0]; /* movss */

loc_00113878:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
