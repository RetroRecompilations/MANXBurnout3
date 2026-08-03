#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012F820
 * Original: 0x0012F820 - 0x0012F8D3 (179 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0012F820:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    xmm1.f[0] = MEMF(0x60EA1C); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A7950); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    esi = edi + 0x9C;
    ebx = 4;
    /* nop */

loc_0012F850:
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0012F8C7; /* jbe: below or equal (unsigned <=) */

loc_0012F85C:
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0x17C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + -12), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + -28), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x140), xmm0.b, 16); /* movaps */
    MEMF(edi + 0x180) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = edi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0012E4D0(); /* call 0x0012E4D0 */

loc_0012F8B9:
    SET_LO8(eax, MEM8(esi + 4));
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi + 4) = LO8(eax);

loc_0012F8C7:
    esi = esi + 0x30;
    ebx--;
    if ((ebx != 0)) goto loc_0012F850; /* jne: not equal / not zero */

loc_0012F8CD:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
