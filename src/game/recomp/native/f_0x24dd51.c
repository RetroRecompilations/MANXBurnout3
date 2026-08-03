#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DD51
 * Original: 0x0024DD51 - 0x0024DDA4 (83 bytes, 39 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD51(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DD51:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 4;
    edi = esi + 0x50;
    ebp = 0; /* xor self */

loc_0024DD65:
    if (CMP_EQ(MEM32(edi), ebp)) goto loc_0024DD8D; /* je: equal / zero */

loc_0024DD69:
    ebx = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 8), ebp)) goto loc_0024DD86; /* jbe: below or equal (unsigned <=) */

loc_0024DD70:
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = edx + ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0024DD7D:
    ebx++;
    ebp = ebp + 0x7C;
    if (CMP_B(ebx, MEM32(esi + 8))) goto loc_0024DD70; /* jb: below (unsigned <) */

loc_0024DD86:
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0024DD8D:
    ebp = 0; /* xor self */
    if (CMP_EQ(MEM32(esp + 0x10), ebp)) goto loc_0024DD9E; /* je: equal / zero */

loc_0024DD95:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    edi = edi - 4;
    goto loc_0024DD65;

loc_0024DD9E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
