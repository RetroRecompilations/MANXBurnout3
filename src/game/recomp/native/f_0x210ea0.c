#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00210EA0
 * Original: 0x00210EA0 - 0x00210EF3 (83 bytes, 33 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210EA0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_00210EF1; /* je: equal / zero */

loc_00210EA9:
    eax = MEM32(esi + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_00210EF1; /* je: equal / zero */

loc_00210EB3:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001B35F0(); /* call 0x001B35F0 */

loc_00210EBA:
    edi = eax;
    esp = esp + 4;
    edi--;
    if (((int32_t)edi < 0)) goto loc_00210EE0; /* js: sign (negative) */

loc_00210EC2:
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C190(); /* call 0x0021C190 */

loc_00210ECF:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00210EDD; /* je: equal / zero */

loc_00210ED6:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_00210EDA:
    esp = esp + 4;

loc_00210EDD:
    edi--;
    if (((int32_t)edi >= 0)) goto loc_00210EC2; /* jns: not sign (positive) */

loc_00210EE0:
    ecx = MEM32(esi + 0xC4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0021C030(); return; /* tail jmp 0x0021C030 */

loc_00210EF1:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
