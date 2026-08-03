#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002EB50
 * Original: 0x0002EB50 - 0x0002EBDA (138 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0002EB50:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    ecx = esi;
    PUSH32(esp, 0); sub_0002EA40(); /* call 0x0002EA40 */

loc_0002EB5D:
    eax = MEM32(esi + 0x34);
    xmm0.f[0] = MEMF(eax + 0x30); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0002EBD6; /* jnp: not parity */

loc_0002EB72:
    edx = MEM32(0x4D6B24);
    ecx = MEM32(0x4D652C);
    eax = MEM32(0x4D6B20);
    ecx = ecx - edx;
    edx = MEM32(0x4D6B28);
    ecx = ecx - eax;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x4D6530);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B2038); /* mulss */
    eax = edx + edx;
    edx = MEM32(esi + 0x14);
    ecx = ecx - eax;
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B2034); /* mulss */
    MEM32(edx + 8) = eax;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -4);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_001C67D0(); /* call 0x001C67D0 */

loc_0002EBD6:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
