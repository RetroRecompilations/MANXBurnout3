#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE590
 * Original: 0x001FE590 - 0x001FE61B (139 bytes, 61 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE590:
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebx + 0xC;

loc_001FE5A6:
    esi = MEM32(edx);
    ecx = MEM32(edx + 8);
    eax = esi;
    eax = eax - ecx;
    eax = eax - edx;
    eax = eax - 0xC;
    if (CMP_B(eax, ebx)) goto loc_001FE5D7; /* jb: below (unsigned <) */

loc_001FE5B8:
    edi = ecx + edx;
    eax = ebp + -1;
    eax = ~eax;
    ecx = edi + ebp + 0x17;
    ecx = ecx & eax;
    ecx = ecx - 0xC;
    eax = ebx + ecx;
    if (CMP_A(eax, esi)) goto loc_001FE5D7; /* ja: above (unsigned >) */

loc_001FE5D0:
    edi = edi + 0xC;
    if (CMP_AE(ecx, edi)) goto loc_001FE5EB; /* jae: above or equal (unsigned >=) */

loc_001FE5D7:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0xC);
    edx = esi;
    if (CMP_NE(edx, eax)) goto loc_001FE5A6; /* jne: not equal / not zero */

loc_001FE5E4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FE5EB:
    if (TEST_Z(ecx, ecx)) goto loc_001FE5E4; /* je: equal / zero */

loc_001FE5EF:
    eax = MEM32(edx);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    if (CMP_EQ(eax, MEM32(edx + 0xC))) goto loc_001FE602; /* je: equal / zero */

loc_001FE5FF:
    MEM32(eax + 4) = ecx;

loc_001FE602:
    eax = MEM32(ecx + 4);
    if (CMP_EQ(eax, MEM32(edx + 0xC))) goto loc_001FE60C; /* je: equal / zero */

loc_001FE60A:
    MEM32(eax) = ecx;

loc_001FE60C:
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    eax = ecx + 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
