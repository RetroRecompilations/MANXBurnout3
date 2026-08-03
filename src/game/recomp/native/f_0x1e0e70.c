#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0E70
 * Original: 0x001E0E70 - 0x001E0FAB (315 bytes, 114 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0E70:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x3C0B60);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001E0E88; /* jne: not equal / not zero */

loc_001E0E80:
    MEM32(esp + 0x18) = 0;

loc_001E0E88:
    if (TEST_NZ(edi, edi)) goto loc_001E0E91; /* jne: not equal / not zero */

loc_001E0E8C:
    edi = 4;

loc_001E0E91:
    if (TEST_NZ(ebx, ebx)) goto loc_001E0EDB; /* jne: not equal / not zero */

loc_001E0E95:
    eax = MEM32(0x41AC60);
    if (TEST_Z(eax, eax)) goto loc_001E0EB2; /* je: equal / zero */

loc_001E0E9E:
    ecx = MEM32(esp + 0x1C);
    ecx = ecx & 0xFF0000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E4), _icall_esp); /* indirect call */
    }

loc_001E0EB0:
    goto loc_001E0EC5;

loc_001E0EB2:
    edx = MEM32(esp + 0x1C);
    edx = edx & 0xFF0000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001E0EC5:
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_001E0ED2; /* jne: not equal / not zero */

loc_001E0ECE:
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001E0ED2:
    MEM32(ebx + 0x18) = 2;
    goto loc_001E0EE2;

loc_001E0EDB:
    MEM32(ebx + 0x18) = 3;

loc_001E0EE2:
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = edi + -1;
    ecx = ~ecx;
    eax = eax + edi + -1;
    eax = eax & ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = ecx + 7;
    PUSH32(esp, esi);
    ebp = ebp >> 3;
    /* test edx, edx - flags set for next jcc */
    esi = ebx + 0x10;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 8) = ebp;
    MEM32(esi) = esi;
    MEM32(ebx + 0x14) = esi;
    if (CMP_BE(edx & edx, 0)) goto loc_001E0F74; /* jbe: below or equal (unsigned <=) */

loc_001E0F18:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + ebp;
    edx = eax + edi + 7;
    MEM32(esp + 0x10) = edx;

loc_001E0F25:
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001E0F35:
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_001E0F9C; /* je: equal / zero */

loc_001E0F3E:
    MEM32(edx + 4) = 0;
    MEM32(edx) = 0;
    eax = MEM32(esi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edx;
    MEM32(esi) = edx;
    ecx = ebp;
    edi = edx + 8;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_001E0F25; /* jne: not equal / not zero */

loc_001E0F74:
    ecx = MEM32(0x41AC30);
    eax = ebx + 0x1C;
    MEM32(eax) = ecx;
    MEM32(ebx + 0x20) = 0x41AC30;
    edx = MEM32(0x41AC30);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 4) = eax;
    MEM32(0x41AC30) = eax;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001E0F9C:
    edi = ebx;
    PUSH32(esp, 0); sub_001E0980(); /* call 0x001E0980 */

loc_001E0FA3:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
