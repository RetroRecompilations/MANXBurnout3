#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021CA20
 * Original: 0x0021CA20 - 0x0021CAAD (141 bytes, 44 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CA20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021CA20:
    esp = esp - 0x28;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x2C);
    ecx = eax + 0xA8;
    if (TEST_Z(ecx, ecx)) goto loc_0021CA9D; /* je: equal / zero */

loc_0021CA46:
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0021CA9D; /* je: equal / zero */

loc_0021CA4B:
    SET_LO8(ecx, MEM8(eax + 0xB7));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0021CA9D; /* je: equal / zero */

loc_0021CA55:
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xB6);
    ecx = SX8(LO8(ecx));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xB5);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xB4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x370458);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_0021CA80:
    PUSH32(esp, 0x11);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002141D0(); /* call 0x002141D0 */

loc_0021CA91:
    SET_LO16(eax, MEM16(esp + 0x24));
    esp = esp + 0x24;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0021CA9D:
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_0021CAA6:
    esp = esp + 4;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}
