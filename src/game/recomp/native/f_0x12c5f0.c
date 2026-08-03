#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012C5F0
 * Original: 0x0012C5F0 - 0x0012C670 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm5;

loc_0012C5F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x40);
    SET_LO8(ecx, MEM8(eax + 0x16B6));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x168C);
    SET_LO8(ebx, 1);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0012C66A; /* je: equal / zero */

loc_0012C613:
    xmm5.f[0] = MEMF(0x3B1750); /* movss */
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 0xC) = ecx;

loc_0012C622:
    edx = MEM32(esi + 0x14);
    if (TEST_NZ(MEM8(edx + 0x1016), LO8(ebx))) goto loc_0012C65D; /* jne: not equal / not zero */

loc_0012C62D:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0x14), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0012C3F0(); /* call 0x0012C3F0 */

loc_0012C641:
    edx = MEM32(esi + 0x14);
    ecx = ZX8(LO8(eax));
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xF90); /* movss */
    /* comiss xmm0.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm5.f[0])) goto loc_0012C65D; /* jbe: below or equal (unsigned <=) */

loc_0012C655:
    eax = edx;
    MEM8(eax + 0x1016) = MEM8(eax + 0x1016) | LO8(ebx);

loc_0012C65D:
    eax = MEM32(esp + 0xC);
    SET_LO8(ebx, LO8(ebx) << 1);
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_0012C622; /* jne: not equal / not zero */

loc_0012C66A:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
