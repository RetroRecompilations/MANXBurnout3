#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017E8A0
 * Original: 0x0017E8A0 - 0x0017EDED (1357 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E8A0:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(0x3F7318) = esi;
    PUSH32(esp, 0); sub_000380D0(); /* call 0x000380D0 */

loc_0017E8B0:
    MEM32(ebx + 0x5AD78) = 0x80;
    eax = ebx + 0x5AD7C;
    MEM32(ebx + 0x5AD70) = eax;
    MEM32(0x45D1A4) = 0x2B9D6F8;
    MEM32(0x45D1A0) = 0xFD462907u;
    eax = ebx + 0x5B9B0;
    MEM32(ebx + 0x5B9A8) = 0xFFFFFFFFu;
    MEM32(ebx + 0x5B9A4) = esi;
    PUSH32(esp, 0); sub_00044BF0(); /* call 0x00044BF0 */

loc_0017E8F5:
    eax = MEM32(0x4A1D14);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebx + 8) = esi;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    ecx = eax + eax * 2;
    MEM16(ebx + 0x12) = LO16(eax);
    eax = eax + 0x7E;
    ecx = ecx << 4;
    ecx = ecx + 0x45D4C0;
    edx = eax + eax * 2;
    edx = edx << 4;
    MEM32(ebx + 0xC) = ecx;
    edx = edx + 0x45D4C0;
    ecx = 0x48;
    MEM16(ebx + 0x1E) = LO16(eax);
    MEM32(ebx + 0x18) = edx;
    eax = eax + ecx;
    edx = eax + eax * 2;
    edx = edx << 4;
    edx = edx + 0x45D4C0;
    MEM16(ebx + 0x10) = 0x7E;
    MEM16(ebx + 0x2A) = LO16(eax);
    eax = eax + ecx;
    MEM16(ebx + 0x1C) = LO16(ecx);
    MEM32(ebx + 0x24) = edx;
    MEM16(ebx + 0x28) = LO16(ecx);
    MEM32(0x4A1D14) = eax;
    ebp = ebx + 0x38;
    goto loc_0017E970;

    /* nop */
    /* nop */

loc_0017E970:
    eax = MEM32(esi * 4 + 0x387480);
    eax = eax + eax * 2;
    eax = eax << 5;
    eax = eax + 0x549FE0;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(esi * 4 + 0x387470);
    edi = ebp + -8;
    eax = esi;
    MEM32(ebp) = ecx;
    PUSH32(esp, 0); sub_0003BFB0(); /* call 0x0003BFB0 */

loc_0017E999:
    esi++;
    ebp = ebp + 0x18;
    if (CMP_L(esi, 4)) goto loc_0017E970; /* jl: less (signed <) */

loc_0017E9A2:
    edi = 0; /* xor self */
    esi = ebx + 0x90;
    /* nop */

loc_0017E9B0:
    eax = edi;
    PUSH32(esp, 0); sub_00035740(); /* call 0x00035740 */

loc_0017E9B7:
    edi++;
    esi = esi + 0x100;
    if (CMP_L(edi, 0x18)) goto loc_0017E9B0; /* jl: less (signed <) */

