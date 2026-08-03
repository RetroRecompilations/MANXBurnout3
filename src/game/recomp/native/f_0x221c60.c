#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221C60
 * Original: 0x00221C60 - 0x00221D1B (187 bytes, 76 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221C60:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x7C);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00221C83; /* je: equal / zero */

loc_00221C7B:
    eax = MEM32(esi + 0x74);
    if (CMP_EQ(MEM32(esi + 0x78), eax)) goto loc_00221CAB; /* je: equal / zero */

loc_00221C83:
    if (TEST_NZ(edi, edi)) goto loc_00221C93; /* jne: not equal / not zero */

loc_00221C87:
    if (TEST_NZ(ebp, ebp)) goto loc_00221C93; /* jne: not equal / not zero */

loc_00221C8B:
    if (TEST_Z(ebx, ebx)) goto loc_00221D13; /* je: equal / zero */

loc_00221C93:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00221630(); /* call 0x00221630 */

loc_00221C99:
    eax = MEM32(esi + 0x7C);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00221D13; /* je: equal / zero */

loc_00221CA3:
    eax = MEM32(esi + 0x74);
    if (CMP_NE(MEM32(esi + 0x78), eax)) goto loc_00221D13; /* jne: not equal / not zero */

loc_00221CAB:
    ecx = MEM32(esi + 0x7C);
    eax = eax + 0xFFFFFFF4u;
    /* cmp eax, 1 - flags set for next jcc */
    esi = ecx + 0xC;
    if (CMP_GE(eax, 1)) goto loc_00221CC0; /* jge: greater or equal (signed >=) */

loc_00221CB9:
    esi = 0x3830E0;
    goto loc_00221CC4;

loc_00221CC0:
    MEM8(esi + eax) = 0;

loc_00221CC4:
    if (TEST_Z(edi, edi)) goto loc_00221CE7; /* je: equal / zero */

loc_00221CC8:
    ebx = ZX8(MEM8(ecx + 2));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx));
    SET_LO8(edx, MEM8(ecx + 1));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = ZX8(MEM8(ecx + 3));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = MEM32(esp + 0x20);
    MEM32(edi) = edx;

loc_00221CE7:
    if (TEST_Z(ebp, ebp)) goto loc_00221D08; /* je: equal / zero */

loc_00221CEB:
    edi = ZX8(MEM8(ecx + 6));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx + 4));
    SET_LO8(edx, MEM8(ecx + 5));
    ecx = ZX8(MEM8(ecx + 7));
    edx = edx << 8;
    edx = edx | edi;
    edx = edx << 8;
    edx = edx | ecx;
    MEM32(ebp) = edx;

loc_00221D08:
    if (TEST_Z(ebx, ebx)) goto loc_00221D16; /* je: equal / zero */

loc_00221D0C:
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00221D13:
    eax = eax | 0xFFFFFFFFu;

loc_00221D16:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
