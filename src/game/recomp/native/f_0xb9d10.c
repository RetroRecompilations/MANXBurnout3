#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000B9D10
 * Original: 0x000B9D10 - 0x000BA0F9 (1001 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000B9D10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(0x557A34);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 8);
    ebx = esi + 0x24;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    edi++;
    if (TEST_NZ(eax, eax)) goto loc_000B9D61; /* jne: not equal / not zero */

loc_000B9D32:
    MEM32(esp + 8) = 4;
    /* nop */

loc_000B9D40:
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B9D51:
    MEM32(ebx) = eax;
    eax = MEM32(esp + 8);
    ebx = ebx + 4;
    eax--;
    MEM32(esp + 8) = eax;
    if ((eax != 0)) goto loc_000B9D40; /* jne: not equal / not zero */

loc_000B9D61:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(ebp + 8); /* movss */
    /* comiss xmm1.f[0], xmm5.f[0] - sets EFLAGS */
    xmm2.f[0] = MEMF(0x56FD58); /* movss */
    if ((xmm1.f[0] <= xmm5.f[0])) goto loc_000B9D7E; /* jbe: below or equal (unsigned <=) */

loc_000B9D76:
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    goto loc_000B9E28;

loc_000B9D7E:
    edx = MEM32(0x557990);
    eax = MEM32(0x557994);
    ecx = MEM32(0x557998);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x55799C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x34);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_000B9DC6; /* jne: not equal / not zero */

loc_000B9DB2:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = edi;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B9DC3:
    MEM32(esi + 0x34) = eax;

loc_000B9DC6:
    ecx = MEM32(0x464658);
    xmm0.f[0] = MEMF(0x56FD54); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x56FD68);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FD0C); /* movss */
    PUSH32(esp, ecx);
    edx = 0x56FD70;
    ecx = esp + 0x28;
    edi = esp + 0x20;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000B9E28:
    eax = MEM32(esi + 0x24);
    edx = MEM32(0x464658);
    MEM32(eax + 0x30) = edx;
    xmm4.f[0] = MEMF(0x56FD20); /* movss */
    edx = 0; /* xor self */
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(0x56FD98);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(0x56FD9C);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(0x56FDA0);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(0x56FDA4);
    MEM32(eax + 0x2C) = ecx;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 8) = ecx;
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = ecx;
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 8); /* subss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm6.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm6.b, 16); /* movaps */
    ecx = 0x1C1A60;
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esi + 0x30);
    edi = MEM32(0x464658);
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x30) = edi;
    edx = MEM32(0x56FDB0);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(0x56FDB4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(0x56FDB8);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(0x56FDBC);
    MEM32(eax + 0x2C) = edx;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = edx;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x56FDC4); /* movss */
    edx = MEM32(esp + 0x18);
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm3.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm3.b, 16); /* movaps */
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esi + 0x28);
    xmm6.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x30) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm5.f[0]; /* movss */
    ecx = MEM32(0x56FD30);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(0x56FD34);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(0x56FD38);
    xmm4.f[0] = MEMF(0x56FD64); /* movss */
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(0x56FD3C);
    MEM32(eax + 0x2C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7.f[0] = MEMF(0x56FE18); /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = edx;
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm7.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm7.b, 16); /* movaps */
    ecx = 0xF9650;
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esi + 0x2C);
    MEMF(eax + 0x30) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm6.f[0]; /* movss */
    edx = MEM32(0x56FE08);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(0x56FE0C);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(0x56FE10);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(0x56FE14);
    MEM32(eax + 0x2C) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(0x56FDA8); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(eax) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
