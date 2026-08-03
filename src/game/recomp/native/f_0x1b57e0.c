#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B57E0
 * Original: 0x001B57E0 - 0x001B5871 (145 bytes, 53 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B57E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B57E0:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x362B1C);
    PUSH32(esp, 0); sub_00363DB1(); /* call 0x00363DB1 */

loc_001B57FA:
    esi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    esi = esi + 4;

loc_001B5803:
    eax = MEM32(esp + 0xC);
    edi = 1;
    ecx = ebx;
    edi = edi << LO8(ecx);
    if (TEST_Z(edi, eax)) goto loc_001B582D; /* je: equal / zero */

loc_001B5814:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001B5826; /* je: equal / zero */

loc_001B581A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00363C7A(); /* call 0x00363C7A */

loc_001B5820:
    MEM32(esi) = 0;

loc_001B5826:
    MEM32(esi + -4) = 0;

loc_001B582D:
    if (TEST_Z(MEM32(esp + 0x10), edi)) goto loc_001B584F; /* je: equal / zero */

loc_001B5833:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x362B1C);
    PUSH32(esp, 0); sub_00363C24(); /* call 0x00363C24 */

loc_001B5842:
    /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_001B584F; /* je: equal / zero */

loc_001B5848:
    MEM32(esi + -4) = 2;

loc_001B584F:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001B585F; /* je: equal / zero */

loc_001B5855:
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00363C86(); /* call 0x00363C86 */

loc_001B585F:
    ebx++;
    esi = esi + 0x20;
    if (CMP_L(ebx, 4)) goto loc_001B5803; /* jl: less (signed <) */

loc_001B5868:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}
