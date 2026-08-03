#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A2770
 * Original: 0x001A2770 - 0x001A2853 (227 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2770(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2770:
    eax = MEM32(esi);
    ecx = ZX8(MEM8(eax + 0xB6));
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    PUSH32(esp, edi);
    edx = edx - ecx;
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A27BE; /* jle: less or equal (signed <=) */

loc_001A2789:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* nop */

loc_001A2790:
    eax = MEM32(eax + 0x54);
    ecx = MEM32(eax + ebx + 4);
    edx = MEM32(eax + ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A2860(); /* call 0x001A2860 */

loc_001A27A3:
    eax = MEM32(esi);
    ecx = ZX8(MEM8(eax + 0xB6));
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    edi++;
    edx = edx - ecx;
    ebx = ebx + 0x18;
    if (CMP_L(edi, edx)) goto loc_001A2790; /* jl: less (signed <) */

loc_001A27BD:
    POP32(esp, ebx);

loc_001A27BE:
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xB6));
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001A2851; /* jbe: below or equal (unsigned <=) */

loc_001A27CE:
    if (TEST_Z(MEM8(eax + 0xB5), 1)) goto loc_001A27E6; /* je: equal / zero */

loc_001A27D7:
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A2860(); /* call 0x001A2860 */

loc_001A27E5:
    edi++;

loc_001A27E6:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 2)) goto loc_001A2801; /* je: equal / zero */

loc_001A27F1:
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A2860(); /* call 0x001A2860 */

loc_001A2800:
    edi++;

loc_001A2801:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 4)) goto loc_001A281C; /* je: equal / zero */

loc_001A280C:
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A2860(); /* call 0x001A2860 */

loc_001A281B:
    edi++;

loc_001A281C:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 8)) goto loc_001A2837; /* je: equal / zero */

loc_001A2827:
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A2860(); /* call 0x001A2860 */

loc_001A2836:
    edi++;

loc_001A2837:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 0x10)) goto loc_001A2851; /* je: equal / zero */

loc_001A2842:
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A2860(); /* call 0x001A2860 */

loc_001A2851:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
