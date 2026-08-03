#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE820
 * Original: 0x001FE820 - 0x001FE8FD (221 bytes, 82 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE820:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(edi, edi)) goto loc_001FE84B; /* jne: not equal / not zero */

loc_001FE829:
    PUSH32(esp, 0x30800);
    PUSH32(esp, 0x41C560);
    PUSH32(esp, 0); sub_001FE900(); /* call 0x001FE900 */

loc_001FE838:
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_001FE843; /* jne: not equal / not zero */

loc_001FE841:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001FE843:
    MEM32(edi) = 0;
    goto loc_001FE851;

loc_001FE84B:
    MEM32(edi) = 1;

loc_001FE851:
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    ecx = ecx + 0xC;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    /* test ebp, ebp - flags set for next jcc */
    edx = ecx + eax + 0x1C;
    MEM32(edi + 8) = eax;
    PUSH32(esp, esi);
    MEM32(edi + 4) = edx;
    esi = edi + 0xC;
    MEM32(esi) = esi;
    MEM32(edi + 0x10) = esi;
    ecx = MEM32(0x41C558);
    eax = edi + 0x14;
    MEM32(eax) = ecx;
    MEM32(edi + 0x18) = 0x41C558;
    edx = MEM32(0x41C558);
    MEM32(edx + 4) = eax;
    MEM32(0x41C558) = eax;
    if (CMP_BE(ebp & ebp, 0)) goto loc_001FE8E6; /* jbe: below or equal (unsigned <=) */

loc_001FE89E:
    edi = edi;

loc_001FE8A0:
    ebx = MEM32(edi + 4);
    PUSH32(esp, 0x30800);
    PUSH32(esp, ebx);
    ebp--;
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FE8AF:
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_001FE8ED; /* je: equal / zero */

loc_001FE8B8:
    ecx = eax + 0x10;
    MEM32(eax + 8) = ecx;
    ebx = ebx + eax;
    /* cmp ebp, edx - flags set for next jcc */
    MEM32(eax + 0xC) = ebx;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 8);
    ebx = MEM32(eax + 0xC);
    MEM32(ecx) = ebx;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    MEM32(esi) = eax;
    if (CMP_A(ebp, edx)) goto loc_001FE8A0; /* ja: above (unsigned >) */

loc_001FE8E6:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001FE8ED:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FE6B0(); /* call 0x001FE6B0 */

loc_001FE8F3:
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
