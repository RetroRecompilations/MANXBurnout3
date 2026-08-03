#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5E40
 * Original: 0x001F5E40 - 0x001F5EF7 (183 bytes, 60 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5E40:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(edi, edi)) goto loc_001F5E4E; /* jne: not equal / not zero */

loc_001F5E4A:
    edi = esp + 0x14;

loc_001F5E4E:
    esi = MEM32(esp + 0xC);
    /* test MEM32(esi + 0x40), 0xFFFFFFF - flags set for next jcc */
    eax = 0x28;
    if (CMP_BE(MEM32(esi + 0x40) & 0xFFFFFFF, 0)) goto loc_001F5EC8; /* jbe: below or equal (unsigned <=) */

loc_001F5E60:
    PUSH32(esp, esi);
    PUSH32(esp, 0x1F5D20);
    PUSH32(esp, 0x41B44C);
    PUSH32(esp, 0); sub_001FE1E0(); /* call 0x001FE1E0 */

loc_001F5E70:
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_001F5EA3; /* jne: not equal / not zero */

loc_001F5E77:
    eax = MEM32(esi + 0x40);
    ecx = eax;
    ecx = ecx >> 0x1C;
    edx = 1;
    edx = edx << LO8(ecx);
    if (CMP_NE(edx, 1)) goto loc_001F5EA3; /* jne: not equal / not zero */

loc_001F5E8B:
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 0x40) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(0x3C084C);
    ecx--;
    ecx = ecx << 0x1C;
    ecx = ecx | eax;
    MEM32(esi + 0x40) = ecx;

loc_001F5EA3:
    ecx = MEM32(esi + 0x40);
    ecx = ecx >> 0x1C;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = eax + -1;
    eax = eax + 0x27;
    ecx = ~ecx;
    ecx = ecx & eax;
    MEM32(edi) = ecx;
    eax = MEM32(esi + 0x40);
    eax = eax & 0xFFFFFFF;
    eax = eax + ecx;
    goto loc_001F5ECE;

loc_001F5EC8:
    MEM32(edi) = 0;

loc_001F5ECE:
    SET_LO8(ecx, MEM8(esp + 0x10));
    if (TEST_Z(LO8(ecx), 2)) goto loc_001F5EDA; /* je: equal / zero */

loc_001F5ED7:
    eax = eax + 4;

loc_001F5EDA:
    if (TEST_Z(LO8(ecx), 1)) goto loc_001F5EF4; /* je: equal / zero */

loc_001F5EDF:
    esi = MEM32(esi + 0x4C);
    ecx = ZX16(MEM16(esi + 0xC));
    edx = ecx + ecx * 2;
    ecx = ZX16(MEM16(esi + 0xE));
    edx = eax + edx * 4;
    eax = edx + ecx * 8 + 8;

loc_001F5EF4:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
