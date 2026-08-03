#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB5B0
 * Original: 0x001CB5B0 - 0x001CB6B8 (264 bytes, 68 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB5B0:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM8(esi + 0x195) = LO8(ebx);
    MEM8(esi + 0x196) = LO8(ebx);
    MEM8(esi + 0x18C) = LO8(ebx);
    MEM8(esi + 0x18D) = LO8(ebx);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CB5D8:
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x194));
    esp = esp + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001CB6AB; /* jne: not equal / not zero */

loc_001CB5EB:
    if (CMP_EQ(ebp, 9)) goto loc_001CB5F7; /* je: equal / zero */

loc_001CB5F0:
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001CB5F7:
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_001CB607:
    SET_LO8(ecx, MEM8(esi));
    esp = esp + 0xC;
    /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001CB622; /* je: equal / zero */

loc_001CB612:
    if (CMP_NE(MEM8(eax), 0x2F)) goto loc_001CB61A; /* jne: not equal / not zero */

loc_001CB617:
    MEM8(eax) = 0x5C;

loc_001CB61A:
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_001CB612; /* jne: not equal / not zero */

loc_001CB622:
    eax = MEM32(esi + 0x138);
    edx = MEM32(esi + 0x134);
    ecx = MEM32(esi + 0x130);
    MEM32(esi + 0x11C) = eax;
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    eax = MEM32(esi + 0x16C);
    MEM32(esi + 0x114) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(esi + 0x104) = 1;
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x118) = ecx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x128) = edx;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x124) = 1;
    PUSH32(esp, 0); sub_001F9350(); /* call 0x001F9350 */

loc_001CB697:
    esp = esp + 8;
    MEM32(esi + 0x170) = 1;
    MEM8(esi + 0x194) = 1;

loc_001CB6AB:
    eax = 0; /* xor self */
    /* cmp ebp, 3 - flags set for next jcc */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(ebp, 3)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
