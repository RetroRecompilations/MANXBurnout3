#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226E70
 * Original: 0x00226E70 - 0x00226F3F (207 bytes, 79 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226E70:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    MEM32(esi) = MEM32(esi) + eax;
    edx = 0x40;
    edx = edx - eax;
    ebx = 0; /* xor self */
    /* cmp edx, 9 - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(ecx, 0x80);
    if (CMP_AE(edx, 9)) goto loc_00226EC5; /* jae: above or equal (unsigned >=) */

loc_00226E8C:
    MEM8(eax + esi + 0x1C) = LO8(ecx);
    eax = MEM32(esi + 4);
    eax++;
    if (CMP_AE(eax, 0x40)) goto loc_00226EB4; /* jae: above or equal (unsigned >=) */

loc_00226E99:
    ecx = 0x40;
    ecx = ecx - eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + esi + 0x1C;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_00226EB4:
    eax = esi + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226B90(); /* call 0x00226B90 */

loc_00226EBD:
    esp = esp + 4;
    SET_LO8(ecx, 0); /* xor self */
    MEM32(esi + 4) = ebx;

loc_00226EC5:
    eax = MEM32(esi + 4);
    MEM8(esi + eax + 0x1C) = LO8(ecx);
    eax = MEM32(esi + 4);
    eax++;
    if (CMP_AE(eax, 0x38)) goto loc_00226EF0; /* jae: above or equal (unsigned >=) */

loc_00226ED5:
    ecx = 0x38;
    ecx = ecx - eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + esi + 0x1C;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_00226EF0:
    eax = MEM32(esi);
    ecx = eax;
    edx = eax;
    ecx = ecx >> 0x1D;
    edx = edx >> 0x15;
    MEM8(esi + 0x57) = LO8(ecx);
    ecx = eax;
    MEM8(esi + 0x58) = LO8(edx);
    SET_LO8(edx, MEM8(esi));
    eax = eax >> 5;
    ecx = ecx >> 0xD;
    MEM8(esi + 0x5A) = LO8(eax);
    SET_LO8(edx, LO8(edx) << 3);
    eax = esi + 0x1C;
    PUSH32(esp, esi);
    MEM8(esi + 0x54) = LO8(ebx);
    MEM8(esi + 0x55) = LO8(ebx);
    MEM8(esi + 0x56) = LO8(ebx);
    MEM8(esi + 0x59) = LO8(ecx);
    MEM8(esi + 0x5B) = LO8(edx);
    PUSH32(esp, 0); sub_00226B90(); /* call 0x00226B90 */

loc_00226F2A:
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00226B40(); /* call 0x00226B40 */

loc_00226F38:
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
