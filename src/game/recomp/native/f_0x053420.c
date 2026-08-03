#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053420
 * Original: 0x00053420 - 0x0005351D (253 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053420:
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x174);
    eax--;
    /* cmp eax, 0xE - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0xE)) goto loc_00053519; /* ja: above (unsigned >) */

loc_00053433:
    ecx = ZX8(MEM8(eax + 0x53530));
    { uint32_t _jt = MEM32(ecx * 4 + 0x53520); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00053441u) goto loc_00053441;
    if (_jt == 0x00053478u) goto loc_00053478;
    if (_jt == 0x000534ACu) goto loc_000534AC;
    if (_jt == 0x000534FEu) goto loc_000534FE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00053441:
    PUSH32(esp, 0);
    eax = 7;
    ecx = 8;
    edx = 0; /* xor self */
    esi = 0x3FE268;
    PUSH32(esp, 0); sub_00054630(); /* call 0x00054630 */

loc_00053459:
    PUSH32(esp, 0);
    edx = 1;
    esi = 0x3FEFE8;
    eax = 7;
    ecx = 8;
    PUSH32(esp, 0); sub_00054630(); /* call 0x00054630 */

loc_00053474:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053478:
    PUSH32(esp, 0);
    eax = 3;
    ecx = 0; /* xor self */
    edi = 0; /* xor self */
    esi = 0x3FDF70;
    PUSH32(esp, 0); sub_0004F990(); /* call 0x0004F990 */

loc_0005348D:
    PUSH32(esp, 0x3FDC00);
    eax = 3;
    edx = 0; /* xor self */
    esi = 0x3FE268;
    ecx = 8;
    PUSH32(esp, 0); sub_00054630(); /* call 0x00054630 */

loc_000534A8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000534AC:
    PUSH32(esp, 1);
    eax = 3;
    ecx = 0; /* xor self */
    edi = 0; /* xor self */
    esi = 0x3FDF70;
    PUSH32(esp, 0); sub_0004F990(); /* call 0x0004F990 */

loc_000534C1:
    PUSH32(esp, 0x3FDC00);
    eax = 3;
    ecx = 8;
    edx = 0; /* xor self */
    esi = 0x3FE268;
    PUSH32(esp, 0); sub_00054630(); /* call 0x00054630 */

loc_000534DC:
    PUSH32(esp, 0x3FED50);
    eax = 3;
    edx = 1;
    esi = 0x3FEFE8;
    ecx = 8;
    PUSH32(esp, 0); sub_00054630(); /* call 0x00054630 */

loc_000534FA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000534FE:
    PUSH32(esp, 0x3FDC00);
    edx = 0; /* xor self */
    esi = 0x3FE268;
    eax = 7;
    ecx = 8;
    PUSH32(esp, 0); sub_00054630(); /* call 0x00054630 */

loc_00053519:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
