#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001537C0
 * Original: 0x001537C0 - 0x0015388D (205 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001537C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001537C0:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001537CF; /* jne: not equal / not zero */

loc_001537C6:
    ebx = edi;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_001537CD:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001537CF:
    SET_LO8(ecx, MEM8(edi + 0x538));
    ebx = 0; /* xor self */
    /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEM8(edi + 0x566) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0015387A; /* je: equal / zero */

loc_001537E5:
    /* cmp eax, 0x15 - flags set for next jcc */
    edx = MEM32(edi + 0x530);
    ecx = eax + eax * 2;
    ecx = edx + ecx * 8;
    MEM32(edi + 0x554) = eax;
    MEM32(edi + 0x540) = ecx;
    MEM32(edi + 0x550) = ebx;
    if (CMP_G(eax, 0x15)) goto loc_00153815; /* jg: greater (signed >) */

loc_00153808:
    eax = MEM32(0x3EC444);
    MEM32(edi + 0x55C) = ebx;
    goto loc_00153824;

loc_00153815:
    eax = MEM32(0x3EC448);
    MEM32(edi + 0x55C) = 1;

loc_00153824:
    edx = MEM32(0x3EC44C);
    ecx = MEM32(0x3EC438);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x3EC43C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x4C4;
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0015384A:
    eax = MEM32(edi + 0x54C);
    esp = esp + 0x18;
    if (CMP_NE(eax, 4)) goto loc_00153869; /* jne: not equal / not zero */

loc_00153858:
    eax = edi;
    MEM32(edi + 0x54C) = 5;
    PUSH32(esp, 0); sub_001530D0(); /* call 0x001530D0 */

loc_00153869:
    /* cmp MEM8(0x4AE1D5), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(MEM8(0x4AE1D5), LO8(ebx))) ? 1 : 0); /* setle */
    MEM8(edi + 0x565) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015387A:
    PUSH32(esp, esi);
    esi = edi + 8;
    PUSH32(esp, 0); sub_00155D60(); /* call 0x00155D60 */

loc_00153883:
    POP32(esp, esi);
    MEM8(edi + 0x565) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
