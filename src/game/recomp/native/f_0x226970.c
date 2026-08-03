#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226970
 * Original: 0x00226970 - 0x00226ACB (347 bytes, 112 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226970:
    ecx = MEM32(esp + 0x10);
    esp = esp - 0xC;
    if (CMP_GE(ecx, 1)) goto loc_00226981; /* jge: greater or equal (signed >=) */

loc_0022697C:
    ecx = 1;

loc_00226981:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = LO8(ebx);
    eax = 0; /* xor self */

loc_00226991:
    MEM8(esi + eax + 2) = LO8(eax);
    eax++;
    if (CMP_B(eax, 0x100)) goto loc_00226991; /* jb: below (unsigned <) */

loc_0022699D:
    ebp = MEM32(esp + 0x24);
    if (CMP_LE(ebp, ebx)) goto loc_00226AC4; /* jle: less or equal (signed <=) */

loc_002269A9:
    if (CMP_LE(ecx, ebx)) goto loc_00226AC4; /* jle: less or equal (signed <=) */

loc_002269B1:
    eax = eax | 0xFFFFFFFFu;
    eax = eax - esi;
    MEM32(esp + 0xC) = eax;
    eax = 1;
    eax = eax - esi;
    MEM32(esp + 0x10) = eax;
    eax = 0xFFFFFFFEu;
    eax = eax - esi;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = ecx;
    /* nop */

loc_002269E0:
    MEM32(esp + 0x20) = 2;
    ecx = esi + 2;
    goto loc_002269F0;

    /* nop */

loc_002269F0:
    SET_LO8(edx, MEM8(ecx));
    MEM8(esp + 0x2C) = LO8(edx);
    eax = eax + ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    SET_LO8(eax, MEM8(edx + edi));
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x2C));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    edx = ZX8(LO8(ebx));
    eax = edx + esi + 2;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2C));
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 1));
    edx = MEM32(esp + 0x10);
    MEM8(esp + 0x2C) = LO8(eax);
    eax = edx + ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    SET_LO8(eax, MEM8(edx + edi));
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x2C));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    edx = ZX8(LO8(ebx));
    eax = edx + esi + 2;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2C));
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esp + 0x2C) = LO8(eax);
    eax = MEM32(esp + 0x20);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    SET_LO8(eax, MEM8(esp + 0x2C));
    SET_LO8(edx, MEM8(edx + edi));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    eax = ZX8(LO8(ebx));
    SET_LO8(edx, MEM8(eax + esi + 2));
    eax = eax + esi + 2;
    MEM8(ecx + 2) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2C));
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 3));
    edx = MEM32(esp + 0x14);
    MEM8(esp + 0x2C) = LO8(eax);
    eax = edx + ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    ecx = ecx + 4;
    SET_LO8(eax, MEM8(edx + edi));
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x2C));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    edx = ZX8(LO8(ebx));
    eax = edx + esi + 2;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + -1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2C));
    MEM8(eax) = LO8(edx);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 4;
    eax = MEM32(esp + 0x18);
    edx = eax + ecx;
    if (CMP_B(edx, 0x100)) goto loc_002269F0; /* jb: below (unsigned <) */

loc_00226AB9:
    MEM32(esp + 0x28) = MEM32(esp + 0x28) - 1;
    if ((MEM32(esp + 0x28) != 0)) goto loc_002269E0; /* jne: not equal / not zero */

loc_00226AC3:
    POP32(esp, edi);

loc_00226AC4:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
