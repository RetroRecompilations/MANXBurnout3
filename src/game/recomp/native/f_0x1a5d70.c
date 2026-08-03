#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5D70
 * Original: 0x001A5D70 - 0x001A5DBE (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5D70:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    edx = esi + 0x9C;
    eax = esi + 0x20;

loc_001A5D80:
    MEM32(eax + -32) = ebx;
    MEM32(eax + -16) = ebx;
    MEM32(eax) = ebx;
    MEM8(esi + ecx + 0x110) = LO8(ebx);
    edi = 0; /* xor self */
    MEM32(eax + 0x10) = ebx;
    ebp = edx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = edi;
    ecx++;
    MEM32(ebp + 0x14) = edi;
    eax = eax + 4;
    edx = edx + 0x1C;
    /* cmp ecx, 4 - flags set for next jcc */
    MEM32(ebp + 0x18) = edi;
    if (CMP_L(ecx, 4)) goto loc_001A5D80; /* jl: less (signed <) */

loc_001A5DB7:
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x40) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
