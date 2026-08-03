#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1AF0
 * Original: 0x001E1AF0 - 0x001E1B43 (83 bytes, 43 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1AF0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_001E1B1B; /* je: equal / zero */

loc_001E1AFE:
    edi = MEM32(esp + 0x14);

loc_001E1B02:
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x20), _icall_esp); /* indirect call */
    }

loc_001E1B0D:
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001E1B21; /* je: equal / zero */

loc_001E1B14:
    esi = MEM32(esi + 0x30);
    if (TEST_NZ(esi, esi)) goto loc_001E1B02; /* jne: not equal / not zero */

loc_001E1B1B:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001E1B21:
    esi = MEM32(esi + 0x34);
    if (TEST_Z(esi, esi)) goto loc_001E1B3D; /* je: equal / zero */

loc_001E1B28:
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x24), _icall_esp); /* indirect call */
    }

loc_001E1B33:
    esi = MEM32(esi + 0x34);
    esp = esp + 0xC;
    if (TEST_NZ(esi, esi)) goto loc_001E1B28; /* jne: not equal / not zero */

loc_001E1B3D:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
