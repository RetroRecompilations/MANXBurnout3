#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0006C210
 * Original: 0x0006C210 - 0x0006C25F (79 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C210(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006C210:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    if ((eax == 0)) { sub_0006C25F(); return; } /* je: equal / zero */

loc_0006C219:
    eax = eax - 2;
    if ((eax != 0)) goto loc_0006C242; /* jne: not equal / not zero */

loc_0006C21E:
    eax = MEM32(esp + 0xC);
    eax--;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_0006C245; /* je: equal / zero */

loc_0006C226:
    eax = eax - 4;
    if ((eax != 0)) goto loc_0006C241; /* jne: not equal / not zero */

loc_0006C22B:
    PUSH32(esp, 0x944140D3u);
    PUSH32(esp, 0x20FEDE85);
    PUSH32(esp, 0x567170);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_0006C241:
    POP32(esp, edi);

loc_0006C242:
    esp += 20; return; /* ret 16 */

loc_0006C245:
    PUSH32(esp, 0x94413FC0u);
    PUSH32(esp, 0x35B0F871);
    PUSH32(esp, 0x567170);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000146E0(); /* call 0x000146E0 */

loc_0006C25B:
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}
