#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000B9C30
 * Original: 0x000B9C30 - 0x000B9D07 (215 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_000B9C30:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C;
    ecx = MEM32(0x557A34);
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax++;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000B9C50:
    SET_LO8(ecx, MEM8(ebp + 8));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esi + 0x24) = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x406670), 16); /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000B9C68; /* jne: not equal / not zero */

loc_000B9C61:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x406680), 16); /* movaps */

loc_000B9C68:
    edx = MEM32(0x464658);
    memcpy(xmm1.b, (void *)XBOX_PTR(0x557990), 16); /* movaps */
    PUSH32(esp, 0);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x56FD58); /* movss */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    memcpy((void *)XBOX_PTR(esp + 0x3C), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x56FDE4); /* movss */
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FD48); /* movss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x56FDE8); /* movss */
    PUSH32(esp, eax);
    edx = esp + 0x30;
    ecx = esp + 0x38;
    edi = esp + 0x40;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000B9D00:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
