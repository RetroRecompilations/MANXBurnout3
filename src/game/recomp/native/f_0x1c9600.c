#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9600
 * Original: 0x001C9600 - 0x001C965B (91 bytes, 28 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9600(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C9600:
    eax = MEM32(0x4A1ED8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(esi, eax)) goto loc_001C963A; /* jne: not equal / not zero */

loc_001C960C:
    PUSH32(esp, 0); sub_001E0E00(); /* call 0x001E0E00 */

loc_001C9611:
    ecx = MEM32(0x4A1BC0);
    edx = MEM32(0x4A1BC4);
    MEM32(eax) = ecx;
    ecx = MEM32(0x4A1BC8);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x4A1BCC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(0x4A1ED8) = ebx;

loc_001C963A:
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_001C964E; /* je: equal / zero */

loc_001C9641:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001C9648:
    esp = esp + 4;
    MEM32(esi + 4) = ebx;

loc_001C964E:
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
