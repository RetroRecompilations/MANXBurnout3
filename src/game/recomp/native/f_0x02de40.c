#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002DE40
 * Original: 0x0002DE40 - 0x0002DEF8 (184 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE40(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_0002DE40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x38875C); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x397540); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = MEMF(0x3B1A10); /* movss */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x1C), 16); /* movaps */
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, esi);
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(edi + 0x3C) = 0x2DF00;
    esi = MEM32(0x4D1FE0);
    PUSH32(esp, 0x3AAE6C);
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_0002DEDD:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = eax;
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
