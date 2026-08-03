#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE900
 * Original: 0x001FE900 - 0x001FEA1A (282 bytes, 109 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE900:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ebp + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = 0; /* xor self */
    /* cmp edi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(edi, esi)) goto loc_001FE9B8; /* je: equal / zero */

loc_001FE91F:
    /* nop */

loc_001FE920:
    if (TEST_NZ(eax, eax)) goto loc_001FEA13; /* jne: not equal / not zero */

loc_001FE928:
    ecx = MEM32(ebp + 4);
    esi = 0; /* xor self */
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(ebx & ebx, 0)) goto loc_001FE9A7; /* jbe: below or equal (unsigned <=) */

loc_001FE935:
    goto loc_001FE940;

    /* nop */
    edi = edi;

loc_001FE940:
    SET_LO8(ebx, MEM8(esi + edi + 8));
    if (CMP_EQ(LO8(ebx), 0xFF)) (void)0; /* goto loc_001FEA19 - dead code, label not in function */ /* je: equal / zero */

loc_001FE94D:
    ecx = 0; /* xor self */
    /* nop */

loc_001FE950:
    edx = MEM32(esp + 0x18);
    if (CMP_BE(edx & edx, 0)) goto loc_001FE99A; /* jbe: below or equal (unsigned <=) */

loc_001FE958:
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    if (TEST_Z(LO8(ebx), LO8(edx))) goto loc_001FE974; /* je: equal / zero */

loc_001FE963:
    edx = MEM32(esp + 0x18);
    ecx++;
    edx--;
    /* cmp ecx, 8 - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_B(ecx, 8)) goto loc_001FE950; /* jb: below (unsigned <) */

loc_001FE972:
    goto loc_001FE99A;

loc_001FE974:
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(esi + edi + 8) = LO8(ebx);
    edx = MEM32(ebp + 0xC);
    ebx = MEM32(esp + 0x10);
    ecx = ecx + esi * 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp));
    eax = edx + edi;
    edx--;
    eax = eax + ebx + 7;
    edx = ~edx;
    eax = eax & edx;
    eax = eax + ecx;
    if (TEST_NZ(eax, eax)) goto loc_001FE9A3; /* jne: not equal / not zero */

loc_001FE99A:
    ecx = MEM32(esp + 0x10);
    esi++;
    if (CMP_B(esi, ecx)) goto loc_001FE940; /* jb: below (unsigned <) */

loc_001FE9A3:
    ebx = MEM32(esp + 0x10);

loc_001FE9A7:
    edi = MEM32(edi);
    esi = ebp + 0x10;
    if (CMP_NE(edi, esi)) goto loc_001FE920; /* jne: not equal / not zero */

loc_001FE9B4:
    if (TEST_NZ(eax, eax)) goto loc_001FEA13; /* jne: not equal / not zero */

loc_001FE9B8:
    eax = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp));
    edi = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x1C);
    eax = eax + edi;
    PUSH32(esp, edx);
    ecx = eax + ebx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FE9D3:
    edx = eax;
    esp = esp + 8;
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_001FEA13; /* je: equal / zero */

loc_001FE9DE:
    ecx = ebx;
    ecx = ecx >> 2;
    edi = edx + 8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edx;
    MEM32(esi) = edx;
    MEM8(edx + 8) = 0x80;
    ebp = MEM32(ebp + 0xC);
    edx = edx + ebp;
    ebp--;
    eax = edx + eax + 7;
    ebp = ~ebp;
    eax = eax & ebp;

loc_001FEA13:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
