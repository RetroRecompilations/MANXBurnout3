#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE770
 * Original: 0x001FE770 - 0x001FE7E0 (112 bytes, 52 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE770(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE770:
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = ecx + 0xC;
    if (CMP_EQ(esi, edi)) goto loc_001FE7DD; /* je: equal / zero */

loc_001FE780:
    eax = MEM32(esp + 0x10);

loc_001FE784:
    if (CMP_BE(eax, esi)) goto loc_001FE791; /* jbe: below or equal (unsigned <=) */

loc_001FE788:
    edx = MEM32(ecx + 4);
    edx = edx + esi;
    if (CMP_B(eax, edx)) goto loc_001FE79A; /* jb: below (unsigned <) */

loc_001FE791:
    esi = MEM32(esi);
    if (CMP_NE(esi, edi)) goto loc_001FE784; /* jne: not equal / not zero */

loc_001FE797:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FE79A:
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE620(); /* call 0x001FE620 */

loc_001FE7A1:
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0xC);
    esp = esp + 8;
    if (CMP_NE(ecx, eax)) goto loc_001FE7DD; /* jne: not equal / not zero */

loc_001FE7B0:
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(edx) = eax;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(edi);
    if (CMP_NE(eax, edi)) goto loc_001FE7D4; /* jne: not equal / not zero */

loc_001FE7C5:
    MEM32(esi + 4) = edi;
    MEM32(esi) = eax;
    eax = MEM32(edi);
    MEM32(eax + 4) = esi;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FE7D4:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FE7DA:
    esp = esp + 4;

loc_001FE7DD:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
