#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1470
 * Original: 0x001D1470 - 0x001D14D1 (97 bytes, 37 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D1470:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_001D148E; /* je: equal / zero */

loc_001D147C:
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D3DF3(); /* call 0x001D3DF3 */

loc_001D148C:
    goto loc_001D1490;

loc_001D148E:
    eax = 0; /* xor self */

loc_001D1490:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = 0; /* xor self */
    /* cmp MEM32(ebp + 0xC), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ebp + 0xC), ecx)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B860), _icall_esp); /* indirect call */
    }

loc_001D14A7:
    if (TEST_S(eax, eax)) goto loc_001D14C5; /* jl: less (signed <) */

loc_001D14AB:
    if (CMP_NE(eax, 0x40000000)) goto loc_001D14B9; /* jne: not equal / not zero */

loc_001D14B2:
    PUSH32(esp, 0xB7);
    goto loc_001D14BB;

loc_001D14B9:
    PUSH32(esp, 0);

loc_001D14BB:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D14C0:
    eax = MEM32(ebp + 0x14);
    goto loc_001D14CD;

loc_001D14C5:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D14CB:
    eax = 0; /* xor self */

loc_001D14CD:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}
