#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018E050
 * Original: 0x0018E050 - 0x0018E0D6 (134 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E050(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018E050:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x7C), _icall_esp); /* indirect call */
    }

loc_0018E06B:
    eax = MEM32(edi + 0x18D0);
    MEM32(edi + 0x18F0) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x19BC);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    edx = MEM32(ecx + 0x64B38C);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x216);
    esi = edi + 0x10D0;
    PUSH32(esp, ebx);
    MEM32(edi + 0x18F4) = eax;
    PUSH32(esp, 0); sub_001986A0(); /* call 0x001986A0 */

loc_0018E0A3:
    SET_LO8(eax, MEM8(0x64B30C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018E0D0; /* jne: not equal / not zero */

loc_0018E0AC:
    /* cmp ebx, 1 - flags set for next jcc */
    eax = edi + 0x16D0;
    ecx = 0x32;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(ebx, 1)) goto loc_0018E0D0; /* jne: not equal / not zero */

loc_0018E0C0:
    ecx = MEM32(0x73A18C);
    ecx++;
    MEM32(0x73A18C) = ecx;
    MEM16(eax) = LO16(ecx);

loc_0018E0D0:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
