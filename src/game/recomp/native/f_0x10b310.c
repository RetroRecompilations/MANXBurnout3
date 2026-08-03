#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010B310
 * Original: 0x0010B310 - 0x0010B3F7 (231 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0010B310:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    /* cmp ecx, 1 - flags set for next jcc */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    if (CMP_LE(ecx, 1)) goto loc_0010B3C9; /* jle: less or equal (signed <=) */

loc_0010B334:
    esi = esp + 0x20;
    MEM32(esp + 0x18) = esi;
    esi = esp + 0x30;
    eax = eax + 0x10;
    MEM32(esp + 0x1C) = esi;
    ecx--;
    goto loc_0010B350;

    /* nop */

loc_0010B350:
    MEM32(esp + 0x14) = eax;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x40);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(esp + 0x28) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x14) = eax;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x50);
    MEM32(esp + 0x30) = esi;
    esi = MEM32(esp + 0x54);
    MEM32(esp + 0x34) = esi;
    esi = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = esi;
    esi = MEM32(esp + 0x5C);
    eax = eax + 0x10;
    ecx--;
    MEM32(esp + 0x3C) = esi;
    if ((ecx != 0)) goto loc_0010B350; /* jne: not equal / not zero */

loc_0010B3C4:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */

loc_0010B3C9:
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    /* addps: xmm0.f[0] += MEMF(esp + 0x30) (packed 4xfloat) */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = esp + 0x1C;
    xmm1.f[0] = MEMF(eax); /* movss */
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    POP32(esp, edi);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
