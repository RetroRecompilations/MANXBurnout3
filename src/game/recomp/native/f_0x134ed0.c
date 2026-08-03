#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00134ED0
 * Original: 0x00134ED0 - 0x00134F79 (169 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00134ED0:
    edx = MEM32(ecx + 0x88);
    MEM32(eax + 0x1F0) = edx;
    edx = MEM32(ecx + 0x98);
    MEM32(eax + 0xCAC) = edx;
    edx = MEM32(ecx + 0x90);
    MEM32(eax + 0xCA8) = edx;
    edx = MEM32(ecx + 0x94);
    MEM32(eax + 0xCA4) = edx;
    edx = MEM32(ecx + 0x8C);
    MEM32(eax + 0xCA0) = edx;
    edx = MEM32(ecx + 0xA4);
    MEM32(eax + 0xCBC) = edx;
    edx = MEM32(ecx + 0x9C);
    MEM32(eax + 0xCB8) = edx;
    edx = MEM32(ecx + 0xA0);
    MEM32(eax + 0xCB4) = edx;
    ecx = MEM32(ecx + 0xA8);
    SET_LO8(edx, MEM8(eax + 0x1169));
    MEM32(eax + 0xCB0) = ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_00134F78; /* jle: less or equal (signed <=) */

loc_00134F48:
    edx = eax + 0x894;
    PUSH32(esp, esi);
    /* nop */

loc_00134F50:
    if (CMP_GE(ecx, 2)) goto loc_00134F5D; /* jge: greater or equal (signed >=) */

loc_00134F55:
    esi = MEM32(eax + 0xCA0);
    goto loc_00134F63;

loc_00134F5D:
    esi = MEM32(eax + 0xCB0);

loc_00134F63:
    MEM32(edx) = esi;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1169);
    ecx++;
    edx = edx + 0xC0;
    if (CMP_L(ecx, esi)) goto loc_00134F50; /* jl: less (signed <) */

loc_00134F77:
    POP32(esp, esi);

loc_00134F78:
    esp += 4; return; /* ret */

}
