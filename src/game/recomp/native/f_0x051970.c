#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00051970
 * Original: 0x00051970 - 0x00051C70 (768 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    uint64_t mm0, mm1;

loc_00051970:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ebx + 0x52));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000519B2; /* je: equal / zero */

loc_00051986:
    eax = MEM32(ebx + 0x24);
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEM8(esp + 0xC) = 0x61;
    goto loc_000519E6;

loc_000519B2:
    ecx = MEM32(ebx + 0x24);
    xmm0.f[0] = MEMF(ecx); /* movss */
    edx = MEM32(0x4D6180);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x389CB8); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 0x10); /* movss */
    MEM8(esp + 0xC) = 0x21;

loc_000519E6:
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 0x2C4);
    SET_LO16(edx, LO16(ecx));
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    SET_LO16(edx, LO16(edx) + 0x30);
    MEM32(ebx + 0x38) = ecx;
    MEM16(ebx + 0x4A) = LO16(edx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = 0x54FA20;
    MEM32(esp + 0x18) = 0x54FA50;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3FC00000);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(0x54F88C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x54FA20);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x28);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x64);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, ecx);
    eax = ebx + 0x48;
    ecx = esp + 0x48;
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00051A99:
    SET_LO8(eax, MEM8(ebx + 0x52));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00051AC5; /* je: equal / zero */

loc_00051AA0:
    edx = MEM32(ebx + 0x28);
    xmm0.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x387C04); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    goto loc_00051AF0;

loc_00051AC5:
    eax = MEM32(ebx + 0x28);
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1694); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x389CB4); /* movss */

loc_00051AF0:
    ecx = MEM32(0x4D5370);
    edx = MEM32(ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_00051B01:
    eax--;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x18) = 0;
    mm0 = MEM32(esp + 0x18); /* movd */
    mm1 = MEM32(esp + 0x18); /* movd */
    /* pcmpgtd mm0, qword ptr [esp + 0x30] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 0x30] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x14) = mm0; /* movd */
    /* emms - empty MMX state */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x30) = edx;
    mm0 = MEM32(esp + 0x30); /* movd */
    mm1 = MEM32(esp + 0x1C); /* movd */
    /* pcmpgtd mm0, mm1 (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 0x30] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x18) = mm0; /* movd */
    /* emms - empty MMX state */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEM32(ebx + 0x34) = eax;
    SET_LO16(ecx, MEM16(ebx + 0x34));
    eax = ebx + 0x4E;
    SET_LO16(ecx, LO16(ecx) + 0x31);
    MEM16(eax) = LO16(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = 0x54FA20;
    MEM32(esp + 0x14) = 0x54FA50;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3FC00000);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, 0x54FA50);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_00051C06:
    xmm0.f[0] = MEMF(ebx + 0x3C); /* movss */
    esi = MEM32(ebx + 0x2C);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2D50); /* mulss */
    ecx = esi + 8;
    eax = esp + 0x30;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0002DDC0(); /* call 0x0002DDC0 */

loc_00051C28:
    ecx = eax;
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0002DD80(); /* call 0x0002DD80 */

loc_00051C34:
    ecx = MEM32(eax);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ebx = MEM32(ebx + 0x2C);
    esi = ebx + 8;
    eax = esp + 0x30;
    ecx = esi;
    PUSH32(esp, 0); sub_0002DDC0(); /* call 0x0002DDC0 */

loc_00051C5D:
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
