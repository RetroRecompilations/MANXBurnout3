#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003D9E0
 * Original: 0x0003D9E0 - 0x0003DA90 (176 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D9E0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0003D9E0:
    esp = esp - 0x18;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0002F330(); /* call 0x0002F330 */

loc_0003D9EC:
    if (TEST_NZ(edi, edi)) goto loc_0003DA3C; /* jne: not equal / not zero */

loc_0003D9F0:
    eax = MEM32(esi + 0x9B0);
    ecx = MEM32(esi + 0x9A8);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp) = eax;
    eax = MEM32(esi + 0x9B8);
    MEM32(esp + 4) = eax;
    edx = eax + eax;
    eax = MEM32(esi + 0x3C0);
    MEM32(esp + 8) = ecx;
    ecx = esp;
    eax = eax - edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0034D530(); /* call 0x0034D530 */

loc_0003DA3C:
    eax = MEM32(esi + 0x3B0);
    edx = MEM32(eax + 0x58);
    ecx = MEM32(edx + 0x68);
    MEM32(esi + 0x9A0) = ecx;
    edx = MEM32(eax + 0x58);
    ecx = MEM32(edx + 0x6C);
    MEM32(esi + 0x9A4) = ecx;
    MEM32(esi + 0x990) = 0;
    MEM32(esi + 0x994) = 0;
    edx = MEM32(eax + 0x78);
    MEM32(esi + 0x998) = edx;
    eax = MEM32(eax + 0x7C);
    edx = esi + 0x500;
    PUSH32(esp, esi);
    MEM32(esi + 0x99C) = eax;
    PUSH32(esp, 0); sub_00040660(); /* call 0x00040660 */

loc_0003DA8C:
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
