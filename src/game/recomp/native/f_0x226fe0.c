#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226FE0
 * Original: 0x00226FE0 - 0x00227151 (369 bytes, 125 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226FE0:
    esp = esp - 0x414;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x420);
    PUSH32(esp, ebp);
    ecx = ebx + ebx;
    MEM32(esp + 0x18) = ecx;
    edx = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    esi = esp + 0x24;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = ebx;
    eax = eax << 4;
    ecx = eax + -1;
    /* test ecx, ecx - flags set for next jcc */
    ebp = esp + 0x224;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ecx;
    if (TEST_S(ecx, ecx)) goto loc_0022712D; /* jl: less (signed <) */

loc_0022702D:
    eax = eax - ecx;
    eax--;
    MEM32(esp + 0x18) = eax;

loc_00227034:
    eax = MEM32(esp + 0x20);
    eax = eax + esi;
    edi = 0; /* xor self */
    /* test ebx, ebx - flags set for next jcc */
    ecx = eax;
    edx = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00227082; /* jle: less or equal (signed <=) */

loc_00227044:
    MEM32(esp + 0x1C) = ebx;
    goto loc_00227050;

    /* nop */

loc_00227050:
    ebp = ZX16(MEM16(ecx + -2));
    ebx = ZX16(MEM16(eax + -2));
    ecx = ecx - 2;
    eax = eax - 2;
    ebp = ebp + edi;
    edi = ebx + ebp;
    ebx = MEM32(esp + 0x1C);
    edx = edx - 2;
    MEM16(edx) = LO16(edi);
    edi = edi >> 0x10;
    ebx--;
    MEM32(esp + 0x1C) = ebx;
    if ((ebx != 0)) goto loc_00227050; /* jne: not equal / not zero */

loc_00227077:
    ebx = MEM32(esp + 0x42C);
    ebp = MEM32(esp + 0x14);

loc_00227082:
    eax = MEM32(esp + 0x438);
    PUSH32(esp, ebp);
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00226F90(); /* call 0x00226F90 */

loc_00227093:
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0022709E; /* je: equal / zero */

loc_0022709A:
    if (TEST_Z(edi, edi)) goto loc_002270A8; /* je: equal / zero */

loc_0022709E:
    eax = esi;
    esi = ebp;
    ebp = eax;
    MEM32(esp + 0x14) = ebp;

loc_002270A8:
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 0x8000000Fu;
    if (((int32_t)ecx >= 0)) goto loc_002270B9; /* jns: not sign (positive) */

loc_002270B4:
    ecx--;
    ecx = ecx | 0xFFFFFFF0u;
    ecx++;

loc_002270B9:
    eax = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 1;
    edx = edx & 0xF;
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x430);
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 4);
    if (TEST_Z(MEM16(ecx + eax * 2), LO16(edi))) goto loc_00227113; /* je: equal / zero */

loc_002270DA:
    edx = MEM32(esp + 0x434);
    PUSH32(esp, esi);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_00226F40(); /* call 0x00226F40 */

loc_002270EB:
    edi = eax;
    eax = MEM32(esp + 0x43C);
    PUSH32(esp, ebp);
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00226F90(); /* call 0x00226F90 */

loc_002270FE:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00227109; /* je: equal / zero */

loc_00227105:
    if (TEST_Z(edi, edi)) goto loc_00227113; /* je: equal / zero */

loc_00227109:
    eax = esi;
    esi = ebp;
    ebp = eax;
    MEM32(esp + 0x14) = ebp;

loc_00227113:
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    eax--;
    edx++;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_GE(eax & eax, 0)) goto loc_00227034; /* jge: greater or equal (signed >=) */

loc_0022712D:
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x428);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x414;
    esp += 4; return; /* ret */

}
