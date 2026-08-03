#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111AC0
 * Original: 0x00111AC0 - 0x00111BCA (266 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111AC0(void)
{
    recomp_xmm_t xmm0, xmm1;

loc_00111AC0:
    PUSH32(esp, esi);
    esi = ecx + ecx * 2 + 9;
    esi = esi << 4;
    xmm1.f[0] = MEMF(esi + eax); /* movss */
    esi = MEM32(eax + 0x1CB74);
    esi = eax + esi * 8 + 0xE5F0;
    edx = ecx + ecx * 2;
    edx = edx << 4;
    xmm0.f[0] = MEMF(edx + eax + 0x80); /* movss */
    MEM16(esi + 4) = LO16(ecx);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM8(esi + 6) = 1;
    esi = MEM32(eax + 0x1CB74);
    MEM16(eax + esi * 8 + 0xE5FC) = LO16(ecx);
    MEMF(eax + esi * 8 + 0xE5F8) = xmm1.f[0]; /* movss */
    MEM8(eax + esi * 8 + 0xE5FE) = 0;
    xmm0.f[0] = MEMF(edx + eax + 0x84); /* movss */
    xmm1.f[0] = MEMF(edx + eax + 0x94); /* movss */
    edx = edx + eax;
    esi = eax + esi * 8 + 0xE5F8;
    esi = MEM32(eax + 0x1CB74);
    MEM16(eax + esi * 8 + 0x13274) = LO16(ecx);
    MEMF(eax + esi * 8 + 0x13270) = xmm0.f[0]; /* movss */
    MEM8(eax + esi * 8 + 0x13276) = 1;
    esi = eax + esi * 8 + 0x13270;
    esi = MEM32(eax + 0x1CB74);
    MEM16(eax + esi * 8 + 0x1327C) = LO16(ecx);
    MEMF(eax + esi * 8 + 0x13278) = xmm1.f[0]; /* movss */
    MEM8(eax + esi * 8 + 0x1327E) = 0;
    xmm0.f[0] = MEMF(edx + 0x88); /* movss */
    xmm1.f[0] = MEMF(edx + 0x98); /* movss */
    edx = MEM32(eax + 0x1CB74);
    esi = eax + esi * 8 + 0x13278;
    MEM16(eax + edx * 8 + 0x17EF4) = LO16(ecx);
    edx = eax + edx * 8 + 0x17EF0;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM8(edx + 6) = 1;
    edx = MEM32(eax + 0x1CB74);
    edx = eax + edx * 8 + 0x17EF8;
    MEM16(edx + 4) = LO16(ecx);
    MEMF(edx) = xmm1.f[0]; /* movss */
    MEM8(edx + 6) = 0;
    MEM32(eax + 0x1CB74) = MEM32(eax + 0x1CB74) + 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
