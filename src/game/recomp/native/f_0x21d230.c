#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D230
 * Original: 0x0021D230 - 0x0021D27E (78 bytes, 23 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D230(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021D230:
    ecx = MEM32(eax + 0x10);
    esp = esp - 0x18;
    if (CMP_EQ(ecx, edx)) goto loc_0021D27A; /* je: equal / zero */

loc_0021D23A:
    ecx = MEM32(eax + 0x8E4);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0x10) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0021D27A; /* je: equal / zero */

loc_0021D247:
    if (CMP_EQ(edx, 7)) goto loc_0021D27A; /* je: equal / zero */

loc_0021D24C:
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x8E0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x636F6E6E;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0021D277:
    esp = esp + 0xC;

loc_0021D27A:
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
