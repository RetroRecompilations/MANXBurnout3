#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C7430
 * Original: 0x001C7430 - 0x001C75BF (399 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001C7430:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM32(0x4A1B60), 2)) goto loc_001C75B8; /* je: equal / zero */

loc_001C7448:
    PUSH32(esp, 0); sub_001C6920(); /* call 0x001C6920 */

loc_001C744D:
    esi = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_001C6A20(); /* call 0x001C6A20 */

loc_001C7457:
    esi = MEM32(0x4A1B9C);
    eax = 0x100;
    eax = eax - esi;
    eax = eax >> 2;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(ebp + -4);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(ebp + -4), (uint32_t)MEM32(ebp + -4))) ebx = MEM32(ebp + -4); /* cmova */
    MEM32(ebp + -8) = ebx;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = ecx;
    goto loc_001C7487;

loc_001C7481:
    esi = MEM32(0x4A1B9C);

loc_001C7487:
    if (CMP_G(ecx & ecx, 0)) goto loc_001C74B2; /* jg: greater (signed >) */

loc_001C748B:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C7490:
    MEM32(ebp + -8) = 0x40;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(ebp + -8);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(ebp + -8), (uint32_t)MEM32(ebp + -8))) ebx = MEM32(ebp + -8); /* cmova */
    MEM32(ebp + -12) = ebx;
    ecx = MEM32(ebp + -12);
    esi = MEM32(0x4A1B9C);
    MEM32(ebp + -4) = ecx;

loc_001C74B2:
    eax = MEM32(ebp + 0xC);
    eax = eax - ecx;
    edx = esi + esi * 2;
    edx = edx * 8 + 0x752F78;
    ecx = esi + ecx * 4;
    MEM32(ebp + 0xC) = eax;
    MEM32(0x4A1B9C) = ecx;
    eax = edx + 0x54;

loc_001C74D0:
    esi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    ecx = MEM32(ebp + -24);
    MEM32(edx) = ecx;
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -20);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + 0x10);
    ebx = MEM32(ecx);
    MEM32(eax + -76) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(eax + -72) = ebx;
    ebx = MEM32(ebp + -16);
    MEM32(eax + -68) = ebx;
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    edi = edi + 8;
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    esi = MEM32(ebp + -32);
    MEM32(eax + -36) = esi;
    ecx = ecx + 8;
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + -28);
    MEM32(eax + -32) = esi;
    esi = MEM32(ecx);
    xmm0.f[0] = MEMF(eax + -32); /* movss */
    MEM32(eax + -28) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + -24) = esi;
    MEM32(eax + -20) = ebx;
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + -60) = ecx;
    MEMF(eax + -56) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + -76);
    xmm0.f[0] = MEMF(eax + -24); /* movss */
    MEM32(eax + -52) = ecx;
    MEMF(eax + -48) = xmm0.f[0]; /* movss */
    MEM32(eax + -44) = ebx;
    ecx = MEM32(eax + -36);
    xmm0.f[0] = MEMF(eax + -80); /* movss */
    MEM32(eax + -12) = ecx;
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + -28);
    xmm0.f[0] = MEMF(eax + -72); /* movss */
    MEM32(eax + -4) = ecx;
    ecx = MEM32(ebp + -4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    edi = edi + 8;
    MEM32(eax + 4) = ebx;
    edx = edx + 0x60;
    eax = eax + 0x60;
    ecx--;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_G(ecx & ecx, 0)) goto loc_001C74D0; /* jg: greater (signed >) */

loc_001C75AD:
    eax = MEM32(ebp + 0xC);
    if (CMP_G(eax & eax, 0)) goto loc_001C7481; /* jg: greater (signed >) */

loc_001C75B8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
