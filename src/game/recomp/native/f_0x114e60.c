#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114E60
 * Original: 0x00114E60 - 0x00114F2E (206 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00114E60:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    ecx = MEM32(0x73A19C);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00114F28; /* jle: less or equal (signed <=) */

loc_00114E79:
    xmm2.f[0] = MEMF(0x3B1904); /* movss */
    edx = esi + 0x74;
    edi = 0; /* xor self */
    eax = esi + 0x60;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;

loc_00114E91:
    MEM8(eax) = 0;
    edx = MEM32(esi + 0xE6C8C);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00114F10; /* jle: less or equal (signed <=) */

loc_00114EA0:
    ebx = esi + 0xE6B80;
    goto loc_00114EB0;

    /* nop */
    /* nop */

loc_00114EB0:
    edx = MEM32(ebx);
    edx = MEM32(edx + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(esp + 0x1C))) goto loc_00114F02; /* jbe: below or equal (unsigned <=) */

loc_00114EF1:
    SET_LO8(edx, MEM8(eax));
    if (CMP_AE(LO8(edx), 0x10)) goto loc_00114F02; /* jae: above or equal (unsigned >=) */

loc_00114EF8:
    edx = ZX8(LO8(edx));
    edx = edx + edi;
    MEM8(edx + esi) = LO8(ecx);
    MEM8(eax) = MEM8(eax) + 1;

loc_00114F02:
    edx = MEM32(esi + 0xE6C8C);
    ecx++;
    ebx = ebx + 4;
    if (CMP_L(ecx, edx)) goto loc_00114EB0; /* jl: less (signed <) */

loc_00114F10:
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x30;
    ecx = MEM32(esp + 0x18);
    edi = edi + 0x10;
    eax++;
    ecx--;
    MEM32(esp + 0x18) = ecx;
    if ((ecx != 0)) goto loc_00114E91; /* jne: not equal / not zero */

loc_00114F28:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
