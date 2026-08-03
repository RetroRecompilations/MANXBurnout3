#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00227600
 * Original: 0x00227600 - 0x0022769B (155 bytes, 54 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227600(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227600:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00227607:
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0x400);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0022763F; /* jle: less or equal (signed <=) */

loc_00227617:
    goto loc_00227620;

    /* nop */

loc_00227620:
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    /* test eax, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, edi)) ? 1 : 0); /* setne */
    MEM8(esi + edx) = LO8(ecx);
    ecx = MEM32(edx + 0x400);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_00227620; /* jl: less (signed <) */

loc_0022763F:
    ecx = MEM32(edx + 0x400);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0022766C; /* jle: less or equal (signed <=) */

loc_0022764B:
    goto loc_00227650;

    /* nop */

loc_00227650:
    SET_LO8(ecx, MEM8(esi + edx));

loc_00227653:
    eax++;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10DCD);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    if ((LO8(ecx) == 0)) goto loc_00227653; /* je: equal / zero */

loc_0022765E:
    MEM8(esi + edx) = LO8(ecx);
    ecx = MEM32(edx + 0x400);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_00227650; /* jl: less (signed <) */

loc_0022766C:
    eax = MEM32(edx + 0x400);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    eax = eax - ecx;
    MEM8(edx) = 0;
    MEM8(edx + 1) = 2;
    edi = eax + edx;
    edx = ecx;
    ecx = ecx >> 2;
    MEM8(edi + -1) = 0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
