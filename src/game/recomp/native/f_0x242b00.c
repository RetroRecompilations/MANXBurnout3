#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242B00
 * Original: 0x00242B00 - 0x00242BD3 (211 bytes, 82 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B00:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(esi, 0xFFFFFFFEu)) goto loc_00242B7B; /* jne: not equal / not zero */

loc_00242B10:
    eax = MEM32(ebx + 0x10);
    ebp = 0; /* xor self */
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_00242B96; /* jle: less or equal (signed <=) */

loc_00242B1D:
    PUSH32(esp, edi);
    edi = edi;

loc_00242B20:
    esi = MEM32(ebx + 0x14);
    eax = MEM32(esi + ebp + 0x20);
    esi = esi + ebp;
    if (TEST_Z(eax, eax)) goto loc_00242B62; /* je: equal / zero */

loc_00242B2D:
    eax = MEM32(ebx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3C60D4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243170(); /* call 0x00243170 */

loc_00242B3D:
    ecx = MEM32(ebx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 8), _icall_esp); /* indirect call */
    }

loc_00242B4A:
    esp = esp + 0x1C;
    eax = 0; /* xor self */
    ecx = 0x23;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x1C) = 0x80;
    MEM32(esi + 0x20) = eax;

loc_00242B62:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x10);
    eax++;
    ebp = ebp + 0x8C;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00242B20; /* jl: less (signed <) */

loc_00242B78:
    POP32(esp, edi);
    goto loc_00242B96;

loc_00242B7B:
    if (TEST_S(esi, esi)) goto loc_00242B96; /* jl: less (signed <) */

loc_00242B7F:
    if (CMP_GE(esi, MEM32(ebx + 0x10))) goto loc_00242B96; /* jge: greater or equal (signed >=) */

loc_00242B84:
    eax = MEM32(ebx + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    esi = esi + eax;
    eax = ebx;
    PUSH32(esp, 0); sub_00242900(); /* call 0x00242900 */

loc_00242B96:
    eax = MEM32(ebx + 0x10);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00242BBA; /* jle: less or equal (signed <=) */

loc_00242B9F:
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0x10);
    eax = eax + 0x20;

loc_00242BA8:
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00242BAE; /* je: equal / zero */

loc_00242BAD:
    edx++;

loc_00242BAE:
    eax = eax + 0x8C;
    ecx--;
    if ((ecx != 0)) goto loc_00242BA8; /* jne: not equal / not zero */

loc_00242BB6:
    if (TEST_NZ(edx, edx)) goto loc_00242BCF; /* jne: not equal / not zero */

loc_00242BBA:
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_00242BCF; /* je: equal / zero */

loc_00242BC0:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243150(); /* call 0x00243150 */

loc_00242BC6:
    esp = esp + 4;
    MEM32(ebx) = 0;

loc_00242BCF:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
