#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC2C0
 * Original: 0x001CC2C0 - 0x001CC3D8 (280 bytes, 101 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC2C0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001CC2C0:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16C8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x35) = LO8(ebx);
    MEM8(esi + 0x36) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(ebx);
    PUSH32(esp, 0); sub_001FAFA0(); /* call 0x001FAFA0 */

loc_001CC311:
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0); sub_001F6370(); /* call 0x001F6370 */

loc_001CC31D:
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC32B:
    MEM8(esi + 0x38) = LO8(eax);
    edx = MEM32(edi + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC33C:
    edx = MEM32(esi + 4);
    MEM8(esi + 0x39) = LO8(eax);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC34D:
    ecx = MEM32(esi + 4);
    esp = esp + 0x40;
    MEM8(esi + 0x3A) = LO8(eax);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC361:
    MEM8(esi + 0x3B) = LO8(eax);
    edx = MEM32(edi + 0xC);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC372:
    edx = MEM32(esi + 4);
    MEM8(esi + 0x3C) = LO8(eax);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC383:
    PUSH32(esp, 8);
    MEM8(esi + 0x3D) = LO8(eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CC392:
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F5AA0(); /* call 0x001F5AA0 */

loc_001CC39B:
    esp = esp + 0x34;
    MEM32(esi + 8) = eax;
    if (CMP_EQ(MEM8(edi + 0x1C), LO8(ebx))) goto loc_001CC3B3; /* je: equal / zero */

loc_001CC3A6:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB1A0(); /* call 0x001FB1A0 */

loc_001CC3B0:
    esp = esp + 8;

loc_001CC3B3:
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_001CC3D3:
    MEM8(esi) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
