#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012D460
 * Original: 0x0012D460 - 0x0012D61B (443 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0012D460:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_A(eax, 5)) goto loc_0012D4BD; /* ja: above (unsigned >) */

loc_0012D473:
    { uint32_t _jt = MEM32(eax * 4 + 0x12D61C); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0012D47Au) goto loc_0012D47A;
    if (_jt == 0x0012D48Au) goto loc_0012D48A;
    if (_jt == 0x0012D49Bu) goto loc_0012D49B;
    if (_jt == 0x0012D4ACu) goto loc_0012D4AC;
    if (_jt == 0x0012D4BDu) goto loc_0012D4BD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012D47A:
    ecx = 1;
    eax = 4;
    MEM8(esp + 8) = LO8(ecx);
    goto loc_0012D4C5;

loc_0012D48A:
    eax = 1;
    ecx = 4;
    MEM8(esp + 8) = 0;
    goto loc_0012D4C5;

loc_0012D49B:
    eax = 5;
    ecx = 2;
    MEM8(esp + 8) = 1;
    goto loc_0012D4C5;

loc_0012D4AC:
    eax = 2;
    ecx = 5;
    MEM8(esp + 8) = 0;
    goto loc_0012D4C5;

loc_0012D4BD:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);

loc_0012D4C5:
    edx = MEM32(esi + 0x18);
    eax = eax << 6;
    edi = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + edx + 0xA0), 16); /* movaps */
    ecx = ecx << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edx + 0xA0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012D4FA:
    eax = MEM32(esi + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edi + 0xA0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x160), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    edx = MEM32(esi + 0x18);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    eax = MEM32(esi + 0x14);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + edx + 0xA0), 16); /* movaps */
    edx = MEM32(esp + 8);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x7C0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x7F0); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    edi = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x7F0); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    edx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00128C30(); /* call 0x00128C30 */

loc_0012D5DC:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp + 0xC;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x7F0), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(ebx), xmm2.b, 16); /* movaps */
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
