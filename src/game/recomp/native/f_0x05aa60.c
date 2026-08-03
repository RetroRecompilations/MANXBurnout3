#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0005AA60
 * Original: 0x0005AA60 - 0x0005AC04 (420 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005AA60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0005AA60:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    SET_LO8(edx, MEM8(ebp + 0x14));
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = edi + 0x20;
    MEM32(esi) = eax;
    SET_LO8(eax, MEM8(ebp + 0x24));
    MEM32(esi + 4) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM8(esi + 0x13) = LO8(eax);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x10) = LO8(edx);
    MEM8(esi + 0x11) = LO8(ebx);
    MEM8(esi + 0x12) = 0;
    edx = MEM32(ecx * 4 + 0x54FE20);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    MEM32(esi + 0x14) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0005DFD0(); /* call 0x0005DFD0 */

loc_0005AAC1:
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    esp = esp + 4;
    if (CMP_LE(eax & eax, 0)) goto loc_0005AB03; /* jle: less or equal (signed <=) */

loc_0005AAD0:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 8 + 0x49FACC); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16E8); /* mulss */
    xmm1.f[0] = MEMF(eax * 8 + 0x49FAC8); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_0005AB0B; /* jb: below (unsigned <) */

loc_0005AAFE:
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    goto loc_0005AB0B;

loc_0005AB03:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */

loc_0005AB0B:
    xmm4.f[0] = MEMF(ebp + 0x20); /* movss */
    xmm3.f[0] = MEMF(ebp + 0x28); /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_0005AB52; /* jbe: below or equal (unsigned <=) */

loc_0005AB2D:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = MEMF(esi + 0x14); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */

loc_0005AB52:
    /* cmp ebx, 3 - flags set for next jcc */
    xmm5.f[0] = xmm5.f[0] / xmm1.f[0]; /* divss */
    MEMF(esi + 8) = xmm5.f[0]; /* movss */
    if (CMP_A(ebx, 3)) goto loc_0005AB7C; /* ja: above (unsigned >) */

loc_0005AB60:
    { uint32_t _jt = MEM32(ebx * 4 + 0x5AC04); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0005AB67u) goto loc_0005AB67;
    if (_jt == 0x0005AB6Eu) goto loc_0005AB6E;
    if (_jt == 0x0005AB75u) goto loc_0005AB75;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005AB67:
    eax = 0x5AC20;
    goto loc_0005AB80;

loc_0005AB6E:
    eax = 0x5B670;
    goto loc_0005AB80;

loc_0005AB75:
    eax = 0x5C380;
    goto loc_0005AB80;

loc_0005AB7C:
    eax = MEM32(esp + 8);

loc_0005AB80:
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    POP32(esp, esi);
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    MEM32(edi + 0x3C) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}
