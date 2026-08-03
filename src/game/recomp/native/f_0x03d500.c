#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003D500
 * Original: 0x0003D500 - 0x0003D614 (276 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D500(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D500:
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0003D4A0(); /* call 0x0003D4A0 */

loc_0003D511:
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x28));
    esi = esi >> 3;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    PUSH32(esp, 0x404);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CFF0A(); /* call 0x001CFF0A */

loc_0003D534:
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ebp = eax;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    SET_LO8(eax, 0); /* xor self */
    ebp = ebp & 0x7FFFFFFF;
    PUSH32(esp, 0); sub_00360A7F(); /* call 0x00360A7F */

loc_0003D560:
    edx = MEM32(0x35FB48);
    eax = 0; /* xor self */
    MEM32(edi) = 0x50001;
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00351770(); /* call 0x00351770 */

loc_0003D581:
    eax = MEM32(0x35FB48);
    ecx = ebx + ebx * 2;
    edx = MEM32(eax + ecx * 8 + 0x1AD4);
    ebp = eax + ecx * 8;
    PUSH32(esp, edx);
    eax = eax + 0x1C28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003568C5(); /* call 0x003568C5 */

loc_0003D59F:
    edx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    edx = edx + 0xF;
    ebp = ebp + 0x1AC0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = eax;
    edx = edx & 0xFFFFFFF0u;
    MEM32(ebp + 8) = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x35FB48);
    eax = MEM32(eax + 0x2C);
    edx = edx + 0x3FFF;
    ecx = ecx | 0x80000000u;
    edx = edx & 0xFFFFC000u;
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00351770(); /* call 0x00351770 */

loc_0003D602:
    ecx = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_0034E0E0(); /* call 0x0034E0E0 */

loc_0003D60D:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
