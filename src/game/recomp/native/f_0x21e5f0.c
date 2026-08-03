#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021E5F0
 * Original: 0x0021E5F0 - 0x0021E6D8 (232 bytes, 76 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021E5F0:
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0021E60C; /* je: equal / zero */

loc_0021E602:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0021E606:
    esp = esp + 4;
    MEM32(esi + 8) = edi;

loc_0021E60C:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44495343);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00221B40(); /* call 0x00221B40 */

loc_0021E622:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00221570(); /* call 0x00221570 */

loc_0021E62B:
    eax = MEM32(esi + 0x10);
    esp = esp + 0x18;
    if (CMP_NE(eax, 5)) goto loc_0021E66E; /* jne: not equal / not zero */

loc_0021E636:
    eax = MEM32(esi + 0x8E4);
    /* cmp eax, edi - flags set for next jcc */
    ecx = 6;
    MEM32(esi + 0x10) = ecx;
    if (CMP_EQ(eax, edi)) goto loc_0021E66E; /* je: equal / zero */

loc_0021E648:
    edx = MEM32(esi + 0x8E0);
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 0x636F6E6E;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021E66B:
    esp = esp + 0xC;

loc_0021E66E:
    if (CMP_EQ(MEM32(esi + 0x10), edi)) goto loc_0021E6A6; /* je: equal / zero */

loc_0021E673:
    eax = MEM32(esi + 0x8E4);
    /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x10) = edi;
    if (CMP_EQ(eax, edi)) goto loc_0021E6A6; /* je: equal / zero */

loc_0021E680:
    edx = MEM32(esi + 0x8E0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 0x636F6E6E;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021E6A3:
    esp = esp + 0xC;

loc_0021E6A6:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021DE90(); /* call 0x0021DE90 */

loc_0021E6AC:
    eax = MEM32(esi + 0xD64);
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_0021E6C2; /* je: equal / zero */

loc_0021E6B9:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225980(); /* call 0x00225980 */

loc_0021E6BF:
    esp = esp + 4;

loc_0021E6C2:
    if (CMP_NE(MEM32(esi + 0x1A8), edi)) goto loc_0021E6D0; /* jne: not equal / not zero */

loc_0021E6CA:
    MEM32(esi + 0x8E4) = edi;

loc_0021E6D0:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
