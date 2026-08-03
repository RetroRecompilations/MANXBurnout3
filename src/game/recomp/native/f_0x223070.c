#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00223070
 * Original: 0x00223070 - 0x00223233 (451 bytes, 145 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223070:
    ecx = MEM32(esp + 8);
    esp = esp - 0x64;
    /* cmp ecx, 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x120);
    if (CMP_L(ecx, 1)) goto loc_0022322B; /* jl: less (signed <) */

loc_00223087:
    if (CMP_G(ecx, 0x3E80)) goto loc_0022322B; /* jg: greater (signed >) */

loc_00223093:
    eax = MEM32(ebp + 0x812C);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 4;
    edx = ebx;
    MEM32(esp + 8) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_002230AE; /* jle: less or equal (signed <=) */

loc_002230A9:
    ebx = 0x14;

loc_002230AE:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    eax = ebx + ebp;
    PUSH32(esp, edi);
    edi = eax + 8;
    MEM32(esp + 0x1C) = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x7C);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x81B0);
    MEM32(esp + 0x18) = ebx;
    ebx = ebx + eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_002230F4; /* jle: less or equal (signed <=) */

loc_002230E0:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ecx;
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esp + 0x10);
    goto loc_002230FC;

loc_002230F4:
    MEM32(esp + 0x7C) = 0;

loc_002230FC:
    ecx = MEM32(esp + 0x7C);
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebx + ebp + 8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0x812C);
    ecx = esi;
    ebx = ebx + ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_002231B5; /* jle: less or equal (signed <=) */

loc_00223126:
    SET_LO8(ecx, MEM8(ebp + 0x400B));
    MEM8(esp + 0x14) = LO8(ecx);
    SET_LO8(edx, MEM8(ebp + 0x400A));
    MEM8(esp + 0x15) = LO8(edx);
    SET_LO8(eax, MEM8(ebp + 0x4009));
    MEM8(esp + 0x16) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x4008));
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ecx);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_00223158:
    eax = MEM32(ebp + 0x812C);
    PUSH32(esp, eax);
    ecx = ebp + 0x8130;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_00223170:
    edi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    eax = ebx;
    eax = eax - edi;
    PUSH32(esp, eax);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_0022318B:
    PUSH32(esp, 4);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_0022319C:
    PUSH32(esp, 0x10);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_002231AC:
    edx = MEM32(esp + 0x44);
    esp = esp + 0x34;
    ecx = esi;

loc_002231B5:
    esi = MEM32(ebp + 0x812C);
    POP32(esp, edi);
    /* test esi, esi - flags set for next jcc */
    eax = ebx + -4;
    POP32(esp, esi);
    if (CMP_LE(esi & esi, 0)) goto loc_002231E3; /* jle: less or equal (signed <=) */

loc_002231C4:
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    edx = ebp + 0x87BE;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00226AD0(); /* call 0x00226AD0 */

loc_002231D5:
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x80);
    esp = esp + 0xC;

loc_002231E3:
    if (CMP_LE(ecx & ecx, 0)) goto loc_002231F6; /* jle: less or equal (signed <=) */

loc_002231E7:
    MEM32(esp + 8) = 3;
    edx = MEM32(esp + 8);
    MEM8(ebp + 0xB) = LO8(ecx);

loc_002231F6:
    edx--;
    eax = ebx + -4;
    MEM8(edx + ebp + 8) = LO8(eax);
    edx--;
    eax = (uint32_t)((int32_t)eax >> 8);
    /* test ecx, ecx - flags set for next jcc */
    MEM8(edx + ebp + 8) = LO8(eax);
    if (TEST_NZ(ecx, ecx)) goto loc_00223210; /* jne: not equal / not zero */

loc_0022320A:
    SET_LO8(eax, LO8(eax) | 0x80);
    MEM8(edx + ebp + 8) = LO8(eax);

loc_00223210:
    eax = MEM32(ebp + 0x4008);
    MEM32(ebp + 4) = ebx;
    eax++;
    MEM32(ebp + 0x4008) = eax;
    POP32(esp, ebx);
    MEM32(ebp) = edx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_0022322B:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}
