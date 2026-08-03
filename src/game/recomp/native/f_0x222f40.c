#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00222F40
 * Original: 0x00222F40 - 0x0022305D (285 bytes, 87 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00222F40:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_00222F59; /* je: equal / zero */

loc_00222F4E:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002209B0(); /* call 0x002209B0 */

loc_00222F54:
    esp = esp + 4;
    MEM32(esi) = ebp;

loc_00222F59:
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_00222F6A; /* je: equal / zero */

loc_00222F60:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00222F64:
    esp = esp + 4;
    MEM32(esi + 4) = ebp;

loc_00222F6A:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    /* cmp ebx, ebp - flags set for next jcc */
    MEM32(esi + 0x118) = ebp;
    MEM32(esi + 0x11C) = 1;
    if (CMP_NE(ebx, ebp)) goto loc_00222F9E; /* jne: not equal / not zero */

loc_00222F83:
    eax = MEM32(esi + 0x120);
    if (CMP_EQ(eax, ebp)) goto loc_00222FE0; /* je: equal / zero */

loc_00222F8D:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_00222F93:
    esp = esp + 4;
    MEM32(esi + 0x120) = ebp;
    goto loc_00222FE0;

loc_00222F9E:
    if (CMP_NE(MEM32(esi + 0x120), ebp)) goto loc_00222FE0; /* jne: not equal / not zero */

loc_00222FA6:
    PUSH32(esp, edi);
    PUSH32(esp, 0x88C0);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00222FB1:
    edi = eax;
    esp = esp + 4;
    /* cmp edi, ebp - flags set for next jcc */
    MEM32(esi + 0x120) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_00222FDF; /* je: equal / zero */

loc_00222FC0:
    eax = 0; /* xor self */
    ecx = 0x2230;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x120);
    eax = eax + 0x86BC;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00222EB0(); /* call 0x00222EB0 */

loc_00222FDC:
    esp = esp + 0xC;

loc_00222FDF:
    POP32(esp, edi);

loc_00222FE0:
    eax = MEM32(esi + 0x120);
    if (CMP_EQ(eax, ebp)) goto loc_0022304C; /* je: equal / zero */

loc_00222FEA:
    MEM32(eax + 0x81B4) = 0x10;
    ecx = 0; /* xor self */
    goto loc_00223000;

    /* nop */
    /* nop */

loc_00223000:
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 0x30);
    MEM8(eax + ecx + 0x81B8) = LO8(edx);
    edx = MEM32(eax + 0x81B4);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_00223000; /* jl: less (signed <) */

loc_00223017:
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x4008) = ebp;
    MEM32(eax + 0x400C) = ebp;
    MEM32(eax + 0x4010) = ebp;
    MEM32(eax + 0x8018) = ebp;
    MEM32(eax + 0x801C) = ebp;
    MEM32(eax + 0x8024) = ebp;
    MEM32(eax + 0x80A8) = ebp;
    MEM32(eax + 0x812C) = ebp;

loc_0022304C:
    /* cmp ebx, ebp - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(ebx, ebp)) { sub_0022305D(); return; } /* je: equal / zero */

loc_00223051:
    if (CMP_NE(eax, ebp)) { sub_0022305D(); return; } /* jne: not equal / not zero */

loc_00223055:
    POP32(esp, esi);
    eax = 0xFFFFFFF8u;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
