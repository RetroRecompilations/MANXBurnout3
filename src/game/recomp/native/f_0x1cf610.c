#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF610
 * Original: 0x001CF610 - 0x001CF685 (117 bytes, 45 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF610:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = MEM32(0x36B7CC);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_001CF625:
    SET_LO8(eax, LO8(eax) | MEM8(ecx + esi));
    ecx++;
    if (CMP_L(ecx, 0x10)) goto loc_001CF625; /* jl: less (signed <) */

loc_001CF62E:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CF656; /* jne: not equal / not zero */

loc_001CF632:
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    eax = ebp + -264;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0); sub_001D2933(); /* call 0x001D2933 */

loc_001CF650:
    esi = ebp + -210;

loc_001CF656:
    edi = MEM32(ebp + 8);
    edi = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CF537(); /* call 0x001CF537 */

loc_001CF665:
    PUSH32(esp, 0x14);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D7012(); /* call 0x001D7012 */

loc_001CF670:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001CF59E(); /* call 0x001CF59E */

loc_001CF67C:
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
