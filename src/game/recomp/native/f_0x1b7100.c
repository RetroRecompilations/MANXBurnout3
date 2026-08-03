#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7100
 * Original: 0x001B7100 - 0x001B715E (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7100(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B7100:
    edx = MEM32(esi + 0x4AC);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001B715D; /* jle: less or equal (signed <=) */

loc_001B710C:
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ebx + 3);
    ecx = esi + 0x26C;

loc_001B7117:
    if (CMP_EQ(edi, MEM32(ecx))) goto loc_001B7125; /* je: equal / zero */

loc_001B711B:
    eax++;
    ecx = ecx + 0x18;
    if (CMP_L(eax, edx)) goto loc_001B7117; /* jl: less (signed <) */

loc_001B7123:
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001B7125:
    eax = eax + eax * 2;
    ecx = MEM32(esi + eax * 8 + 0x27C);
    /* test ecx, ecx - flags set for next jcc */
    eax = esi + eax * 8;
    if (TEST_Z(ecx, ecx)) goto loc_001B715C; /* je: equal / zero */

loc_001B7136:
    if (TEST_Z(MEM8(ebx + 2), 2)) goto loc_001B714D; /* je: equal / zero */

loc_001B713C:
    edx = MEM32(eax + 0x280);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001B7148:
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001B714D:
    eax = MEM32(eax + 0x280);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001B7159:
    esp = esp + 0xC;

loc_001B715C:
    POP32(esp, edi);

loc_001B715D:
    esp += 4; return; /* ret */

}
