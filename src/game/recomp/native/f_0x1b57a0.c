#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B57A0
 * Original: 0x001B57A0 - 0x001B57DF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B57A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B57A0:
    if (CMP_EQ(LO8(eax), MEM8(edi + 0x94))) goto loc_001B57DE; /* je: equal / zero */

loc_001B57A8:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(edi + 0x94) = LO8(eax);
    esi = edi + 0x80;
    ebx = 4;
    goto loc_001B57C0;

    /* nop */

loc_001B57C0:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001B57D6; /* je: equal / zero */

loc_001B57C6:
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x94));
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001B57D6:
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_001B57C0; /* jne: not equal / not zero */

loc_001B57DC:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001B57DE:
    esp += 4; return; /* ret */

}
