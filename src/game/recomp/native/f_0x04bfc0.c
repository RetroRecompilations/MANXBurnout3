#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004BFC0
 * Original: 0x0004BFC0 - 0x0004C38D (973 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0004BFC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    eax = esi;
    ecx = 2;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0004BFE1:
    edx = MEM32(ebx + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_0004C012; /* jne: not equal / not zero */

loc_0004BFED:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(ebx + 8);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_0004C012:
    eax = ebx;
    PUSH32(esp, 0); sub_0004E360(); /* call 0x0004E360 */

loc_0004C019:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x27E0);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    ecx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(edx, MEM8(ebp + 0xC));
    ecx = eax + ecx + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x10);
    MEM8(ebx + 0x56A) = LO8(edx);
    edx = MEM32(ebx + 8);
    esi = esi + 0x73B2A0;
    eax++;
    PUSH32(esp, edx);
    MEM32(ebx + 0x68C) = esi;
    MEM32(ebx + 0x698) = eax;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004C056:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    esi = ebx + 0x20;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    edx = esp + 0x24;
    MEM32(ebx + 0x560) = eax;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_00048800(); /* call 0x00048800 */

loc_0004C0AE:
    eax = esi;
    PUSH32(esp, 0); sub_0004BF10(); /* call 0x0004BF10 */

loc_0004C0B5:
    edx = MEM32(ebx + 0x68C);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0xFC); /* cvtsi2ss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    MEM8(ebx + 0x53B) = LO8(eax);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    MEMF(ebx + 0x524) = xmm0.f[0]; /* movss */
    MEM32(ebx + 0x554) = 0x2B9D6F8;
    MEM32(ebx + 0x550) = 0xFD462907u;
    ecx = MEM32(ebx + 0x560);
    edx = MEM32(ecx);
    MEM32(ebx + 0x558) = edx;
    eax = MEM32(ecx + 4);
    MEM32(ebx + 0x55C) = eax;
    eax = 0; /* xor self */
    MEM8(ebx + 0x564) = LO8(eax);
    MEM8(ebx + 0x565) = LO8(eax);
    MEM8(ebx + 0x566) = LO8(eax);
    MEM8(ebx + 0x567) = LO8(eax);
    MEM8(ebx + 0x568) = LO8(eax);
    MEM8(ebx + 0x569) = LO8(eax);
    MEM8(ebx + 0x56B) = LO8(eax);
    xmm0.f[0] = MEMF(ecx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ebx + 0x56C) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x4D532C);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 0x20F0);
    MEM32(ebx + 0x574) = ecx;
    MEM32(ebx + 0x570) = eax;
    MEM32(ebx + 0x584) = eax;
    MEMF(ebx + 0x58C) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x590) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x594) = xmm2.f[0]; /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(ebx + 0x588) = LO8(ecx);
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x20F4);
    MEM32(ebx + 0x598) = eax;
    MEM32(ebx + 0x59C) = edx;
    MEM32(ebx + 0x5AC) = eax;
    MEM8(ebx + 0x5B0) = LO8(ecx);
    MEMF(ebx + 0x5B4) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x5B8) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x5BC) = xmm2.f[0]; /* movss */
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x20F8);
    MEM8(ebx + 0x5D8) = LO8(ecx);
    MEM32(ebx + 0x5C0) = eax;
    MEM32(ebx + 0x5D4) = eax;
    MEM32(ebx + 0x5C4) = edx;
    MEMF(ebx + 0x5DC) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x5E0) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x5E4) = xmm2.f[0]; /* movss */
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x20EC);
    MEM8(ebx + 0x600) = LO8(ecx);
    MEM32(ebx + 0x5E8) = eax;
    MEM32(ebx + 0x5FC) = eax;
    MEM32(ebx + 0x5EC) = edx;
    MEMF(ebx + 0x604) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x608) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x60C) = xmm2.f[0]; /* movss */
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x20FC);
    MEM8(ebx + 0x628) = LO8(ecx);
    MEM32(ebx + 0x610) = eax;
    MEM32(ebx + 0x624) = eax;
    MEM32(ebx + 0x614) = edx;
    MEMF(ebx + 0x62C) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x630) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x634) = xmm2.f[0]; /* movss */
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x2100);
    MEM8(ebx + 0x650) = LO8(ecx);
    MEM32(ebx + 0x638) = eax;
    MEM32(ebx + 0x64C) = eax;
    MEM32(ebx + 0x63C) = edx;
    MEMF(ebx + 0x654) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x658) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x65C) = xmm2.f[0]; /* movss */
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x2104);
    MEM8(ebx + 0x678) = LO8(ecx);
    MEM32(ebx + 0x660) = eax;
    MEM32(ebx + 0x674) = eax;
    MEM32(ebx + 0x664) = edx;
    MEMF(ebx + 0x67C) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x680) = xmm2.f[0]; /* movss */
    MEMF(ebx + 0x684) = xmm2.f[0]; /* movss */
    MEM32(ebx + 0x688) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebx + 0x690) = eax;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax);
    MEM32(ebx + 0x6A0) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    edx = MEM32(eax + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edi = ebx + 0x6A0;
    MEM32(edi + 4) = edx;
    edx = MEM32(ebx + 4);
    edx = MEM32(ecx + edx + 0x28);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    esi = eax + 8;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C15A0(); /* call 0x001C15A0 */

loc_0004C366:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(ebx + 0x69C) = eax;
    MEMF(ebx + 0x694) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x6A8) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
