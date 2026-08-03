#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00129D00
 * Original: 0x00129D00 - 0x00129FED (749 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00129D00:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    edx = MEM32(ebp + 8);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (TEST_NZ(edx, edx)) goto loc_00129D22; /* jne: not equal / not zero */

loc_00129D18:
    xmm0.f[0] = MEMF(0x3B1940); /* movss */
    goto loc_00129D33;

loc_00129D22:
    if (CMP_NE(edx, 1)) goto loc_00129FE4; /* jne: not equal / not zero */

loc_00129D2B:
    xmm0.f[0] = MEMF(0x3A7950); /* movss */

loc_00129D33:
    ecx = MEM32(esi + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    edi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_00129FE4; /* jle: less or equal (signed <=) */

loc_00129D5A:
    ecx = ecx + 0xAC4;

loc_00129D60:
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_00129D79; /* je: equal / zero */

loc_00129D64:
    edi++;
    ecx = ecx + 4;
    if (CMP_L(edi, eax)) goto loc_00129D60; /* jl: less (signed <) */

loc_00129D6C:
    MEM32(esp + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00129D79:
    /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00129FE4; /* je: equal / zero */

loc_00129D86:
    eax = MEM32(esi + 0x14);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1730); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + edi * 4 + 0xF90); /* addss */
    eax = eax + edi * 4 + 0xF90;
    MEMF(eax) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x14);
    ebx = edi;
    ebx = ebx << 7;
    PUSH32(esp, 0x40AF80);
    ecx = ecx + ebx + 0xC20;
    eax = 0x40AF70;
    PUSH32(esp, 0); sub_0010C3B0(); /* call 0x0010C3B0 */

loc_00129DC3:
    esp = esp + 4;
    /* comiss xmm0.f[0], MEMF(0x3B1A04) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1A04))) goto loc_00129DD7; /* jbe: below or equal (unsigned <=) */

loc_00129DCF:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1C1C); /* subss */

loc_00129DD7:
    xmm1.f[0] = MEMF(0x3A7950); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1940); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + ebx + 0xC30), 16); /* movaps */
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, 0x40AF80);
    ecx = esp + 0x38;
    eax = ebx + eax + 0x270;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_00129E4F:
    ecx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edi = edi + 0x18;
    edi = edi << 7;
    memcpy((void *)XBOX_PTR(ecx + edi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + edi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = ecx + edi;
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + ebx + 0xC30), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ebx + 0xC70), 16); /* movaps */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40AF80);
    edx = esp + 0x78;
    memcpy((void *)XBOX_PTR(esp + 0x28), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    eax = ebx + ecx + 0x2B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_00129EBB:
    ecx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + ebx + 0xC40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + ebx + 0xC50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = ecx + ebx + 0xC40;
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + ebx + 0xC70), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    eax = eax + edi;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebx + edx + 0x770;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00129F16:
    eax = MEM32(esp + 0x10);
    edi = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    eax = eax + 0x12;
    eax = eax << 7;
    eax = eax + edi;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x14);
    ecx = eax + ebx + 0xC40;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = ebx + eax + 0x7B0;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00129F67:
    ecx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edi = MEM32(ebp + 8);
    ebx = ecx + ebx + 0x940;
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128830(); /* call 0x00128830 */

loc_00129F9C:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00129FE4; /* jbe: below or equal (unsigned <=) */

loc_00129FAA:
    esi = MEM32(esi + 0x10);
    eax = MEM32(0x40FAF0);
    esi = esi + 0x30;
    if (TEST_Z(eax, eax)) goto loc_00129FE4; /* je: equal / zero */

loc_00129FB9:
    /* comiss xmm0.f[0], MEMF(0x40F810) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x40F810))) goto loc_00129FD8; /* jbe: below or equal (unsigned <=) */

loc_00129FC2:
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014D8A0(); /* call 0x0014D8A0 */

loc_00129FD3:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */

loc_00129FD8:
    edx = esi;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014EB00(); /* call 0x0014EB00 */

loc_00129FE4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
