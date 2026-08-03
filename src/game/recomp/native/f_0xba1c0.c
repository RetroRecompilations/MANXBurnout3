#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000BA1C0
 * Original: 0x000BA1C0 - 0x000BA696 (1238 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000BA1C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    eax = MEM32(0x557A34);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 8);
    ebx = esi + 0x38;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    edi = edi + 2;
    if (TEST_NZ(eax, eax)) goto loc_000BA211; /* jne: not equal / not zero */

loc_000BA1E4:
    MEM32(esp + 8) = 4;
    /* nop */

loc_000BA1F0:
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000BA201:
    MEM32(ebx) = eax;
    eax = MEM32(esp + 8);
    ebx = ebx + 4;
    eax--;
    MEM32(esp + 8) = eax;
    if ((eax != 0)) goto loc_000BA1F0; /* jne: not equal / not zero */

loc_000BA211:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(ebp + 8); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    xmm2.f[0] = MEMF(0x56FD1C); /* movss */
    xmm7.f[0] = MEMF(0x56FDD8); /* movss */
    xmm6.f[0] = MEMF(0x56FD78); /* movss */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_000BA241; /* jbe: below or equal (unsigned <=) */

loc_000BA236:
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    goto loc_000BA326;

loc_000BA241:
    edx = MEM32(0x557970);
    eax = MEM32(0x557974);
    ecx = MEM32(0x557978);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(0x55797C);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x48);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ecx;
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_000BA289; /* jne: not equal / not zero */

loc_000BA275:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = edi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000BA286:
    MEM32(esi + 0x48) = eax;

loc_000BA289:
    edx = MEM32(0x464660);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    eax = esp + 0x3C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FD54); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(0x3980F8); /* addss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1C34); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FD0C); /* movss */
    PUSH32(esp, edx);
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    edx = esp + 0x30;
    ecx = esp + 0x28;
    edi = esp + 0x20;
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000BA320:
    MEMF(esp + 8) = xmm3.f[0]; /* movss */

loc_000BA326:
    eax = MEM32(esi + 0x38);
    ecx = MEM32(0x464660);
    xmm3.f[0] = MEMF(0x56FD20); /* movss */
    MEM32(eax + 0x30) = ecx;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x20) = ecx;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x24) = ecx;
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1C34); /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x28) = ecx;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(0x3B168C); /* addss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x2C) = ecx;
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    edx = 0; /* xor self */
    MEM32(eax + 0x34) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = ecx;
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm5.b, (void *)XBOX_PTR(0x557970), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm5.b, 16); /* movaps */
    ecx = 0x1C1A60;
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esi + 0x44);
    edi = MEM32(0x464660);
    MEM32(eax + 0x34) = edx;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x20) = edx;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x24) = edx;
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x28) = edx;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEM32(eax + 0x2C) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x24);
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    MEM32(eax + 0x30) = edi;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm3.f[0] = MEMF(0x56FDC4); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x1C); /* subss */
    MEM32(eax) = edx;
    xmm4.f[0] = MEMF(0x56FD64); /* movss */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm3.b, (void *)XBOX_PTR(0x557970), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm3.b, 16); /* movaps */
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esi + 0x3C);
    MEMF(eax + 0x30) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    xmm4.f[0] = MEMF(0x56FE18); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1C34); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5.f[0] = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x34) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x56FD64); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x20) = ecx;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x24) = edx;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x28) = ecx;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x2C) = edx;
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edx;
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = edx;
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    memcpy(xmm4.b, (void *)XBOX_PTR(0x557970), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm4.b, 16); /* movaps */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x56FD64); /* movss */
    ecx = 0xF96A0;
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esi + 0x40);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 8); /* movss */
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x2C);
    MEMF(eax + 0x30) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x2C) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm0.f[0] = MEMF(0x56FDA8); /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(eax) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x557970), 16); /* movaps */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
