#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00212910
 * Original: 0x00212910 - 0x002129E4 (212 bytes, 84 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00212910:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_002129E1; /* je: equal / zero */

loc_00212920:
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021F630(); /* call 0x0021F630 */

loc_00212929:
    ecx = MEM32(esi + 0x68);
    esp = esp + 4;
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(ecx, ebx)) goto loc_002129B2; /* je: equal / zero */

loc_00212936:
    if (CMP_BE(eax, ecx)) goto loc_002129B2; /* jbe: below or equal (unsigned <=) */

loc_0021293A:
    PUSH32(esp, edi);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00211580(); /* call 0x00211580 */

loc_00212945:
    esp = esp + 8;
    /* cmp eax, ebx - flags set for next jcc */
    MEM8(edi) = LO8(ebx);
    MEM32(esi + 0x68) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_002129B1; /* je: equal / zero */

loc_00212951:
    ecx = MEM32(eax);
    edi = MEM32(ecx + 0x100);
    if (CMP_EQ(edi, ebx)) goto loc_002129A8; /* je: equal / zero */

loc_0021295D:
    eax = MEM32(edi);
    MEM32(eax + 0xF8) = MEM32(eax + 0xF8) | 0x4000000;
    eax = MEM32(esi + 0x58);
    if (CMP_EQ(eax, ebx)) goto loc_0021298D; /* je: equal / zero */

loc_00212970:
    edx = MEM32(esi + 0x5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4000000);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021297D:
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00211EF0(); /* call 0x00211EF0 */

loc_0021298A:
    esp = esp + 0x24;

loc_0021298D:
    eax = MEM32(esi + 0x28);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x40) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_002129A8; /* je: equal / zero */

loc_0021299B:
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002129A5:
    esp = esp + 0x10;

loc_002129A8:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00210E70(); /* call 0x00210E70 */

loc_002129AE:
    esp = esp + 4;

loc_002129B1:
    POP32(esp, edi);

loc_002129B2:
    ecx = MEM32(esi + 0xBC);
    if (CMP_EQ(ecx, ebx)) goto loc_002129E1; /* je: equal / zero */

loc_002129BC:
    eax = MEM32(esi + 0x30);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x10) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_002129DB; /* je: equal / zero */

loc_002129C6:
    edx = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002129D5:
    esp = esp + 0x10;
    MEM32(esi + 0x30) = ebx;

loc_002129DB:
    MEM32(esi + 0xBC) = ebx;

loc_002129E1:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
