#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220DF0
 * Original: 0x00220DF0 - 0x00220F8E (414 bytes, 124 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00220DF0:
    edx = MEM32(esp + 0xC);
    esp = esp - 0x220;
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_00220E1A; /* je: equal / zero */

loc_00220DFF:
    ecx = MEM32(esp + 0x234);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_00220E1A:
    esi = MEM32(esp + 0x228);
    eax = MEM32(esi + 0x18);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00220E36; /* jne: not equal / not zero */

loc_00220E29:
    eax = 0xFFFFFFF9u;
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

loc_00220E36:
    ecx = MEM32(esp + 0x22C);
    if (CMP_EQ(ecx, 0x636F6E6E)) goto loc_00220E6E; /* je: equal / zero */

loc_00220E45:
    if (CMP_NE(ecx, 0x62696E64)) goto loc_00220E66; /* jne: not equal / not zero */

loc_00220E4D:
    ecx = esp + 0x234;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00339374(); /* call 0x00339374 */

loc_00220E5C:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

loc_00220E66:
    if (CMP_NE(ecx, 0x70656572)) goto loc_00220E87; /* jne: not equal / not zero */

loc_00220E6E:
    ecx = esp + 0x234;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0033937F(); /* call 0x0033937F */

loc_00220E7D:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

loc_00220E87:
    if (CMP_NE(ecx, 0x73746174)) goto loc_00220F83; /* jne: not equal / not zero */

loc_00220E93:
    SET_LO8(ecx, MEM8(esi + 0x14));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00220F02; /* jne: not equal / not zero */

loc_00220E9A:
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 0x128) = eax;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x128;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(esp + 0x134) = 1;
    MEM32(esp + 0x30) = 1;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_003393AB(); /* call 0x003393AB */

loc_00220EE3:
    if (TEST_Z(eax, eax)) goto loc_00220F02; /* je: equal / zero */

loc_00220EE7:
    eax = MEM32(esp + 0x1C);
    if (CMP_BE(eax & eax, 0)) goto loc_00220EF3; /* jbe: below or equal (unsigned <=) */

loc_00220EEF:
    MEM8(esi + 0x14) = 0xFF;

loc_00220EF3:
    eax = MEM32(esp + 0x120);
    if (CMP_BE(eax & eax, 0)) goto loc_00220F02; /* jbe: below or equal (unsigned <=) */

loc_00220EFE:
    MEM8(esi + 0x14) = 1;

loc_00220F02:
    SET_LO8(eax, MEM8(esi + 0x14));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00220F71; /* jle: less or equal (signed <=) */

loc_00220F09:
    ecx = MEM32(esi + 0x18);
    edx = esp + 0x234;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x240) = 0x10;
    PUSH32(esp, 0); sub_0033937F(); /* call 0x0033937F */

loc_00220F2A:
    if (CMP_GE(eax & eax, 0)) goto loc_00220F68; /* jge: greater or equal (signed >=) */

loc_00220F2E:
    PUSH32(esp, 0); sub_003398C4(); /* call 0x003398C4 */

loc_00220F33:
    if (CMP_EQ(eax, 0x2733)) goto loc_00220F71; /* je: equal / zero */

loc_00220F3A:
    if (CMP_EQ(eax, 0x2746)) goto loc_00220F71; /* je: equal / zero */

loc_00220F41:
    if (CMP_EQ(eax, 0x2743)) goto loc_00220F71; /* je: equal / zero */

loc_00220F48:
    if (CMP_EQ(eax, 0x2751)) goto loc_00220F71; /* je: equal / zero */

loc_00220F4F:
    if (CMP_EQ(eax, 0x2749)) goto loc_00220F6D; /* je: equal / zero */

loc_00220F56:
    SET_LO8(ecx, MEM8(esi + 0x14));
    eax = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(LO8(ecx) & LO8(ecx), 0)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

loc_00220F68:
    if (CMP_NE(eax, 0xFFFFFFFEu)) goto loc_00220F71; /* jne: not equal / not zero */

loc_00220F6D:
    MEM8(esi + 0x14) = 0xFF;

loc_00220F71:
    SET_LO8(ecx, MEM8(esi + 0x14));
    eax = 0; /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(LO8(ecx) & LO8(ecx), 0)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

loc_00220F83:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

}
