#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C2DF0
 * Original: 0x000C2DF0 - 0x000C2EC3 (211 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000C2DF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x250));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C2EB3; /* jne: not equal / not zero */

loc_000C2E0D:
    edx = 0x4AE20C;
    PUSH32(esp, 0); sub_00017750(); /* call 0x00017750 */

loc_000C2E17:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C2EB3; /* jne: not equal / not zero */

loc_000C2E1F:
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_000C2E2B; /* jne: not equal / not zero */

loc_000C2E26:
    PUSH32(esp, 0); sub_000C32A0(); /* call 0x000C32A0 */

loc_000C2E2B:
    SET_LO8(ebx, 0); /* xor self */
    MEM8(esp + 0x10) = LO8(ebx);
    edi = 0x4AED45;
    ebp = esi + 0x18;
    /* nop */

loc_000C2E40:
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(edx, MEM8(edi + 2));
    eax = SX8(LO8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    eax = eax + 0x4AE724;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000C2E96; /* je: equal / zero */

loc_000C2E57:
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    MEM8(esp + 0x14) = LO8(ecx);
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_000C2E96; /* je: equal / zero */

loc_000C2E60:
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0x11C);
    ecx = MEM32(ebp);
    /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    if (TEST_NZ(ecx, ecx)) goto loc_000C2E8D; /* jne: not equal / not zero */

loc_000C2E76:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C2E96; /* je: equal / zero */

loc_000C2E7A:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esi;
    PUSH32(esp, 0); sub_000C2FC0(); /* call 0x000C2FC0 */

loc_000C2E8B:
    goto loc_000C2E96;

loc_000C2E8D:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C2E96; /* jne: not equal / not zero */

loc_000C2E91:
    PUSH32(esp, 0); sub_000C3260(); /* call 0x000C3260 */

loc_000C2E96:
    SET_LO8(ebx, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) + 1);
    ebp = ebp + 4;
    edi++;
    /* cmp LO8(ebx), 2 - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(ebx);
    if (CMP_L(LO8(ebx), 2)) goto loc_000C2E40; /* jl: less (signed <) */

loc_000C2EA9:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000C2EB3:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000C2ED0(); /* call 0x000C2ED0 */

loc_000C2EB9:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
