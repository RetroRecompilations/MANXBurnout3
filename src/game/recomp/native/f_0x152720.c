#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152720
 * Original: 0x00152720 - 0x001527F6 (214 bytes, 54 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152720(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_00152720:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    eax = MEM32(esi + 0x1A4);
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = MEM32(eax + 0x64B38C);
    ecx = MEM32(eax + 0x204);
    ecx = ecx + 0x30;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 8);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x11C);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0020BC00(); /* call 0x0020BC00 */

loc_00152794:
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(esi + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001527A7:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esi + 0x190);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0020BC00(); /* call 0x0020BC00 */

loc_001527DC:
    ecx = MEM32(esi + 0x164);
    edx = MEM32(esi + 0x190);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001527EF:
    esp = esp + 0x20;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
