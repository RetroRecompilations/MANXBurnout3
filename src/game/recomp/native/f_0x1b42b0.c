#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001B42B0
 * Original: 0x001B42B0 - 0x001B42D2 (34 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B42B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B42B0:
    eax = MEM32(ecx + 4);
    if (getenv("B3_FRONTEND_TRACE"))
        fprintf(stderr,
                "[B3-FE] 1B42B0 leave manager=%08X current=%08X ctx=%08X esp=%08X\n",
                ecx, eax, MEM32(ecx + 8), esp);
    if (TEST_Z(eax, eax)) goto loc_001B42CF; /* je: equal / zero */

loc_001B42B7:
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp;
    PUSH32(esp, esi);
    /* Preserve the local saved-register slot when an untranslated screen
     * handler is skipped at the safe dispatch boundary. */
    _icall_esp = g_esp;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001B42CE:
    POP32(esp, esi);

loc_001B42CF:
    esp += 12; return; /* ret 8 */

}
