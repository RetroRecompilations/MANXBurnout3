#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152E00
 * Original: 0x00152E00 - 0x00152ECF (207 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E00(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152E00:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x554) = eax;
    MEM32(ebp + 0x540) = eax;
    MEM32(ebp + 0x550) = eax;
    MEM32(ebp + 0x53C) = eax;
    PUSH32(esp, 0x20);
    eax = 0x3EC87C;
    edx = 0x3AAE6C;
    MEMF(ebp) = xmm0.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    MEM32(ebp + 0x544) = 6;
    PUSH32(esp, 0); sub_001B2C60(); /* call 0x001B2C60 */

loc_00152E4F:
    eax = 2;
    MEM32(ebp + 0x548) = eax;
    edi = ebp + 0x4E4;
    ecx = 0x16;
    esi = 0x3EC870;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 4;
    ebx = ebp;
    MEM32(ebp + 0x548) = eax;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00152E7C:
    ebx = 1;
    eax = ebp + 8;
    MEM8(ebp + 0x566) = LO8(ebx);
    PUSH32(esp, 0); sub_00155720(); /* call 0x00155720 */

loc_00152E8F:
    eax = MEM32(ebp + 0xC0);
    eax++;
    POP32(esp, edi);
    MEM32(ebp + 0x558) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(ebp + 0x54C) = ebx;
    MEM8(ebp + 0x564) = LO8(eax);
    MEM32(ebp + 0x55C) = eax;
    MEM8(ebp + 0xD0) = LO8(eax);
    MEM8(ebp + 0x565) = LO8(eax);
    MEM32(ebp + 0x4BC) = eax;
    MEM32(ebp + 0x4C0) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
