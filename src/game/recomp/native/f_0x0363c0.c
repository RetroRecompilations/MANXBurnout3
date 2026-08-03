#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000363C0
 * Original: 0x000363C0 - 0x00036447 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000363C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000363C0:
    ecx = MEM32(esp + 4);
    xmm0.f[0] = MEMF(0x3B17CC); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ecx + 4;
    ebp = 4;

loc_000363D7:
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00036429; /* jle: less or equal (signed <=) */

loc_000363E8:
    esi = 0; /* xor self */
    /* nop */

loc_000363F0:
    eax = MEM32(ecx + -4);
    MEMF(esi + eax) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + -4);
    MEMF(edx + esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + -4);
    MEMF(eax + esi + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + -4);
    MEMF(edx + esi + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    edi++;
    eax = (uint32_t)((int32_t)eax >> 2);
    esi = esi + 0x90;
    if (CMP_L(edi, eax)) goto loc_000363F0; /* jl: less (signed <) */

loc_00036429:
    MEM32(ecx + 4) = 0;
    ecx = ecx + 0x14;
    ebp--;
    if ((ebp != 0)) goto loc_000363D7; /* jne: not equal / not zero */

loc_00036436:
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x50) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
