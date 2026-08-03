#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00148C10
 * Original: 0x00148C10 - 0x00148ED7 (711 bytes, 213 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148C10(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00148C10:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x3EC2E4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(eax + 0x5D) = LO8(ebx);
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM8(eax + 0x5E) = LO8(ebx);
    MEM8(eax + 0x5F) = LO8(ebx);
    MEM8(eax + 0x60) = LO8(ebx);
    MEM32(eax + 0x3C) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = eax | 0xFFFFFFFFu;
    if (CMP_NE(ecx, eax)) goto loc_00148C64; /* jne: not equal / not zero */

loc_00148C5E:
    MEM32(0x3EC2E4) = ebx;

loc_00148C64:
    if (CMP_NE(MEM32(0x3EC2E8), eax)) goto loc_00148C72; /* jne: not equal / not zero */

loc_00148C6C:
    MEM32(0x3EC2E8) = ebx;

loc_00148C72:
    if (CMP_NE(MEM8(0x4A1DCD), LO8(ebx))) goto loc_00148ED5; /* jne: not equal / not zero */

loc_00148C7E:
    eax = MEM32(0x3EC2DC);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC2EC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    eax = 0; /* xor self */
    edx = 0x3AEB74;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148CA8:
    edx = MEM32(0x3EC2DC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC2F0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEB60;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148CD2:
    ecx = MEM32(0x3EC2DC);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC2F4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEB40;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148CFD:
    eax = MEM32(0x3EC2DC);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC2FC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    eax = 0; /* xor self */
    edx = 0x3AEB20;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148D27:
    edx = MEM32(0x3EC2DC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC300);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEB04;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148D51:
    ecx = MEM32(0x3EC2DC);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC304);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEAE8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148D7C:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = MEM32(0x3EC2DC);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC308);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    eax = 0; /* xor self */
    edx = 0x3AEAC4;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148DA6:
    edx = MEM32(0x3EC2DC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC30C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEAA8;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148DD0:
    ecx = MEM32(0x3EC2DC);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC310);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEA90;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148DFB:
    eax = MEM32(0x3EC2DC);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x3EC314);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    eax = 0; /* xor self */
    edx = 0x3AEA60;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148E25:
    edx = MEM32(0x3EC2DC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC318);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AEA30;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148E4F:
    ecx = MEM32(0x3EC2DC);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    edx = edx + 0x10;
    PUSH32(esp, 0x3EC320);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AEA10;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148E7A:
    eax = MEM32(0x3EC2DC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EC324);
    ecx = MEM32(0x4A1E94);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC2E0);
    eax = 0; /* xor self */
    edx = 0x3AE9F0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148EA4:
    edx = MEM32(0x3EC2DC);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC2E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x3EC31C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AE9DC;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00148ECE:
    MEM8(0x4A1DCD) = 1;

loc_00148ED5:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
