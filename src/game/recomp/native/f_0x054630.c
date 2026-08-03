#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00054630
 * Original: 0x00054630 - 0x000546FC (204 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00054630:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    edi = edx;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    eax = edi;
    ecx = 2;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0005464E:
    edx = MEM32(esi + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_0005467B; /* jne: not equal / not zero */

loc_0005465A:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(esi + 8);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -8);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_0005467B:
    eax = esi;
    PUSH32(esp, 0); sub_0004E360(); /* call 0x0004E360 */

loc_00054682:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x20) = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x27E0);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x28) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    edi = edi + 0x73B2A0;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    MEM32(esi + 0x24) = edi;
    edi = MEM32(esi + 4);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    edx = edx + edi + 0x14;
    ecx = eax + 1;
    POP32(esp, edi);
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x19C) = ebx;
    MEM32(esi + 0x1A0) = ebx;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x18C) = 3;
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x44) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
