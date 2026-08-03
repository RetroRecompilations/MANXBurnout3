#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002276E9
 * Original: 0x002276E9 - 0x00227713 (42 bytes, 21 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002276E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002276E9:
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edi = edi + ecx;
    eax--;
    if (((int32_t)eax < 0)) goto loc_0022770E; /* js: sign (negative) */

loc_002276FE:
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00227702:
    edi = edi - MEM32(ebp + 0xC);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x14), _icall_esp); /* indirect call */
    }

loc_0022770A:
    esi--;
    if ((esi != 0)) goto loc_00227702; /* jne: not equal / not zero */

loc_0022770D:
    POP32(esp, esi);

loc_0022770E:
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
