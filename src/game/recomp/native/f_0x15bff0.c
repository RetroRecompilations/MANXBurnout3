#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0015BFF0
 * Original: 0x0015BFF0 - 0x0015C061 (113 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BFF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015BFF0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x27E0);
    edx = 0; /* xor self */
    MEM32(eax + 0x64) = ecx;
    MEM8(eax + 4) = LO8(edx);
    esi = (uint32_t)(int32_t)SMEM8(esi + 0x73BB8C);
    MEM32(eax + 0x68) = esi;
    esi = MEM32(esp + 0xC);
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax + 0x70) = esi;
    ecx = eax + 0x78;
    if (CMP_NE(ecx, edx)) goto loc_0015C033; /* jne: not equal / not zero */

loc_0015C01A:
    esi = MEM32(0x3AF2D8);
    MEM32(ecx) = esi;
    esi = MEM32(0x3AF2DC);
    MEM32(ecx + 4) = esi;
    SET_LO8(ebx, MEM8(0x3AF2E0));
    goto loc_0015C04A;

loc_0015C033:
    esi = MEM32(0x3AF2CC);
    MEM32(ecx) = esi;
    esi = MEM32(0x3AF2D0);
    MEM32(ecx + 4) = esi;
    SET_LO8(ebx, MEM8(0x3AF2D4));

loc_0015C04A:
    POP32(esp, esi);
    MEM8(ecx + 8) = LO8(ebx);
    MEM32(eax + 0x60) = edx;
    MEM8(eax + 0x88) = LO8(edx);
    MEM8(eax + 0x89) = LO8(edx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
