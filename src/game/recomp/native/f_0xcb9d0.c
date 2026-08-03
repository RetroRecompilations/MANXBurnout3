#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000CB9D0
 * Original: 0x000CB9D0 - 0x000CBA7A (170 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB9D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB9D0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebp + 1;
    if (CMP_EQ(eax, ebx)) goto loc_000CB9F5; /* je: equal / zero */

loc_000CB9E6:
    PUSH32(esp, 0x557A20);
    ecx = edi;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000CB9F2:
    MEM32(esi + 0xC) = ebx;

loc_000CB9F5:
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_000CBA0B; /* je: equal / zero */

loc_000CB9FC:
    PUSH32(esp, 0x557A20);
    ecx = edi;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000CBA08:
    MEM32(esi + 0x10) = ebx;

loc_000CBA0B:
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_000CBA21; /* je: equal / zero */

loc_000CBA12:
    PUSH32(esp, 0x557A20);
    ecx = edi;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000CBA1E:
    MEM32(esi + 0x14) = ebx;

loc_000CBA21:
    eax = MEM32(esi + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_000CBA37; /* je: equal / zero */

loc_000CBA28:
    PUSH32(esp, 0x557A20);
    ecx = ebp;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000CBA34:
    MEM32(esi + 0x18) = ebx;

loc_000CBA37:
    eax = MEM32(esi + 0x1C);
    if (CMP_EQ(eax, ebx)) goto loc_000CBA4D; /* je: equal / zero */

loc_000CBA3E:
    PUSH32(esp, 0x557A20);
    ecx = ebp;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000CBA4A:
    MEM32(esi + 0x1C) = ebx;

loc_000CBA4D:
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(eax, ebx)) goto loc_000CBA63; /* je: equal / zero */

loc_000CBA54:
    PUSH32(esp, 0x557A20);
    ecx = ebp;
    PUSH32(esp, 0); sub_001C68C0(); /* call 0x001C68C0 */

loc_000CBA60:
    MEM32(esi + 0x20) = ebx;

loc_000CBA63:
    eax = MEM32(esi + 0x24);
    if (CMP_EQ(eax, ebx)) goto loc_000CBA72; /* je: equal / zero */

loc_000CBA6A:
    PUSH32(esp, 0); sub_001C1610(); /* call 0x001C1610 */

loc_000CBA6F:
    MEM32(esi + 0x24) = ebx;

loc_000CBA72:
    POP32(esp, edi);
    MEM8(esi + 0xA) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
