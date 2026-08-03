#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002422C0
 * Original: 0x002422C0 - 0x0024233E (126 bytes, 49 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002422C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002422C0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    if (CMP_NE(MEM32(esi + 0x68), edi)) goto loc_002422D3; /* jne: not equal / not zero */

loc_002422CB:
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002422D3:
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00242230(); /* call 0x00242230 */

loc_002422DA:
    eax = MEM32(esi + 0x68);
    esp = esp + 4;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002422F9; /* je: equal / zero */

loc_002422E5:
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E137(); /* call 0x0024E137 */

loc_002422EE:
    MEM32(esi + 0x60) = MEM32(esi + 0x60) & 0xFFFFFFAFu;
    MEM32(esi + 0x68) = 0xFFFFFFFFu;

loc_002422F9:
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024DFFA(); /* call 0x0024DFFA */

loc_00242302:
    if (TEST_NZ(eax, eax)) goto loc_00242309; /* jne: not equal / not zero */

loc_00242306:
    MEM32(esi + 0x68) = edi;

loc_00242309:
    eax = MEM32(esi + 0x68);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* cmp eax, edi - flags set for next jcc */
    PUSH32(esp, 1);
    SET_LO8(ebx, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_00242230(); /* call 0x00242230 */

loc_0024231B:
    eax = MEM32(esi + 0x64);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00242338; /* je: equal / zero */

loc_00242325:
    eax = 1;
    edi = esi;
    MEM32(esi + 0x64) = 0;
    PUSH32(esp, 0); sub_00242060(); /* call 0x00242060 */

loc_00242338:
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
