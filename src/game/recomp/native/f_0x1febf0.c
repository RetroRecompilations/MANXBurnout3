#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FEBF0
 * Original: 0x001FEBF0 - 0x001FED0D (285 bytes, 100 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEBF0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(edi, edi)) goto loc_001FEBFF; /* jne: not equal / not zero */

loc_001FEBFA:
    edi = 1;

loc_001FEBFF:
    ebx = MEM32(esp + 0x1C);
    if (TEST_NZ(ebx, ebx)) goto loc_001FEC3E; /* jne: not equal / not zero */

loc_001FEC07:
    eax = MEM32(0x41C5B8);
    if (TEST_Z(eax, eax)) goto loc_001FEC1D; /* je: equal / zero */

loc_001FEC10:
    PUSH32(esp, 0x30800);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE900(); /* call 0x001FE900 */

loc_001FEC1B:
    goto loc_001FEC29;

loc_001FEC1D:
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FEC29:
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_001FEC35; /* jne: not equal / not zero */

loc_001FEC32:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FEC35:
    MEM32(ebx + 0x18) = 2;
    goto loc_001FEC45;

loc_001FEC3E:
    MEM32(ebx + 0x18) = 3;

loc_001FEC45:
    ecx = MEM32(esp + 0xC);
    eax = ecx + edi + -1;
    ecx = MEM32(esp + 0x10);
    edx = edi + -1;
    PUSH32(esp, ebp);
    edx = ~edx;
    eax = eax & edx;
    edx = MEM32(esp + 0x1C);
    ebp = ecx + 7;
    PUSH32(esp, esi);
    ebp = ebp >> 3;
    /* test edx, edx - flags set for next jcc */
    esi = ebx + 0x10;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 8) = ebp;
    MEM32(esi) = esi;
    MEM32(ebx + 0x14) = esi;
    if (CMP_BE(edx & edx, 0)) goto loc_001FECDE; /* jbe: below or equal (unsigned <=) */

loc_001FEC7B:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + ebp;
    eax = eax + edi + 8;
    MEM32(esp + 0x1C) = eax;
    goto loc_001FEC90;

    /* nop */

loc_001FEC90:
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FEC9F:
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_001FED05; /* je: equal / zero */

loc_001FECA8:
    MEM32(edx + 4) = 0;
    MEM32(edx) = 0;
    eax = MEM32(esi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edx;
    MEM32(esi) = edx;
    ecx = ebp;
    edi = edx + 8;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_001FEC90; /* jne: not equal / not zero */

loc_001FECDE:
    ecx = MEM32(0x41C588);
    eax = ebx + 0x1C;
    MEM32(eax) = ecx;
    MEM32(ebx + 0x20) = 0x41C588;
    edx = MEM32(0x41C588);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 4) = eax;
    MEM32(0x41C588) = eax;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FED05:
    edi = ebx;
    PUSH32(esp, 0); sub_001FEB10(); /* call 0x001FEB10 */

loc_001FED0C:
    POP32(esp, esi);

}
