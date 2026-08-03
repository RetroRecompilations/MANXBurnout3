#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226AD0
 * Original: 0x00226AD0 - 0x00226B38 (104 bytes, 42 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226AD0:
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, MEM8(edx + 1));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx));
    if (CMP_LE(ecx & ecx, 0)) goto loc_00226B31; /* jle: less or equal (signed <=) */

loc_00226AE2:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_00226AF0:
    SET_LO8(ebx, LO8(ebx) + 1);
    ecx = ZX8(LO8(ebx));
    esi = ecx + edx + 2;
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    MEM8(esp + 0x14) = LO8(eax);
    eax = ZX8(LO8(eax));
    edi = eax + edx + 2;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    MEM8(esi) = LO8(eax);
    MEM8(edi) = LO8(ecx);
    eax = eax + ecx;
    eax = eax & 0xFF;
    SET_LO8(ecx, MEM8(eax + edx + 2));
    MEM8(ebp) = MEM8(ebp) ^ LO8(ecx);
    eax = MEM32(esp + 0x1C);
    ebp++;
    eax--;
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(esp + 0x14));
    if ((eax != 0)) goto loc_00226AF0; /* jne: not equal / not zero */

loc_00226B2E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00226B31:
    MEM8(edx) = LO8(ebx);
    MEM8(edx + 1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
