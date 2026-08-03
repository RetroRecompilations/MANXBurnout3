#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B180
 * Original: 0x0003B180 - 0x0003B232 (178 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003B180:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = edi + 0x20E0C;
    MEM32(esp + 8) = 5;
    PUSH32(esp, esi);

loc_0003B192:
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0003B219; /* jle: less or equal (signed <=) */

loc_0003B19A:
    ebp = eax + -512;

loc_0003B1A0:
    esi = MEM32(ebp);
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    edx = MEM32(esi + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    /* comiss xmm0.f[0], MEMF(edx + 0x4C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0x4C))) goto loc_0003B20F; /* jbe: below or equal (unsigned <=) */

loc_0003B1B8:
    MEM8(esi + 0x11) = 0xFF;
    edx = MEM32(eax);
    ebx = edx + -1;
    if (CMP_NE(ecx, ebx)) goto loc_0003B1D2; /* jne: not equal / not zero */

loc_0003B1C5:
    MEM32(eax + ecx * 4 + -512) = 0;
    goto loc_0003B1ED;

loc_0003B1D2:
    edx = MEM32(eax + edx * 4 + -516);
    MEM32(eax + ecx * 4 + -512) = edx;
    edx = MEM32(eax);
    MEM32(eax + edx * 4 + -516) = 0;

loc_0003B1ED:
    MEM32(eax) = MEM32(eax) - 1;
    edx = MEM32(edi + 0x20A04);
    ebx = MEM32(edi + 0x20A00);
    MEM32(ebx + edx * 4) = esi;
    ebx = MEM32(edi + 0x20A04);
    ebx++;
    ecx--;
    MEM32(edi + 0x20A04) = ebx;
    ebp = ebp - 4;

loc_0003B20F:
    edx = MEM32(eax);
    ecx++;
    ebp = ebp + 4;
    if (CMP_L(ecx, edx)) goto loc_0003B1A0; /* jl: less (signed <) */

loc_0003B219:
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x208;
    ecx--;
    MEM32(esp + 0xC) = ecx;
    if ((ecx != 0)) goto loc_0003B192; /* jne: not equal / not zero */

loc_0003B22D:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
