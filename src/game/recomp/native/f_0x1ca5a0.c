#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA5A0
 * Original: 0x001CA5A0 - 0x001CA61B (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA5A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CA5A0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x534;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CD760(); /* call 0x001CD760 */

loc_001CA5AE:
    eax = MEM32(esi + 0x4F8);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(eax, edx)) goto loc_001CA5E1; /* jle: less or equal (signed <=) */

loc_001CA5BC:
    eax = 0; /* xor self */
    edi = edi;

loc_001CA5C0:
    edi = MEM32(esi + 0x4F0);
    MEM32(eax + edi) = edx;
    edi = MEM32(esi + 0x4F0);
    MEM8(edi + eax + 8) = LO8(edx);
    edi = MEM32(esi + 0x4F8);
    ecx++;
    eax = eax + 0xC;
    if (CMP_L(ecx, edi)) goto loc_001CA5C0; /* jl: less (signed <) */

loc_001CA5E1:
    MEM32(esi + 0x4EC) = edx;
    ecx = MEM32(esi + 0x2DE0);
    edi = MEM32(esi + 0x2DE8);
    ecx = ecx << 3;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM32(esi + 0x528) = edx;
    MEM32(esi + 0x2E00) = 0x18;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
