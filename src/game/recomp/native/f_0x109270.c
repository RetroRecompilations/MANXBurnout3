#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00109270
 * Original: 0x00109270 - 0x0010955B (747 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109270(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00109270:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0xC;
    edi = esp + 0x40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edx = ebx + 0x10;
    edi = edx;
    ecx = 0xC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = ebx + 0x40;
    ecx = 0xC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    ecx = 0xC;
    esi = esp + 0x14;
    edi = esp + 0x74;
    eax = esp + 0x14;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00109040(); /* call 0x00109040 */

loc_00109339:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    esi = ebx + 0x40;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    PUSH32(esp, esi);
    edx = esp + 0x44;
    eax = esp + 0x14;
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00109040(); /* call 0x00109040 */

loc_00109364:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    ecx = MEM32(ebx + 0x200);
    edx = 0; /* xor self */
    MEM32(ecx) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xC8) = xmm2.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(ebx + 0xD0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xE0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0xF0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x100), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x110), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x120), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm1.b, 16); /* movaps */
    MEMF(ebx + 0x144) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x148) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x140) = xmm2.f[0]; /* movss */
    MEM32(ebx + 0x204) = edx;
    esi = ebx + 0x160;
    eax = 0; /* xor self */
    edi = esi;
    ecx = 0x18;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(ebx + 0x194) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esi), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x170), xmm1.b, 16); /* movaps */
    MEM16(ebx + 0x190) = LO16(edx);
    MEM32(ebx + 0x198) = edx;
    memcpy((void *)XBOX_PTR(ebx + 0x150), xmm1.b, 16); /* movaps */
    MEM8(ebx + 0x20C) = LO8(edx);
    MEM32(ebx + 0x208) = edx;
    MEMF(ebx + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x1C4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x1C8) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x1CC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x1F4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(ebx + 0x1F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17EC); /* movss */
    POP32(esp, edi);
    memcpy((void *)XBOX_PTR(ebx + 0x1E0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + 0x1D0), xmm1.b, 16); /* movaps */
    MEM8(ebx + 0x20D) = LO8(edx);
    MEM8(ebx + 0x20E) = LO8(edx);
    MEM8(ebx + 0x20F) = LO8(edx);
    MEM8(ebx + 0x210) = LO8(edx);
    MEM8(ebx + 0x211) = LO8(edx);
    MEM8(ebx + 0x212) = LO8(edx);
    MEM8(ebx + 0x213) = LO8(edx);
    MEM8(ebx + 0x214) = LO8(edx);
    MEMF(ebx + 0x1F0) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x1FC) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x216) = LO8(edx);
    MEM8(ebx + 0x217) = LO8(edx);
    MEM8(ebx + 0x218) = 0xFF;
    POP32(esp, esi);
    MEM32(0x5A3AA0) = edx;
    MEM32(0x5A3AA4) = 0x5A3AB0;
    MEM32(0x5A3AA8) = 0x5A52B0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
