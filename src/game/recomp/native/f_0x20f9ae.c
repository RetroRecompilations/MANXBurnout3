#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020F9AE
 * Original: 0x0020F9AE - 0x0020F9F6 (72 bytes, 26 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F9AE(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0020F9AE:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B8), _icall_esp); /* indirect call */
    }

loc_0020F9B6:
    esi = 0; /* xor self */
    /* cmp MEM32(0x41CC8C), esi - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(MEM32(0x41CC8C), esi)) goto loc_0020F9D8; /* jne: not equal / not zero */

loc_0020F9C2:
    eax = MEM32(0x20);
    if (CMP_NE(MEM32(eax + 0x24C), esi)) goto loc_0020F9D8; /* jne: not equal / not zero */

loc_0020F9D0:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B980), _icall_esp); /* indirect call */
    }

loc_0020F9D8:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B97C), _icall_esp); /* indirect call */
    }

loc_0020F9DF:
    SET_LO8(ecx, LO8(ebx));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B8B4), _icall_esp); /* indirect call */
    }

loc_0020F9E9:
    eax = esi;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
