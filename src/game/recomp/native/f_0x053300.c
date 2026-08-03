#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053300
 * Original: 0x00053300 - 0x000533F4 (244 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053300:
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x174);
    eax--;
    /* cmp eax, 0xE - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0xE)) goto loc_000533F0; /* ja: above (unsigned >) */

loc_00053313:
    ecx = ZX8(MEM8(eax + 0x5340C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x533F4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00053321u) goto loc_00053321;
    if (_jt == 0x00053364u) goto loc_00053364;
    if (_jt == 0x00053391u) goto loc_00053391;
    if (_jt == 0x000533A7u) goto loc_000533A7;
    if (_jt == 0x000533C1u) goto loc_000533C1;
    if (_jt == 0x000533F0u) goto loc_000533F0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00053321:
    PUSH32(esp, 0);
    eax = 6;
    ecx = 0; /* xor self */
    esi = 0x3FF2C8;
    PUSH32(esp, 0); sub_000509B0(); /* call 0x000509B0 */

loc_00053334:
    PUSH32(esp, 0x3FF338);
    eax = 2;
    ecx = 8;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_0004EDC0(); /* call 0x0004EDC0 */

loc_0005334A:
    PUSH32(esp, 0);
    eax = 2;
    ecx = 7;
    edi = 0x3FF304;
    PUSH32(esp, 0); sub_000511C0(); /* call 0x000511C0 */

loc_00053360:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053364:
    PUSH32(esp, 0);
    eax = 6;
    ecx = 0; /* xor self */
    esi = 0x3FF2C8;
    PUSH32(esp, 0); sub_000509B0(); /* call 0x000509B0 */

loc_00053377:
    PUSH32(esp, 0x3FF338);
    eax = 2;
    ecx = 8;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_0004EDC0(); /* call 0x0004EDC0 */

loc_0005338D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053391:
    PUSH32(esp, 0);
    eax = 2;
    ecx = 7;
    edi = 0x3FF304;
    PUSH32(esp, 0); sub_000511C0(); /* call 0x000511C0 */

loc_000533A7:
    PUSH32(esp, 0x3FDF10);
    edx = 0; /* xor self */
    ecx = 3;
    eax = 2;
    PUSH32(esp, 0); sub_0004F020(); /* call 0x0004F020 */

loc_000533BD:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000533C1:
    PUSH32(esp, 0x3FDF10);
    eax = 2;
    ecx = 3;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_0004F020(); /* call 0x0004F020 */

loc_000533D7:
    PUSH32(esp, 0x3FEF88);
    edx = 1;
    ecx = 3;
    eax = 2;
    PUSH32(esp, 0); sub_0004F020(); /* call 0x0004F020 */

loc_000533F0:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
