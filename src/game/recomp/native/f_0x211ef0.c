#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211EF0
 * Original: 0x00211EF0 - 0x00211FBD (205 bytes, 72 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00211EF0:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 0x18);
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = ecx;
    if (TEST_Z(eax, eax)) goto loc_00211F29; /* je: equal / zero */

loc_00211F0A:
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021E1A0(); /* call 0x0021E1A0 */

loc_00211F18:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00211F29; /* je: equal / zero */

loc_00211F1F:
    eax = MEM32(eax + 0x100);
    if (TEST_NZ(eax, eax)) goto loc_00211F2D; /* jne: not equal / not zero */

loc_00211F29:
    eax = 0; /* xor self */
    goto loc_00211F33;

loc_00211F2D:
    eax = MEM32(eax);
    if (TEST_NZ(eax, eax)) goto loc_00211F43; /* jne: not equal / not zero */

loc_00211F33:
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(ecx, 2)) goto loc_00211F4C; /* je: equal / zero */

loc_00211F3C:
    eax = 0xFFFFFFF8u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00211F43:
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(ecx, 2)) goto loc_00211F57; /* jne: not equal / not zero */

loc_00211F4C:
    MEM32(esi + 0x68) = 0;
    MEM8(esi + 0x6C) = 0;

loc_00211F57:
    edx = MEM32(esi + 0x8C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xAC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x210F50);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00220460(); /* call 0x00220460 */

loc_00211F77:
    edi = eax;
    esp = esp + 0x1C;
    if (TEST_NZ(edi, edi)) goto loc_00211F89; /* jne: not equal / not zero */

loc_00211F80:
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    goto loc_00211F8C;

loc_00211F89:
    MEM32(esi + 0x10) = edi;

loc_00211F8C:
    eax = MEM32(esi + 0x28);
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xBC) = 9;
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0x40) = 1;
    if (TEST_Z(eax, eax)) goto loc_00211FB8; /* je: equal / zero */

loc_00211FAA:
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00211FB5:
    esp = esp + 0x10;

loc_00211FB8:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
