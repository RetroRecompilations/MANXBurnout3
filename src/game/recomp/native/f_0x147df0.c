#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00147DF0
 * Original: 0x00147DF0 - 0x00147E96 (166 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00147DF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x12C);
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = MEM32(eax + 0x64B38C);
    ecx = MEM32(eax + 0x204);
    xmm0.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38994C); /* mulss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x30;
    edi = MEM32(esi);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = esi;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00147E55; /* jbe: below or equal (unsigned <=) */

loc_00147E4F:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    goto loc_00147E5C;

loc_00147E55:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xB0), 16); /* movaps */

loc_00147E5C:
    ecx = MEM32(edx + 0xFC);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    eax = eax + 0x90;
    PUSH32(esp, eax);
    ecx = edx + 0xB0;
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = edx + 0x10;
    PUSH32(esp, edx);
    memcpy((void *)XBOX_PTR(esp + 0x3C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00146530(); /* call 0x00146530 */

loc_00147E8E:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
