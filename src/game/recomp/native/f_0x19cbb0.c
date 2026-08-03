#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CBB0
 * Original: 0x0019CBB0 - 0x0019CC57 (167 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019CBB0:
    eax = MEM32(ebx + 0x40);
    eax--;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_0019CC25; /* je: equal / zero */

loc_0019CBB7:
    eax--;
    if ((eax == 0)) goto loc_0019CBF6; /* je: equal / zero */

loc_0019CBBA:
    eax--;
    if ((eax != 0)) goto loc_0019CC53; /* jne: not equal / not zero */

loc_0019CBC1:
    eax = MEM32(0x7397B4);
    ecx = MEM32(ebx + 0x34);
    esi = MEM32(ebx + ecx * 4 + 0x17C);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x34);
    PUSH32(esp, 0); sub_0019D7A0(); /* call 0x0019D7A0 */

loc_0019CBDA:
    edx = MEM32(ebx + 0x34);
    eax = MEM32(ebx + edx * 4 + 0x17C);
    MEM32(eax) = 2;
    POP32(esp, edi);
    MEM32(ebx + 0x40) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019CBF6:
    eax = MEM32(ebx + 0x24);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx + 0xC))); }
    esi = MEM32(ebx + 0x14);
    MEM32(ebx + 0x34) = edx;
    esi = MEM32(esi + 0xC);
    ecx = MEM32(0x739B60);
    edx = MEM32(ebx + edx * 4 + 0x17C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019CC1A:
    MEM32(ebx + 0x40) = 3;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019CC25:
    ecx = MEM32(0x7397B4);
    edx = MEM32(ecx + 0x58);
    eax = MEM32(ebx + 0x54);
    eax = eax << 4;
    eax = eax + edx;
    MEM32(ebx + 0x14) = eax;
    ecx = MEM32(0x739B60);
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0019CC4C:
    MEM32(ebx + 0x40) = 2;

loc_0019CC53:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
