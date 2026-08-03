#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C7EC0
 * Original: 0x001C7EC0 - 0x001C81BD (765 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001C7EC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM32(0x4A1B60), 2)) goto loc_001C81B6; /* je: equal / zero */

loc_001C7EDB:
    esi = 5;
    PUSH32(esp, 0); sub_001C6A20(); /* call 0x001C6A20 */

loc_001C7EE5:
    ecx = MEM32(0x4A1B9C);
    if (CMP_BE(ecx & ecx, 0)) goto loc_001C7F02; /* jbe: below or equal (unsigned <=) */

loc_001C7EEF:
    if (CMP_BE(ecx, 0xFB)) goto loc_001C7F4E; /* jbe: below or equal (unsigned <=) */

loc_001C7EF7:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C7EFC:
    ecx = MEM32(0x4A1B9C);

loc_001C7F02:
    esi = MEM32(ebp + 8);

loc_001C7F05:
    edx = 0x100;
    edx = edx - ecx;
    MEM32(esp + 0x18) = edx;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(esp + 0x18);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(esp + 0x18), (uint32_t)MEM32(esp + 0x18))) ebx = MEM32(esp + 0x18); /* cmova */
    MEM32(esp + 0x1C) = ebx;
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(0x3B16C4); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEM32(esp + 0x18) = eax;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    goto loc_001C7FF0;

loc_001C7F4E:
    esi = MEM32(ebp + 8);
    ebx = ecx + ecx * 2;
    ebx = ebx << 3;
    eax = ebx + 0x752F60;
    ecx = MEM32(eax);
    MEM32(ebx + 0x752F78) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0x752F7C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebx + 0x752F80) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebx + 0x752F84) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebx + 0x752F88) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(ebx + 0x752F8C) = edx;
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(ebx + 0x752F94) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebx + 0x752F90) = eax;
    PUSH32(esp, 0); sub_001C6920(); /* call 0x001C6920 */

loc_001C7FCC:
    MEM32(ebx + 0x752FA0) = eax;
    eax = MEM32(0x4A1B9C);
    eax = eax + 2;
    MEM32(0x4A1B9C) = eax;
    ecx = eax;
    goto loc_001C7F05;

loc_001C7FE6:
    esi = MEM32(ebp + 8);
    ecx = MEM32(0x4A1B9C);
    /* nop */

loc_001C7FF0:
    if (CMP_B(ecx, 0x100)) goto loc_001C80C0; /* jb: below (unsigned <) */

loc_001C7FFC:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C8001:
    MEM32(esp + 0x1C) = 0xFE;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    eax = eax - MEM32(esp + 0x1C);
    if (CMP_A((uint32_t)eax + (uint32_t)MEM32(esp + 0x1C), (uint32_t)MEM32(esp + 0x1C))) ebx = MEM32(esp + 0x1C); /* cmova */
    MEM32(esp + 0x20) = ebx;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(0x754748);
    edx = MEM32(0x75474C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x754750);
    MEM32(0x752F78) = ecx;
    ecx = MEM32(0x754754);
    MEM32(0x752F7C) = edx;
    edx = MEM32(0x754758);
    MEM32(0x752F80) = eax;
    eax = MEM32(0x75475C);
    MEM32(0x752F84) = ecx;
    ecx = MEM32(0x754760);
    MEM32(0x752F88) = edx;
    edx = MEM32(0x754764);
    MEM32(0x752F8C) = eax;
    eax = MEM32(0x754768);
    MEM32(0x752F90) = ecx;
    ecx = MEM32(0x75476C);
    MEM32(0x752F94) = edx;
    edx = MEM32(0x754770);
    MEM32(0x752F98) = eax;
    eax = MEM32(0x754774);
    MEM32(0x752F9C) = ecx;
    MEM32(0x4A1B9C) = 2;
    ecx = MEM32(0x4A1B9C);
    MEM32(0x752FA0) = edx;
    MEM32(0x752FA4) = eax;

loc_001C80C0:
    eax = MEM32(esp + 0x18);
    edx = ecx + ecx * 2;
    edx = edx * 8 + 0x752F78;
    ecx = eax + eax * 2;
    eax = edx + ecx * 8;
    MEM32(esp + 0x1C) = eax;
    goto loc_001C80E0;

loc_001C80DA:
    esi = MEM32(ebp + 8);
    /* nop */

loc_001C80E0:
    xmm1.f[0] = MEMF(esi); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(edx + 4) = eax;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    ecx = eax;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    ebx = eax;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    esi = eax;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ecx = ecx << 8;
    ecx = ecx | esi;
    esi = MEM32(ebp + 0x10);
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 0x10) = ecx;
    esi = esi + 0x10;
    edx = edx + 0x18;
    edi = edi + 8;
    /* cmp edx, eax - flags set for next jcc */
    MEM32(ebp + 0x10) = esi;
    if (CMP_B(edx, eax)) goto loc_001C80DA; /* jb: below (unsigned <) */

loc_001C8194:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(0x4A1B9C);
    eax = eax - ecx;
    esi = esi + ecx;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x4A1B9C) = esi;
    MEM32(ebp + 0xC) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_001C7FE6; /* jg: greater (signed >) */

loc_001C81B6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
