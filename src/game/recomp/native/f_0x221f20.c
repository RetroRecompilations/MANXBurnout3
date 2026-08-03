#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00221F20
 * Original: 0x00221F20 - 0x00221F73 (83 bytes, 36 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00221F20:
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00221F2C; /* jne: not equal / not zero */

loc_00221F29:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00221F2C:
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    if (CMP_NE(MEM32(edi + eax * 4), 0)) goto loc_00221F53; /* jne: not equal / not zero */

loc_00221F3A:
    esi = MEM32(ecx + 0x10);
    /* nop */

loc_00221F40:
    eax = MEM32(ecx + 4);
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ecx + 4) = edx;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(MEM32(eax + edx * 4), 0)) goto loc_00221F40; /* je: equal / zero */

loc_00221F53:
    edx = MEM32(ecx + 4);
    eax = MEM32(edi + edx * 4);
    esi = MEM32(eax);
    edx = edi + edx * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    edx--;
    POP32(esp, edi);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
