#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221190
 * Original: 0x00221190 - 0x0022124D (189 bytes, 74 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221190(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221190:
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    esp = esp - 0x24;
    if (CMP_EQ(ecx, eax)) goto loc_002211A6; /* je: equal / zero */

loc_0022119F:
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_002211A6:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    /* cmp MEM16(esi), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM16(esi), 2)) goto loc_0022122E; /* jne: not equal / not zero */

loc_002211B2:
    eax = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    ecx = ecx >> 2;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_LO8(eax, 0); /* xor self */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(ebx + 7) = LO8(eax);
    MEM8(ebx + 6) = LO8(eax);
    MEM8(ebx + 5) = LO8(eax);
    MEM8(ebx + 4) = LO8(eax);
    PUSH32(esp, 0); sub_0033932E(); /* call 0x0033932E */

loc_002211DF:
    if (TEST_Z(LO8(eax), 0x60)) goto loc_00221222; /* je: equal / zero */

loc_002211E3:
    edx = ZX8(MEM8(esp + 0xD));
    ecx = ZX8(MEM8(esp + 0xE));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esp + 0xC));
    eax = eax | edx;
    edx = ZX8(MEM8(esp + 0xF));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    MEM8(ebx + 7) = LO8(eax);
    eax = eax >> 8;
    MEM8(ebx + 6) = LO8(eax);
    eax = eax >> 8;
    MEM8(ebx + 5) = LO8(eax);
    eax = eax >> 8;
    MEM8(ebx + 4) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00221222:
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0022122E:
    edi = MEM32(esp + 0x30);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}
