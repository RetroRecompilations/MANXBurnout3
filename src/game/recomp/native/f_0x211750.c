#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00211750
 * Original: 0x00211750 - 0x00211797 (71 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00211750:
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021E390(); /* call 0x0021E390 */

loc_00211763:
    eax = MEM32(esi + 0x3C);
    esp = esp + 8;
    if (CMP_EQ(eax, 2)) goto loc_00211775; /* je: equal / zero */

loc_0021176E:
    eax = 0xFFFFFFFCu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00211775:
    eax = MEM32(esi + 0xB0);
    if (TEST_NZ(eax, eax)) goto loc_00211793; /* jne: not equal / not zero */

loc_0021177F:
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021E3A0(); /* call 0x0021E3A0 */

loc_00211790:
    esp = esp + 0x10;

loc_00211793:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
