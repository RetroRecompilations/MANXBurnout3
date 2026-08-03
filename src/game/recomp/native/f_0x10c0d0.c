#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C0D0
 * Original: 0x0010C0D0 - 0x0010C211 (321 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0010C0D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5A53C0);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0010C220(); /* call 0x0010C220 */

loc_0010C0EC:
    edx = eax;
    eax = MEM32(ebp + 0x10);
    esp = esp + 8;
    /* cmp eax, 1 - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (CMP_BE(eax, 1)) goto loc_0010C144; /* jbe: below or equal (unsigned <=) */

loc_0010C0FB:
    goto loc_0010C100;

    /* nop */

loc_0010C100:
    if (CMP_BE(edx, 1)) goto loc_0010C144; /* jbe: below or equal (unsigned <=) */

loc_0010C105:
    eax = MEM32(ebp + 0xC);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x780);
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    ecx = ecx + eax;
    eax = edi + 0x5A53C0;
    PUSH32(esp, eax);
    eax = 0x5A5B40;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010C220(); /* call 0x0010C220 */

loc_0010C12C:
    ecx = 1;
    ecx = ecx - esi;
    esp = esp + 8;
    SET_LO8(ebx, LO8(ebx) + 1);
    edx = eax;
    eax = ZX8(LO8(ebx));
    esi = ecx;
    if (CMP_B(eax, MEM32(ebp + 0x10))) goto loc_0010C100; /* jb: below (unsigned <) */

loc_0010C144:
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0010C20A; /* jbe: below or equal (unsigned <=) */

loc_0010C14E:
    ecx = MEM32(ebp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x780);
    xmm3.f[0] = MEMF(0x39AACC); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    esi = esi + 0x5A53C0;
    MEM32(esp + 0x10) = ecx;
    ebx = esi;
    edi = edi;

loc_0010C170:
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0010C1EE; /* jbe: below or equal (unsigned <=) */

loc_0010C176:
    edi = MEM32(ebp + 8);
    esi = esp + 0x20;
    MEM32(esp + 0x1C) = esi;
    esi = esp + 0x14;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi); /* movss */
    MEM32(esp + 0x18) = 0x7FFFFFFF;
    /* shufps xmm1, xmm1, 0 */
    goto loc_0010C1A0;

    /* nop */

loc_0010C1A0:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* subps: xmm4.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm4.b, 16); /* movaps */
    esi = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* andps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    /* comiss xmm2.f[0], MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x20))) goto loc_0010C1E6; /* jbe: below or equal (unsigned <=) */

loc_0010C1D8:
    /* comiss xmm2.f[0], MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x24))) goto loc_0010C1E6; /* jbe: below or equal (unsigned <=) */

loc_0010C1DF:
    /* comiss xmm2.f[0], MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm2.f[0] > MEMF(esp + 0x28))) goto loc_0010C200; /* ja: above (unsigned >) */

loc_0010C1E6:
    ecx++;
    edi = edi + 0x10;
    if (CMP_B(ecx, eax)) goto loc_0010C1A0; /* jb: below (unsigned <) */

loc_0010C1EE:
    ecx = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    eax++;
    ecx = ecx + 0x10;
    MEM32(esp + 0x10) = ecx;

loc_0010C200:
    ebx = ebx + 0x10;
    edx--;
    if ((edx != 0)) goto loc_0010C170; /* jne: not equal / not zero */

loc_0010C20A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
