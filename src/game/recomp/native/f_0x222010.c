#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00222010
 * Original: 0x00222010 - 0x0022207D (109 bytes, 48 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222010(void)
{
    int _flags = 0; /* fallback flag var */

loc_00222010:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edx = ebx;
    PUSH32(esp, 0); sub_00221F80(); /* call 0x00221F80 */

loc_00222023:
    edi = eax;
    eax = MEM32(esi + 0x1C);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0022204F; /* jne: not equal / not zero */

loc_0022202F:
    eax = MEM32(esi);
    eax = eax + eax * 2 + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00221EC0(); /* call 0x00221EC0 */

loc_00222041:
    esp = esp + 8;
    if (CMP_G(eax & eax, 0)) goto loc_0022204F; /* jg: greater (signed >) */

loc_00222048:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0022204F:
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x1C) = ecx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + edi * 4);
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi);
    eax++;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