loc_0017E9C3:
    xmm0.f[0] = MEMF(0x3B16C4); /* movss */
    MEM32(ebx + 0xF9A0) = 0x3EADE8;
    xmm1.f[0] = MEMF(0x3EAE08); /* movss */
    xmm2.f[0] = MEMF(0x3EAE04); /* movss */
    xmm3.f[0] = MEMF(0x3EAE00); /* movss */
    xmm4.f[0] = MEMF(0x3EADFC); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9C8) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9C4) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9C0) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9CC) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0xF9A0);
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    xmm2.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm3.f[0] = MEMF(eax + 0x28); /* movss */
    xmm4.f[0] = MEMF(eax + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9D8) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9D4) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9D0) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0xF9DC) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0xF9A0);
    edx = MEM32(eax + 4);
    xmm1.f[0] = MEMF(0x3B18B8); /* movss */
    MEM32(ebx + 0xF9B8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebx + 0xF9BC) = ecx;
    xmm2.f[0] = MEMF(eax + 0x10); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebx + 0xF9B0) = xmm2.f[0]; /* movss */
    edx = MEM32(eax + 0x44);
    MEM32(ebx + 0x1DAF0) = 0x3EAE38;
    MEM32(ebx + 0xF9AC) = edx;
    xmm2.f[0] = MEMF(0x3EAE58); /* movss */
    xmm3.f[0] = MEMF(0x3EAE54); /* movss */
    xmm4.f[0] = MEMF(0x3EAE50); /* movss */
    xmm5.f[0] = MEMF(0x3EAE4C); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB1C) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB18) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB14) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB10) = xmm5.f[0]; /* movss */
    eax = MEM32(ebx + 0x1DAF0);
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    xmm3.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm4.f[0] = MEMF(eax + 0x28); /* movss */
    xmm5.f[0] = MEMF(eax + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB2C) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB28) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB24) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x1DB20) = xmm5.f[0]; /* movss */
    eax = MEM32(ebx + 0x1DAF0);
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x1DB08) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 0x1DB0C) = edx;
    xmm2.f[0] = MEMF(eax + 0x10); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebx + 0x1DB00) = xmm2.f[0]; /* movss */
    eax = MEM32(eax + 0x44);
    MEM32(ebx + 0x1DAFC) = eax;
    MEM32(ebx + 0x2BC40) = 0x3EAE88;
    xmm2.f[0] = MEMF(0x3EAEA8); /* movss */
    xmm3.f[0] = MEMF(0x3EAEA4); /* movss */
    xmm4.f[0] = MEMF(0x3EAEA0); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = MEMF(0x3EAE9C); /* movss */
    MEMF(ebx + 0x2BC6C) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x2BC64) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x2BC68) = xmm3.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x2BC60) = xmm5.f[0]; /* movss */
    eax = MEM32(ebx + 0x2BC40);
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    xmm3.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm4.f[0] = MEMF(eax + 0x28); /* movss */
    xmm5.f[0] = MEMF(eax + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x2BC7C) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x2BC78) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x2BC74) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x2BC70) = xmm5.f[0]; /* movss */
    eax = MEM32(ebx + 0x2BC40);
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x2BC58) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 0x2BC5C) = edx;
    xmm2.f[0] = MEMF(eax + 0x10); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebx + 0x2BC50) = xmm2.f[0]; /* movss */
    eax = MEM32(eax + 0x44);
    MEM32(ebx + 0x2BC4C) = eax;
    MEM32(ebx + 0x39D90) = 0x3EAED8;
    xmm2.f[0] = MEMF(0x3EAEF8); /* movss */
    xmm3.f[0] = MEMF(0x3EAEF4); /* movss */
    xmm4.f[0] = MEMF(0x3EAEF0); /* movss */
    xmm5.f[0] = MEMF(0x3EAEEC); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DBC) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DB8) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DB4) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DB0) = xmm5.f[0]; /* movss */
    eax = MEM32(ebx + 0x39D90);
    xmm2.f[0] = MEMF(eax + 0x30); /* movss */
    xmm3.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm4.f[0] = MEMF(eax + 0x28); /* movss */
    xmm5.f[0] = MEMF(eax + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DCC) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DC8) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DC4) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x39DC0) = xmm5.f[0]; /* movss */
    eax = MEM32(ebx + 0x39D90);
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x39DA8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 0x39DAC) = edx;
    xmm0.f[0] = MEMF(eax + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebx + 0x39DA0) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0x44);
    MEM32(ebx + 0x39D9C) = eax;
    edi = 0; /* xor self */
    esi = ebx + 0x39DD0;

loc_0017ED33:
    eax = edi;
    PUSH32(esp, 0); sub_00036450(); /* call 0x00036450 */

loc_0017ED3A:
    edi++;
    esi = esi + 0xF0;
    if (CMP_L(edi, 6)) goto loc_0017ED33; /* jl: less (signed <) */

loc_0017ED46:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(ebx + 0x644D0) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x644D4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x644D8) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x644E0) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x644E4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x644E8) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x644F0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x644F4) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x644F8) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x64500) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x64504) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x64508) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(ebx + 0x64510) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x64514) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x64518) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    MEMF(ebx + 0x64520) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x64524) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x64528) = xmm1.f[0]; /* movss */

}
