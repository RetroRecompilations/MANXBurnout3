#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BF590
 * Original: 0x001BF590 - 0x001BF632 (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF590(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BF590:
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    MEM32(eax + 0x10) = 0;
    eax = MEM32(esi + 0x24);
    if (TEST_NZ(eax, eax)) goto loc_001BF611; /* jne: not equal / not zero */

loc_001BF5BD:
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001BF5CE; /* je: equal / zero */

loc_001BF5C4:
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_001BF590(); /* call 0x001BF590 */

loc_001BF5CC:
    goto loc_001BF5DF;

loc_001BF5CE:
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x18);
    MEM32(edx + 4) = eax;

loc_001BF5DF:
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_001BF5F4; /* je: equal / zero */

loc_001BF5E6:
    ecx = MEM32(esi + 0x20);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x20);
    MEM32(edx + 4) = eax;

loc_001BF5F4:
    edx = MEM32(edi + 0x18);
    eax = edi + 0x18;
    MEM32(esi + 0x18) = eax;
    ecx = esi + 0x14;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) + 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001BF611:
    eax = MEM32(esi + 0x1C);
    /* test eax, eax - flags set for next jcc */
    ecx = esi + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_001BF62D; /* jne: not equal / not zero */

loc_001BF61B:
    edx = MEM32(edi + 0x10);
    eax = edi + 0x10;
    MEM32(ecx) = edx;
    MEM32(esi + 0x20) = eax;
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;

loc_001BF62D:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
