#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE3B0
 * Original: 0x001CE3B0 - 0x001CE4FF (335 bytes, 76 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE3B0(void)
{
    recomp_xmm_t xmm0;

loc_001CE3B0:
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    ecx = 0; /* xor self */
    MEM32(esp + 0xA) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0xE) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x12) = ecx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x16) = ecx;
    eax = esi + 0x248;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    edx = esp + 0xC;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = ebx;
    MEM16(esp + 0x10) = 1;
    MEM16(esp + 0x12) = 2;
    MEM32(esp + 0x14) = 0xAC44;
    MEM16(esp + 0x1E) = 0x10;
    MEM16(esp + 0x1C) = 4;
    MEM32(esp + 0x18) = 0x2B110;
    MEM32(esp + 0x28) = 0x20;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = 0x1CE260;
    MEM32(esp + 0x34) = esi;
    PUSH32(esp, 0); sub_002F7479(); /* call 0x002F7479 */

loc_001CE43E:
    eax = esi;
    PUSH32(esp, 0); sub_001CEF70(); /* call 0x001CEF70 */

loc_001CE445:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F353F7D);
    PUSH32(esp, 0x3F800000);
    MEMF(esi + 0x21C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CEDB0(); /* call 0x001CEDB0 */

loc_001CE46A:
    ecx = MEM32(esp + 0x3C);
    eax = edi + 0x800;
    ecx = ecx + 0xFFFBF800u;
    MEM32(esi + 0x264) = eax;
    edx = 0x800;
    eax = eax + ecx;
    MEM32(esi + 0x224) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = edx;
    edx = MEM32(esp + 0x38);
    eax = eax + 0x40000;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = ebx;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM32(esi + 0x28) = ebx;
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM32(esi + 0x230) = ebx;
    MEM32(esi + 0x22C) = ebx;
    MEM32(esi + 0x238) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x244) = ebx;
    MEM32(esi + 0x260) = ebx;
    MEM32(esi + 0x250) = edi;
    MEM32(esi + 0x228) = ecx;
    MEM32(esi + 4) = 0x40000;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x240) = edx;
    MEM32(esi + 0x25C) = 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}
