#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0980
 * Original: 0x001E0980 - 0x001E09D8 (88 bytes, 36 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0980(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E0980:
    eax = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    esi = edi + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_001E09AF; /* je: equal / zero */

loc_001E098B:
    goto loc_001E0990;

    /* nop */

loc_001E0990:
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001E09A6:
    eax = MEM32(esi);
    esp = esp + 4;
    if (CMP_NE(eax, esi)) goto loc_001E0990; /* jne: not equal / not zero */

loc_001E09AF:
    /* test MEM8(edi + 0x18), 1 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(MEM8(edi + 0x18), 1)) goto loc_001E09D7; /* jne: not equal / not zero */

loc_001E09B6:
    eax = MEM32(0x41AC60);
    if (CMP_EQ(eax, edi)) goto loc_001E09CF; /* je: equal / zero */

loc_001E09BF:
    if (TEST_Z(eax, eax)) goto loc_001E09CF; /* je: equal / zero */

loc_001E09C3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E8), _icall_esp); /* indirect call */
    }

loc_001E09CB:
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001E09CF:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001E09D6:
    POP32(esp, ecx);

loc_001E09D7:
    esp += 4; return; /* ret */

}
