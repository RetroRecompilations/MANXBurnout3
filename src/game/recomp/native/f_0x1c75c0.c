#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C75C0
 * Original: 0x001C75C0 - 0x001C7706 (326 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C75C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001C75C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM32(0x4A1B60), 2)) goto loc_001C76FF; /* je: equal / zero */

loc_001C75D8:
    PUSH32(esp, 0); sub_001C6920(); /* call 0x001C6920 */

loc_001C75DD:
    esi = 1;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0); sub_001C6A20(); /* call 0x001C6A20 */

loc_001C75EA:
    edx = MEM32(0x4A1B9C);
    eax = 0x100;
    eax = eax - edx;
    eax = eax >> 2;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(ebp + -4);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(ebp + -4), (uint32_t)MEM32(ebp + -4))) ebx = MEM32(ebp + -4); /* cmova */
    MEM32(ebp + -8) = ebx;
    esi = MEM32(ebp + -8);
    goto loc_001C7617;

loc_001C7611:
    edx = MEM32(0x4A1B9C);

loc_001C7617:
    if (CMP_G(esi & esi, 0)) goto loc_001C763F; /* jg: greater (signed >) */

loc_001C761B:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C7620:
    MEM32(ebp + -8) = 0x40;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(ebp + -8);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(ebp + -8), (uint32_t)MEM32(ebp + -8))) ebx = MEM32(ebp + -8); /* cmova */
    MEM32(ebp + -4) = ebx;
    esi = MEM32(ebp + -4);
    edx = MEM32(0x4A1B9C);

loc_001C763F:
    eax = MEM32(ebp + 0xC);
    ecx = edx + edx * 2;
    eax = eax - esi;
    ecx = ecx * 8 + 0x752F78;
    edx = edx + esi * 4;
    MEM32(ebp + 0xC) = eax;
    MEM32(0x4A1B9C) = edx;
    eax = ecx + 0x34;
    /* nop */

loc_001C7660:
    ebx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ebx); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 4); /* addss */
    edx = MEM32(ebp + -24);
    MEM32(ecx) = edx;
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -20);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebp + -12);
    MEM32(eax + -36) = edx;
    xmm0.f[0] = MEMF(ebx); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    edi = edi + 8;
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 4); /* addss */
    ebx = MEM32(ebp + -32);
    MEM32(eax + -4) = ebx;
    MEM32(eax + 0xC) = edx;
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -28);
    MEM32(eax) = ebx;
    ebx = MEM32(ecx);
    xmm0.f[0] = MEMF(eax); /* movss */
    MEM32(eax + -28) = ebx;
    MEMF(eax + -24) = xmm0.f[0]; /* movss */
    MEM32(eax + -12) = edx;
    ebx = MEM32(eax + -4);
    xmm0.f[0] = MEMF(eax + -48); /* movss */
    edi = edi + 8;
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x24) = edx;
    ecx = ecx + 0x60;
    eax = eax + 0x60;
    esi--;
    if (CMP_G(esi & esi, 0)) goto loc_001C7660; /* jg: greater (signed >) */

loc_001C76F4:
    eax = MEM32(ebp + 0xC);
    if (CMP_G(eax & eax, 0)) goto loc_001C7611; /* jg: greater (signed >) */

loc_001C76FF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
