#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242A50
 * Original: 0x00242A50 - 0x00242AFC (172 bytes, 60 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242A50:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x14);
    eax = MEM32(edi);
    esi = esi + ecx;
    if (TEST_NZ(eax, eax)) goto loc_00242A89; /* jne: not equal / not zero */

loc_00242A70:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002430B0(); /* call 0x002430B0 */

loc_00242A76:
    esp = esp + 4;
    /* test eax, eax - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00242A86; /* jne: not equal / not zero */

loc_00242A7F:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00242A86:
    MEM32(edi + 0x2C) = ebx;

loc_00242A89:
    if (CMP_EQ(ebx, MEM32(edi + 0x2C))) goto loc_00242A97; /* je: equal / zero */

loc_00242A8E:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00242A97:
    eax = 0; /* xor self */
    ecx = 0x23;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM16(esi) = 2;
    PUSH32(esp, 0); sub_0033A280(); /* call 0x0033A280 */

loc_00242AB1:
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0); sub_0033A271(); /* call 0x0033A271 */

loc_00242ABE:
    MEM16(esi + 2) = LO16(eax);
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = 1;
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_00242AD5:
    MEM32(esi + 0x70) = eax;
    edx = MEM32(0x3C60EC);
    esi = esi + 0x24;
    MEM32(esi) = edx;
    eax = MEM32(0x3C60F0);
    MEM32(esi + 4) = eax;
    SET_LO16(ecx, MEM16(0x3C60F4));
    POP32(esp, edi);
    MEM16(esi + 8) = LO16(ecx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
