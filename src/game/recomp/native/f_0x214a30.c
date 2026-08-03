#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214A30
 * Original: 0x00214A30 - 0x00214AA0 (112 bytes, 51 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214A30:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    esi = 0; /* xor self */

loc_00214A40:
    MEM8(esi + ebp + 4) = LO8(edx);
    SET_LO8(ecx, MEM8(edi));
    if (CMP_L(LO8(ecx), 0x30)) goto loc_00214A6E; /* jl: less (signed <) */

loc_00214A4B:
    goto loc_00214A50;

    /* nop */

loc_00214A50:
    if (CMP_G(LO8(ecx), 0x39)) goto loc_00214A6E; /* jg: greater (signed >) */

loc_00214A55:
    SET_LO8(eax, MEM8(esi + ebp + 4));
    SET_LO8(ebx, 0xA);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    edi++;
    MEM8(esi + ebp + 4) = LO8(eax);
    SET_LO8(ecx, MEM8(edi));
    if (CMP_GE(LO8(ecx), 0x30)) goto loc_00214A50; /* jge: greater or equal (signed >=) */

loc_00214A6E:
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    eax = 0; /* xor self */
    /* cmp esi, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(esi, 3)) ? 1 : 0); /* setge */
    eax--;
    eax = eax & 0x2E;
    if (CMP_NE(ecx, eax)) goto loc_00214A8F; /* jne: not equal / not zero */

loc_00214A81:
    esi++;
    edi++;
    if (CMP_L(esi, 4)) goto loc_00214A40; /* jl: less (signed <) */

loc_00214A88:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00214A8F:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 5) = LO8(edx);
    MEM8(ebp + 4) = LO8(edx);
    MEM8(ebp + 7) = LO8(edx);
    MEM8(ebp + 6) = LO8(edx);
    POP32(esp, ebp);

}
