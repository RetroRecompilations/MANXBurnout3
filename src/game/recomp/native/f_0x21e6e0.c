#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021E6E0
 * Original: 0x0021E6E0 - 0x0021E8B1 (465 bytes, 147 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E6E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0021E6E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0x3830E0);
    ecx = 0x42;
    edi = esp + 0x14;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 0x20);
    PUSH32(esp, 0xFF);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021E71E:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021E727:
    ecx = esp + 0x128;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021E736:
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0021E740; /* je: equal / zero */

loc_0021E73D:
    MEM8(eax) = 0;

loc_0021E740:
    edx = esp + 0x118;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021E74F:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021E759; /* je: equal / zero */

loc_0021E756:
    MEM8(eax) = 0;

loc_0021E759:
    eax = esp + 0x118;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021E768:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021E772; /* je: equal / zero */

loc_0021E76F:
    MEM8(eax) = 0;

loc_0021E772:
    eax = 0; /* xor self */

loc_0021E774:
    SET_LO8(ecx, MEM8(esp + eax + 0x118));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021E774; /* jne: not equal / not zero */

loc_0021E784:
    PUSH32(esp, 0x35BE9C);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3704B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021E7A1:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021E7AA:
    SET_LO8(ebx, MEM8(esp + 0x128));
    esp = esp + 0x10;
    if (CMP_NE(LO8(ebx), 0x44)) goto loc_0021E7D8; /* jne: not equal / not zero */

loc_0021E7B9:
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0xC0004);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021D9F0(); /* call 0x0021D9F0 */

loc_0021E7CC:
    esp = esp + 0xC;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0021E7D8:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B1444);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021E7E5:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DF0(); /* call 0x00213DF0 */

loc_0021E7EE:
    edx = MEM32(esp + 0x110);
    edi = MEM32(ebp + 8);
    ecx = eax;
    ecx = ecx & 0x100000;
    ecx = ecx << 4;
    eax = eax & 0xC0000;
    ecx = ecx | eax;
    edx = edx | ecx;
    esp = esp + 8;
    /* cmp LO8(ebx), 0x58 - flags set for next jcc */
    MEM32(esp + 0x108) = edx;
    if (CMP_EQ(LO8(ebx), 0x58)) goto loc_0021E820; /* je: equal / zero */

loc_0021E81B:
    if (CMP_NE(LO8(ebx), 0x41)) goto loc_0021E891; /* jne: not equal / not zero */

loc_0021E820:
    eax = MEM32(edi + 0x8C4);
    if (TEST_Z(eax, eax)) goto loc_0021E891; /* je: equal / zero */

loc_0021E82A:
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00222080(); /* call 0x00222080 */

loc_0021E835:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021E891; /* je: equal / zero */

loc_0021E83C:
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C180(); /* call 0x0021C180 */

loc_0021E849:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021E891; /* je: equal / zero */

loc_0021E850:
    ecx = MEM32(eax + 0xF8);
    /* test ecx, 0x80000 - flags set for next jcc */
    edx = MEM32(esp + 0x108);
    if (CMP_BE(ecx & 0x80000, 0)) goto loc_0021E86D; /* jbe: below or equal (unsigned <=) */

loc_0021E865:
    if (TEST_Z(edx, 0x80000)) goto loc_0021E87D; /* je: equal / zero */

loc_0021E86D:
    if (CMP_BE(ecx & 0x40000, 0)) goto loc_0021E891; /* jbe: below or equal (unsigned <=) */

loc_0021E875:
    if (TEST_NZ(edx, 0x40000)) goto loc_0021E891; /* jne: not equal / not zero */

loc_0021E87D:
    edx = edx | 4;
    MEM32(esp + 0x108) = edx;
    MEM32(eax + 0xF8) = MEM32(eax + 0xF8) & 0xFFF3FFFFu;

loc_0021E891:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021D960(); /* call 0x0021D960 */

loc_0021E89C:
    esp = esp + 8;
    /* test eax, eax - flags set for next jcc */
    eax = 0xFFFFFFFEu;
    if (TEST_Z(eax, eax)) goto loc_0021E8AA; /* je: equal / zero */

loc_0021E8A8:
    eax = esi;

loc_0021E8AA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
