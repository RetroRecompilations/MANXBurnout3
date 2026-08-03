#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA620
 * Original: 0x001CA620 - 0x001CA67D (93 bytes, 33 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA620:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ebp + 0x520;
    PUSH32(esp, 0); sub_001CA220(); /* call 0x001CA220 */

loc_001CA632:
    eax = MEM32(ebp + 0x518);
    if (TEST_Z(eax, eax)) goto loc_001CA646; /* je: equal / zero */

loc_001CA63C:
    /* nop */

loc_001CA640:
    eax = MEM32(eax);
    if (TEST_NZ(eax, eax)) goto loc_001CA640; /* jne: not equal / not zero */

loc_001CA646:
    eax = MEM32(ebp + 0x4E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F68D0(); /* call 0x001F68D0 */

loc_001CA652:
    esi = MEM32(ebp + 0x2DDC);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001CA66F; /* je: equal / zero */

loc_001CA65F:
    PUSH32(esp, edi);

loc_001CA660:
    edi = esi + 8;
    PUSH32(esp, 0); sub_001CB970(); /* call 0x001CB970 */

loc_001CA668:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001CA660; /* jne: not equal / not zero */

loc_001CA66E:
    POP32(esp, edi);

loc_001CA66F:
    ebx = ebp + 8;
    PUSH32(esp, 0); sub_001CE100(); /* call 0x001CE100 */

loc_001CA677:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
