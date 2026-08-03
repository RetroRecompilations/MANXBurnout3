#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00035740
 * Original: 0x00035740 - 0x00035A6A (810 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00035740:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = eax << 7;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = eax + 0x4182A0;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = ebx;
    eax = MEM32(eax + 0x60);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ebx;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(eax, ebx)) goto loc_00035774; /* jne: not equal / not zero */

loc_00035770:
    MEM32(esi) = ebx;
    goto loc_0003578A;

loc_00035774:
    eax = eax + eax * 2;
    eax = eax << 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_00035782:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    MEM32(esi) = eax;

loc_0003578A:
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx + 0x64);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ebx;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_NE(eax, ebx)) goto loc_000357A4; /* jne: not equal / not zero */

loc_0003579F:
    MEM32(esi + 0x1C) = ebx;
    goto loc_000357BB;

loc_000357A4:
    edx = eax + eax * 2;
    edx = edx << 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_000357B2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    MEM32(esi + 0x1C) = eax;

loc_000357BB:
    eax = MEM32(esi + 0x3C);
    ecx = ZX8(MEM8(eax + 0x1B));
    edx = ZX8(MEM8(eax + 0x1A));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 0x19));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 0x18));
    MEMF(esi + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm2.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x44) = xmm3.f[0]; /* movss */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x40) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    ecx = ZX8(MEM8(eax + 0x1F));
    edx = ZX8(MEM8(eax + 0x1E));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 0x1D));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 0x1C));
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm2.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x54) = xmm3.f[0]; /* movss */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x50) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    ecx = ZX8(MEM8(eax + 0x23));
    edx = ZX8(MEM8(eax + 0x22));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 0x21));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 0x20));
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x6C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x60) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    if (CMP_NE(MEM8(eax + 0x24), LO8(ebx))) goto loc_00035878; /* jne: not equal / not zero */

loc_00035870:
    xmm1.f[0] = MEMF(0x3B1730); /* movss */

loc_00035878:
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + 0x40), 16); /* movaps */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x40), xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + 0x50), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x50), xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esi + 0x60), 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x60), xmm3.b, 16); /* movaps */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0x70);
    MEM32(esi + 0x9C) = ecx;
    xmm2.f[0] = MEMF(eax + 0x44); /* movss */
    MEMF(esi + 0xA4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0x74);
    MEM32(esi + 0xAC) = edx;
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0xB4) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0xB8) = edx;
    ecx = MEM32(eax + 0x34);
    MEM32(esi + 0xC8) = ecx;
    edx = MEM32(eax + 0x38);
    MEM32(esi + 0xCC) = edx;
    ecx = MEM32(eax + 0x3C);
    MEM32(esi + 0xC0) = ecx;
    edx = MEM32(eax + 0x40);
    MEM32(esi + 0xC4) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0xD4) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esi + 0xD8) = edx;
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0xDC) = ecx;
    edx = MEM32(eax + 0x58);
    MEM32(esi + 0xE8) = edx;
    ecx = MEM32(eax + 0x4C);
    MEM32(esi + 0xE0) = ecx;
    xmm0.f[0] = MEMF(eax + 0x4C); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    ecx = MEM32(esi + 0xB4);
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x6C);
    MEM32(esi + 0xD0) = edx;
    MEM32(esi + 0xF4) = ecx;
    xmm0.f[0] = MEMF(eax + 0x78); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xB4); /* mulss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xF8) = edx;
    ecx = MEM32(eax + 8);
    if (CMP_A(ecx, 3)) goto loc_00035A65; /* ja: above (unsigned >) */

loc_00035A18:
    { uint32_t _jt = MEM32(ecx * 4 + 0x35A6C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00035A1Fu) goto loc_00035A1F;
    if (_jt == 0x00035A34u) goto loc_00035A34;
    if (_jt == 0x00035A4Cu) goto loc_00035A4C;
    if (_jt == 0x00035A5Bu) goto loc_00035A5B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00035A1F:
    SET_LO8(edx, MEM8(eax + 4));
    ecx = 0; /* xor self */
    /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(edx), LO8(ebx))) ? 1 : 0); /* setne */
    MEM32(esi + 0xB0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00035A34:
    SET_LO8(ecx, MEM8(eax + 4));
    edx = 0; /* xor self */
    /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO8(ecx), LO8(ebx))) ? 1 : 0); /* setne */
    edx = edx + 2;
    MEM32(esi + 0xB0) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00035A4C:
    MEM32(esi + 0xB0) = 4;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00035A5B:
    MEM32(esi + 0xB0) = 5;

loc_00035A65:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
