#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9B30
 * Original: 0x001C9B30 - 0x001C9C2C (252 bytes, 89 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9B30:
    MEM32(edi + 0x14) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(edi + 0x38) = ecx;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001C9B50:
    esp = esp + 8;
    PUSH32(esp, eax);
    MEM32(edi + 0x18) = eax;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = edi + 0x1C;
    eax = 0x10;
    ebx = 0x3B0;
    PUSH32(esp, 0); sub_001BEF30(); /* call 0x001BEF30 */

loc_001C9B6F:
    edx = 0; /* xor self */
    MEM32(edi + 0x30) = esi;
    MEM32(edi + 0x34) = edx;
    eax = MEM32(edi + 0x14);
    ebx = 0; /* xor self */
    if (CMP_LE(eax, edx)) goto loc_001C9BF3; /* jle: less or equal (signed <=) */

loc_001C9B80:
    esi = MEM32(0x3F7B80);
    PUSH32(esp, ebp);

loc_001C9B87:
    ecx = MEM32(edi + 0x30);
    eax = MEM32(ecx + 0x10);
    if (CMP_NE(eax, edx)) goto loc_001C9B95; /* jne: not equal / not zero */

loc_001C9B91:
    eax = 0; /* xor self */
    goto loc_001C9BB6;

loc_001C9B95:
    ebp = MEM32(eax);
    MEM32(ecx + 0x10) = ebp;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edx)) goto loc_001C9BA3; /* je: equal / zero */

loc_001C9BA0:
    MEM32(ecx + 4) = edx;

loc_001C9BA3:
    ecx = MEM32(edi + 0x34);
    if (CMP_NE(ecx, edx)) goto loc_001C9BAE; /* jne: not equal / not zero */

loc_001C9BAA:
    MEM32(eax) = edx;
    goto loc_001C9BB3;

loc_001C9BAE:
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;

loc_001C9BB3:
    MEM32(edi + 0x34) = eax;

loc_001C9BB6:
    /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    if (CMP_EQ(esi, 0xFFFFFFFFu)) esi = edx; /* cmove */
    MEM32(eax + 0x3A4) = edx;
    MEM32(eax + 0x3A0) = edx;
    MEM8(eax + 0x3B1) = LO8(edx);
    MEM8(eax + 0x3B0) = LO8(edx);
    MEM32(eax + 0x3AC) = 1;
    MEM8(eax + 0x3B3) = LO8(edx);
    eax = MEM32(edi + 0x14);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_001C9B87; /* jl: less (signed <) */

loc_001C9BEC:
    MEM32(0x3F7B80) = esi;
    POP32(esp, ebp);

loc_001C9BF3:
    esi = MEM32(edi + 0x34);
    if (CMP_EQ(esi, edx)) goto loc_001C9C1E; /* je: equal / zero */

loc_001C9BFA:
    /* cmp MEM32(esi), edx - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(MEM32(esi), edx)) goto loc_001C9C06; /* je: equal / zero */

loc_001C9C00:
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), edx)) goto loc_001C9C00; /* jne: not equal / not zero */

loc_001C9C06:
    ecx = MEM32(edi + 0x30);
    ecx = MEM32(ecx + 0x10);
    /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (CMP_EQ(ecx, edx)) goto loc_001C9C15; /* je: equal / zero */

loc_001C9C12:
    MEM32(ecx + 4) = eax;

loc_001C9C15:
    eax = MEM32(edi + 0x30);
    MEM32(eax + 0x10) = esi;
    MEM32(edi + 0x34) = edx;

loc_001C9C1E:
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F6C40(); /* call 0x001F6C40 */

loc_001C9C24:
    esp = esp + 4;
    POP32(esp, esi);
    MEM32(edi) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
