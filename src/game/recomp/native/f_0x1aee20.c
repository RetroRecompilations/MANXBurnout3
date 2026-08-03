#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AEE20
 * Original: 0x001AEE20 - 0x001AEEA3 (131 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEE20(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001AEE20:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001AEDB0(); /* call 0x001AEDB0 */

loc_001AEE33:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, MEM8(esp + 0x24));
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    esi = eax;
    eax = MEM32(esp + 0x14);
    /* ucomiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    MEM32(esi) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esi + 0x1E) = 2;
    MEM8(esi + 0x1C) = LO8(ecx);
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (1 /* jp after test - parity */) goto loc_001AEE71; /* jp: parity */

loc_001AEE68:
    /* ucomiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001AEE75; /* jnp: not parity */

loc_001AEE71:
    MEM8(esi + 0x1D) = MEM8(esi + 0x1D) | 1;

loc_001AEE75:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001AEE7D:
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001AEE85:
    if (CMP_NE(LO8(eax), 1)) goto loc_001AEE96; /* jne: not equal / not zero */

loc_001AEE89:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001AEE90:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_001AEE96:
    MEM8(esi + 0x1E) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}
