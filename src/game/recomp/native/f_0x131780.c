#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00131780
 * Original: 0x00131780 - 0x001318D8 (344 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131780(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_00131780:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x90;
    ecx = MEM32(esi + 8);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B050);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001317A4:
    eax = MEM32(esi + 8);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B060);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001317BC:
    edx = MEM32(esi + 8);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B070);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001317D4:
    ecx = MEM32(esi + 8);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B080);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001317EC:
    eax = MEM32(esi + 8);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B090);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00131804:
    edx = MEM32(esi + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B0A0);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_0013181C:
    ecx = MEM32(esi + 8);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4A38F0);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00131837:
    eax = MEM32(esi + 8);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40B0B0);
    edx = edi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_0013184F:
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x64); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x84); /* subss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69BC); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_001318B0;

    /* nop */
    edi = edi;

loc_001318B0:
    xmm0.f[0] = MEMF(ebx); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(ebx + eax * 4) = xmm0.f[0]; /* movss */
    eax++;

}
