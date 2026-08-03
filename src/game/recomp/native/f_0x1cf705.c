#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF705
 * Original: 0x001CF705 - 0x001CF767 (98 bytes, 44 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF705(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF705:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    ebx++;
    esi = esi & ebx;
    if (TEST_Z(eax, eax)) goto loc_001CF748; /* je: equal / zero */

loc_001CF71F:
    if (TEST_Z(esi, esi)) goto loc_001CF726; /* je: equal / zero */

loc_001CF723:
    eax = ebp + -20;

loc_001CF726:
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CF59E(); /* call 0x001CF59E */

loc_001CF735:
    if (TEST_Z(esi, esi)) goto loc_001CF748; /* je: equal / zero */

loc_001CF739:
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001CF610(); /* call 0x001CF610 */

loc_001CF746:
    ebx = eax;

loc_001CF748:
    PUSH32(esp, 0x24830000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_001CF753:
    POP32(esp, edi);
    POP32(esp, esi);
    /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(ebx, ebx)) goto loc_001CF75E; /* je: equal / zero */

loc_001CF75A:
    eax = 0; /* xor self */
    goto loc_001CF763;

loc_001CF75E:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001CF763:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
