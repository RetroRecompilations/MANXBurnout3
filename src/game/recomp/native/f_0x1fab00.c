#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FAB00
 * Original: 0x001FAB00 - 0x001FAB84 (132 bytes, 52 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAB00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FAB00:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001FAB15; /* je: equal / zero */

loc_001FAB0F:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001FAB12:
    esp = esp + 4;

loc_001FAB15:
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F9EE0(); /* call 0x001F9EE0 */

loc_001FAB1E:
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F9EE0(); /* call 0x001F9EE0 */

loc_001FAB27:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6600(); /* call 0x001F6600 */

loc_001FAB2D:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE500(); /* call 0x001FE500 */

loc_001FAB33:
    SET_LO8(eax, MEM8(esi + 0x54));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), 8)) goto loc_001FAB49; /* je: equal / zero */

loc_001FAB3D:
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FAB46:
    esp = esp + 4;

loc_001FAB49:
    eax = MEM32(esi + 0x54);
    if (TEST_Z(LO8(eax), 1)) goto loc_001FAB75; /* je: equal / zero */

loc_001FAB50:
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x4C);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001FAB66; /* je: equal / zero */

loc_001FAB5B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FAB61:
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FAB66:
    PUSH32(esp, 0x41B76C);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FAB70:
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FAB75:
    if (TEST_NZ(LO8(eax), 4)) goto loc_001FAB82; /* jne: not equal / not zero */

loc_001FAB79:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FAB7F:
    esp = esp + 4;

loc_001FAB82:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
