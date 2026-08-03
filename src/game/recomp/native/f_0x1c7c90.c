#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C7C90
 * Original: 0x001C7C90 - 0x001C7EB2 (546 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001C7C90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM32(0x4A1B60), 2)) goto loc_001C7E22; /* je: equal / zero */

loc_001C7CA8:
    PUSH32(esp, 0); sub_001C6920(); /* call 0x001C6920 */

loc_001C7CAD:
    esi = 4;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_001C6A20(); /* call 0x001C6A20 */

loc_001C7CBA:
    ecx = MEM32(0x4A1B9C);
    if (CMP_BE(ecx & ecx, 0)) goto loc_001C7CDB; /* jbe: below or equal (unsigned <=) */

loc_001C7CC4:
    if (CMP_BE(ecx, 0xFB)) goto loc_001C7E29; /* jbe: below or equal (unsigned <=) */

loc_001C7CD0:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C7CD5:
    ecx = MEM32(0x4A1B9C);

loc_001C7CDB:
    esi = MEM32(ebp + 8);

loc_001C7CDE:
    eax = 0x100;
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(ebp + -8);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(ebp + -8), (uint32_t)MEM32(ebp + -8))) ebx = MEM32(ebp + -8); /* cmova */
    MEM32(ebp + -12) = ebx;
    edx = MEM32(ebp + -12);
    MEM32(ebp + -8) = edx;
    /* nop */

loc_001C7D00:
    if (CMP_B(ecx, 0x100)) goto loc_001C7DB6; /* jb: below (unsigned <) */

loc_001C7D0C:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C7D11:
    MEM32(ebp + -12) = 0xFE;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(ebp + -12);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(ebp + -12), (uint32_t)MEM32(ebp + -12))) ebx = MEM32(ebp + -12); /* cmova */
    MEM32(ebp + -20) = ebx;
    ecx = MEM32(0x754748);
    eax = MEM32(0x75474C);
    edx = MEM32(ebp + -20);
    MEM32(0x752F78) = ecx;
    ecx = MEM32(0x754750);
    MEM32(0x752F7C) = eax;
    eax = MEM32(0x754754);
    MEM32(0x752F80) = ecx;
    ecx = MEM32(0x754758);
    MEM32(0x752F84) = eax;
    eax = MEM32(0x75475C);
    MEM32(0x752F88) = ecx;
    ecx = MEM32(0x754760);
    MEM32(0x752F8C) = eax;
    eax = MEM32(0x754764);
    MEM32(0x752F90) = ecx;
    ecx = MEM32(0x754768);
    MEM32(0x752F94) = eax;
    eax = MEM32(0x75476C);
    MEM32(0x752F98) = ecx;
    ecx = MEM32(0x754770);
    MEM32(0x752F9C) = eax;
    eax = MEM32(0x754774);
    MEM32(0x752FA0) = ecx;
    MEM32(ebp + -8) = edx;
    MEM32(0x752FA4) = eax;
    ecx = 2;

loc_001C7DB6:
    eax = ecx + ecx * 2;
    eax = eax * 8 + 0x752F78;
    edx = edx + edx * 2;
    edx = eax + edx * 8;
    goto loc_001C7DD0;

    /* nop */
    /* nop */

loc_001C7DD0:
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    ebx = MEM32(ebp + -32);
    MEM32(eax) = ebx;
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -28);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(ebp + -4);
    MEM32(eax + 0x10) = ebx;
    eax = eax + 0x18;
    edi = edi + 8;
    if (CMP_B(eax, edx)) goto loc_001C7DD0; /* jb: below (unsigned <) */

loc_001C7E07:
    edx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    eax = eax - edx;
    ecx = ecx + edx;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x4A1B9C) = ecx;
    MEM32(ebp + 0xC) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_001C7D00; /* jg: greater (signed >) */

loc_001C7E22:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C7E29:
    eax = ecx + ecx * 2;
    eax = eax << 3;
    edx = eax + 0x752F60;
    esi = MEM32(edx);
    MEM32(eax + 0x752F78) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x752F7C) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 0x752F80) = esi;
    esi = MEM32(edx + 0xC);
    MEM32(eax + 0x752F84) = esi;
    esi = MEM32(edx + 0x10);
    MEM32(eax + 0x752F88) = esi;
    edx = MEM32(edx + 0x14);
    esi = MEM32(ebp + 8);
    MEM32(eax + 0x752F8C) = edx;
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    edx = MEM32(ebp + -24);
    MEM32(eax + 0x752F90) = edx;
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -20);
    MEM32(eax + 0x752F94) = edx;
    edx = MEM32(ebp + -4);
    ecx = ecx + 2;
    MEM32(eax + 0x752FA0) = edx;
    MEM32(0x4A1B9C) = ecx;
    goto loc_001C7CDE;

}
