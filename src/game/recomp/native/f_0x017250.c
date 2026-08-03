#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_00017250
 * Original: 0x00017250 - 0x000172C5 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017250(void)
{
    uint32_t game_base = eax;
    uint32_t completed = 0;
    int _flags = 0; /* fallback flag var */

loc_00017250:
    static unsigned transition_trace;
    if (getenv("B3_FRONTEND_TRACE") && transition_trace < 12)
        fprintf(stderr, "[B3-FE] transition enter eax=%08X esp=%08X\n", eax, esp);
    edx = MEM32(0x4A1D84);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x4A1EB4);
    PUSH32(esp, edi);
    ebx = 0; /* xor ebx,ebx */
    edi = eax;
    esi++;
    edx++;
    ecx = edi + 0x7040;
    MEM32(0x4A1EB4) = esi;
    MEM32(0x4A1D84) = edx;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_0001727C:
    if (getenv("B3_FRONTEND_TRACE") && transition_trace < 12)
        fprintf(stderr, "[B3-FE] transition timer game complete esp=%08X\n", esp);
    ecx = 0x60EA00;
    PUSH32(esp, 0); sub_001B5AC0(); /* call 0x001B5AC0 */

loc_00017286:
    if (getenv("B3_FRONTEND_TRACE") && transition_trace < 12) {
        fprintf(stderr, "[B3-FE] transition timer global complete esp=%08X\n", esp);
        transition_trace++;
    }
    /* EDI is callee-saved in both timing calls above. Their translated
     * implementations share the register globals and can leak an internal
     * value, so restore the game object base before the frontend update. */
    edi = game_base;
    PUSH32(esp, 0); sub_00016E00(); /* call 0x00016E00 */

loc_0001728B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017293; /* je: equal / zero */

loc_0001728F:
    completed = 1;
    goto loc_0001729A;

loc_00017293:
    MEM8(0x55927D) = 1;

loc_0001729A:
    ecx = MEM32(0x567174);
    if (TEST_Z(ecx, ecx)) goto loc_000172B5; /* je: equal / zero */

loc_000172A4:
    edx = MEM32(0x567178);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000172B5:
    esi = 0x557880;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000172BF:
    POP32(esp, edi);
    POP32(esp, esi);
    /* EBX is callee-saved, but translated callees share the register globals
     * and can leak their scratch EBX into this function.  The retail code's
     * boolean is logically independent of those calls, so return the captured
     * update result rather than the leaked register byte. */
    SET_LO8(eax, completed);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
