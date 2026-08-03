#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D960
 * Original: 0x0021D960 - 0x0021D9E8 (136 bytes, 49 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D960:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 0x8C8);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_0021D9E6; /* je: equal / zero */

loc_0021D971:
    eax = MEM32(ebp + 0x8C4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00222080(); /* call 0x00222080 */

loc_0021D984:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021D9C4; /* jne: not equal / not zero */

loc_0021D98B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp), _icall_esp); /* indirect call */
    }

loc_0021D994:
    ebx = eax;
    ecx = 0x42;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x8C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C0C0(); /* call 0x0021C0C0 */

loc_0021D9AC:
    edx = MEM32(ebp + 0x8C4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00222010(); /* call 0x00222010 */

loc_0021D9BA:
    esi = MEM32(esp + 0x30);
    esp = esp + 0x18;
    POP32(esp, edi);
    goto loc_0021D9D6;

loc_0021D9C4:
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C180(); /* call 0x0021C180 */

loc_0021D9D1:
    esp = esp + 8;
    ebx = eax;

loc_0021D9D6:
    ecx = MEM32(esi + 0xF8);
    MEM32(ebx + 0xF8) = MEM32(ebx + 0xF8) | ecx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

loc_0021D9E6:
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
