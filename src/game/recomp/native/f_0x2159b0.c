#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002159B0
 * Original: 0x002159B0 - 0x00215A06 (86 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002159B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002159B0:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6F70656E);
    PUSH32(esp, 0); sub_002155A0(); /* call 0x002155A0 */

loc_002159BE:
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002159DF; /* je: equal / zero */

loc_002159C5:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_002159CA:
    if (CMP_B(eax, MEM32(0x41CDF8))) goto loc_00215A05; /* jb: below (unsigned <) */

loc_002159D2:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_002159D7:
    eax = eax + 5;
    MEM32(0x41CDF8) = eax;

loc_002159DF:
    PUSH32(esp, esi);
    esi = 0x41CD58;

loc_002159E5:
    if (CMP_EQ(MEM32(esi), 0)) goto loc_002159F9; /* je: equal / zero */

loc_002159EA:
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_002159EF:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi), _icall_esp); /* indirect call */
    }

loc_002159F6:
    esp = esp + 8;

loc_002159F9:
    esi = esi + 8;
    if (CMP_L(esi, 0x41CDD8)) goto loc_002159E5; /* jl: less (signed <) */

loc_00215A04:
    POP32(esp, esi);

loc_00215A05:
    esp += 4; return; /* ret */

}
