#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0005A390
 * Original: 0x0005A390 - 0x0005A3EE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0005A390:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0005A3AA:
    edx = MEM32(esi + 4);
    if (CMP_NE(MEM32(edx + 0x170), 2)) goto loc_0005A3D7; /* jne: not equal / not zero */

loc_0005A3B6:
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = MEM32(esi + 8);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -8);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_0005A3D7:
    MEM32(esi + 0x50) = 0;
    eax = MEM32(0x46469C);
    MEM32(esi + 0x54) = eax;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
