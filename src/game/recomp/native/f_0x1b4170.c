#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4170
 * Original: 0x001B4170 - 0x001B41EA (122 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4170(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001B4170:
    eax = MEM32(esp + 4);
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 4) = 0;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    ecx = eax;
    ecx = ecx | edx;
    if ((ecx == 0)) goto loc_001B41E5; /* je: equal / zero */

loc_001B41A8:
    goto loc_001B41B0;

    /* nop */

loc_001B41B0:
    ecx = MEM32(edi + 8);
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ecx);
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001B41D6:
    eax = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x14);
    edi = edi + 0x10;
    ecx = eax;
    ecx = ecx | edx;
    if ((ecx != 0)) goto loc_001B41B0; /* jne: not equal / not zero */

loc_001B41E5:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
