#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D9F0
 * Original: 0x0021D9F0 - 0x0021DA70 (128 bytes, 46 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D9F0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x8C4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00222080(); /* call 0x00222080 */

loc_0021DA0B:
    ebx = eax;
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_0021DA69; /* je: equal / zero */

loc_0021DA14:
    ecx = MEM32(edi + 0x8C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C180(); /* call 0x0021C180 */

loc_0021DA21:
    esi = MEM32(eax + 0xF8);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(eax + 0xF8);
    esi = esi & ecx;
    edx = edx ^ esi;
    ecx = edx;
    esp = esp + 8;
    /* test ecx, 0x1C0204 - flags set for next jcc */
    MEM32(eax + 0xF8) = edx;
    if (TEST_NZ(ecx, 0x1C0204)) goto loc_0021DA69; /* jne: not equal / not zero */

loc_0021DA48:
    edx = MEM32(edi + 0x8C4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002220D0(); /* call 0x002220D0 */

loc_0021DA55:
    eax = MEM32(edi + 0x8C8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C200(); /* call 0x0021C200 */

loc_0021DA62:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_0021DA66:
    esp = esp + 0x14;

loc_0021DA69:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
