#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002425D0
 * Original: 0x002425D0 - 0x00242633 (99 bytes, 33 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002425D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002425D0:
    eax = MEM32(0x41D294);
    if (TEST_Z(eax, eax)) goto loc_00242632; /* je: equal / zero */

loc_002425D9:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x58) = 0;
    eax = MEM32(esi + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_002425FE; /* je: equal / zero */

loc_002425EC:
    /* nop */

loc_002425F0:
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_001D161A(); /* call 0x001D161A */

loc_002425F7:
    eax = MEM32(esi + 0x5C);
    if (TEST_NZ(eax, eax)) goto loc_002425F0; /* jne: not equal / not zero */

loc_002425FE:
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002429F0(); /* call 0x002429F0 */

loc_00242607:
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024E137(); /* call 0x0024E137 */

loc_00242616:
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E308(); /* call 0x0024E308 */

loc_0024261E:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_00242624:
    esp = esp + 4;
    MEM32(0x41D294) = 0;
    POP32(esp, esi);

loc_00242632:
    esp += 4; return; /* ret */

}
