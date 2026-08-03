#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FEA30
 * Original: 0x001FEA30 - 0x001FEB05 (213 bytes, 94 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEA30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEA30:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ebp + 0x10;
    if (CMP_EQ(esi, edi)) goto loc_001FEB00; /* je: equal / zero */

loc_001FEA49:
    eax = MEM32(esp + 0x18);
    /* nop */

loc_001FEA50:
    ecx = ebx + esi + 8;
    if (CMP_B(eax, ecx)) goto loc_001FEA65; /* jb: below (unsigned <) */

loc_001FEA58:
    edx = MEM32(ebp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp));
    edx = edx + ecx;
    if (CMP_BE(eax, edx)) goto loc_001FEA70; /* jbe: below or equal (unsigned <=) */

loc_001FEA65:
    esi = MEM32(esi);
    if (CMP_NE(esi, edi)) goto loc_001FEA50; /* jne: not equal / not zero */

loc_001FEA6B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FEA70:
    eax = eax - ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp)); }
    edx = eax;
    edx = edx >> 3;
    ecx = edx * 8;
    MEM32(esp + 0x14) = ecx;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    ecx = ecx - eax;
    eax = 0x80;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    SET_LO8(ecx, MEM8(esi + edx + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(esi + edx + 8) = LO8(ecx);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edi);
    if (CMP_EQ(ecx, edi)) goto loc_001FEAF4; /* je: equal / zero */

loc_001FEAB7:
    if (TEST_Z(MEM8(ebp + 0x18), 2)) goto loc_001FEAF4; /* je: equal / zero */

loc_001FEABD:
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_001FEAD5; /* jbe: below or equal (unsigned <=) */

loc_001FEAC5:
    ebp = ZX8(MEM8(eax + esi + 8));
    edx = edx + ebp;
    eax++;
    if (CMP_B(eax, ebx)) goto loc_001FEAC5; /* jb: below (unsigned <) */

loc_001FEAD1:
    if (TEST_NZ(edx, edx)) goto loc_001FEAE3; /* jne: not equal / not zero */

loc_001FEAD5:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FEADB:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FEAE3:
    MEM32(esi + 4) = edi;
    MEM32(esi) = ecx;
    edx = MEM32(edi);
    MEM32(edx + 4) = esi;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001FEAF4:
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi);
    MEM32(eax + 4) = esi;
    MEM32(edi) = esi;

loc_001FEB00:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
