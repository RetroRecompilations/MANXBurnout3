#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00107FD0
 * Original: 0x00107FD0 - 0x0010807C (172 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107FD0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00107FD0:
    esp = esp - 0x10;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00107E90(); /* call 0x00107E90 */

loc_00107FE8:
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = esi;
    PUSH32(esp, 0); sub_00107E90(); /* call 0x00107E90 */

loc_00107FFD:
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x10;
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm3.f[0])) goto loc_00108076; /* ja: above (unsigned >) */

loc_00108011:
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00108076; /* ja: above (unsigned >) */

loc_00108022:
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00108076:
    SET_LO8(eax, 1);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
