#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001705F0
 * Original: 0x001705F0 - 0x00170696 (166 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001705F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001705F0:
    edx = MEM32(0x3F72C4);
    ecx = ecx | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    if (CMP_NE(edx, ecx)) goto loc_00170604; /* jne: not equal / not zero */

loc_001705FF:
    MEM32(0x3F72C4) = eax;

loc_00170604:
    if (CMP_NE(MEM32(0x3F72D0), ecx)) goto loc_00170611; /* jne: not equal / not zero */

loc_0017060C:
    MEM32(0x3F72D0) = eax;

loc_00170611:
    if (CMP_NE(MEM32(0x3F72C8), ecx)) goto loc_0017061E; /* jne: not equal / not zero */

loc_00170619:
    MEM32(0x3F72C8) = eax;

loc_0017061E:
    if (CMP_NE(MEM32(0x3F72CC), ecx)) goto loc_0017062B; /* jne: not equal / not zero */

loc_00170626:
    MEM32(0x3F72CC) = eax;

loc_0017062B:
    /* cmp MEM32(0x3F72D4), ecx - flags set for next jcc */
    MEM32(esi + 0x2464) = eax;
    if (CMP_NE(MEM32(0x3F72D4), ecx)) goto loc_0017063E; /* jne: not equal / not zero */

loc_00170639:
    MEM32(0x3F72D4) = eax;

loc_0017063E:
    PUSH32(esp, edi);
    edi = esi + 0x1A00;
    PUSH32(esp, 0); sub_0016A9F0(); /* call 0x0016A9F0 */

loc_0017064A:
    eax = esi;
    MEM32(esi + 0x21A0) = esi;
    MEM32(esi + 0x2160) = esi;
    MEM32(esi + 0x2164) = edi;
    MEM32(edi) = edi;
    MEM32(esi + 0x1A04) = esi;
    MEM32(esi + 0x1A08) = edi;
    MEM32(esi + 0x2150) = edi;
    MEM32(esi + 0x2154) = esi;
    MEM32(esi + 0x2158) = edi;
    PUSH32(esp, 0); sub_0018D020(); /* call 0x0018D020 */

loc_00170683:
    eax = 1;
    MEM32(esi + 0x1920) = eax;
    MEM32(esi + 0x2464) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
