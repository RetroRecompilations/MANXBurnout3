#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4A30
 * Original: 0x001B4A30 - 0x001B4B5B (299 bytes, 89 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B4A30:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xBFC);
    MEM32(esp + 8) = 0xFFFFFFFFu;
    eax = MEM32(eax);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001B4B50; /* je: equal / zero */

loc_001B4A4F:
    if (CMP_EQ(ecx, ebx)) goto loc_001B4A7C; /* je: equal / zero */

loc_001B4A53:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4A5C:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001B4A7C; /* jne: not equal / not zero */

loc_001B4A61:
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B4A66:
    ecx = MEM32(esi + 0xBFC);
    POP32(esp, esi);
    MEM32(ecx + 0x134) = eax;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001B4A7C:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x148) = ebx;
    eax = MEM32(esi + 0xBFC);
    MEM32(eax + 0x140) = ebx;
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x144) = ebx;
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x130) = 7;
    eax = MEM32(esi + 0xBFC);
    PUSH32(esp, edi);
    ecx = eax + 0x138;
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0FC7(); /* call 0x001D0FC7 */

loc_001B4AD5:
    edi = eax;
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4ADC:
    /* cmp edi, ebx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(edi, ebx)) goto loc_001B4B0D; /* je: equal / zero */

loc_001B4AE1:
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0xBFC);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4AF6:
    ecx = MEM32(esi + 0xBFC);
    POP32(esp, esi);
    MEM32(ecx + 0x130) = ebx;
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001B4B0D:
    if (CMP_EQ(eax, 0x3E5)) goto loc_001B4B40; /* je: equal / zero */

loc_001B4B14:
    if (CMP_EQ(eax, ebx)) goto loc_001B4B40; /* je: equal / zero */

loc_001B4B18:
    edx = MEM32(esi + 0xBFC);
    eax = 0xD;
    MEM32(edx + 0x134) = eax;
    ecx = MEM32(esi + 0xBFC);
    POP32(esp, esi);
    MEM32(ecx + 0x130) = eax;
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001B4B40:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x130) = 7;

loc_001B4B50:
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
