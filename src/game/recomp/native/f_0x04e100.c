#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004E100
 * Original: 0x0004E100 - 0x0004E1A9 (169 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E100(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_0004E100:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebx + 0x14) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(ebx + 0x18) = edx;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx++;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 4);
    MEM16(ebx + 0x12) = LO16(ecx);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM8(ebx + 0x1C) = LO8(eax);
    PUSH32(esp, 0); sub_00053DE0(); /* call 0x00053DE0 */

loc_0004E136:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    esi = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(ebx + 0x18);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00053BE0(); /* call 0x00053BE0 */

loc_0004E14F:
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = MEM32(ebx + 4);
    edx = MEM32(ecx + edx + 0x28);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    esi = esp + 0x14;
    edi = esp + 0x1C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C15A0(); /* call 0x001C15A0 */

loc_0004E19B:
    POP32(esp, edi);
    MEM32(ebx + 8) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
