#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001318F0
 * Original: 0x001318F0 - 0x001319B4 (196 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001318F0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_001318F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x44) = LO8(eax);
    MEM32(edi + 0x14) = eax;
    eax = MEM32(ebp + 8);
    MEMF(edi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x12C) = xmm0.f[0]; /* movss */
    MEM32(edi + 4) = 0x2B9D6F8;
    MEM32(edi) = 0xFD462907u;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(eax + 0x40);
    MEM32(edi + 0x18) = ecx;
    esi = MEM32(eax + 0x40);
    ebx = edi + 0x28;
    esi = esi + 0x1060;
    PUSH32(esp, 0); sub_00131780(); /* call 0x00131780 */

loc_00131959:
    ecx = 2;
    ebx = esp + 0x10;
    eax = edi;
    PUSH32(esp, 0); sub_00128680(); /* call 0x00128680 */

loc_00131969:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = eax + 0x30;
    ecx = 3;
    ebx = esp + 0x50;
    eax = edi;
    memcpy((void *)XBOX_PTR(edi + 0x50), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128680(); /* call 0x00128680 */

loc_00131984:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    edx = MEM32(ebp + 0xC);
    eax = eax + 0x30;
    eax = 0; /* xor self */
    memcpy((void *)XBOX_PTR(edi + 0x60), xmm0.b, 16); /* movaps */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x18) = eax;
    MEM8(edi + 0x47) = LO8(eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0012FEE0(); /* call 0x0012FEE0 */

loc_001319A9:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
