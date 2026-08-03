#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4B60
 * Original: 0x001B4B60 - 0x001B4CEE (398 bytes, 119 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B4B60:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3AADC4);
    edi = eax;
    esi = ecx;
    PUSH32(esp, 0); sub_001CFE6F(); /* call 0x001CFE6F */

loc_001B4B71:
    ecx = eax;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    /* test edx, edx - flags set for next jcc */
    edx = MEM32(esi + 0xBFC);
    if (TEST_Z(edx, edx)) goto loc_001B4BA2; /* je: equal / zero */

loc_001B4B83:
    eax = 0xD;
    MEM32(edx + 0x134) = eax;
    ecx = MEM32(esi + 0xBFC);
    POP32(esp, edi);
    MEM32(ecx + 0x130) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001B4BA2:
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(edx + 0x130) = 8;
    eax = MEM32(esi + 0xBFC);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_001B4CE3; /* je: equal / zero */

loc_001B4BC3:
    if (TEST_Z(ebx, ebx)) goto loc_001B4BF6; /* je: equal / zero */

loc_001B4BC7:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4BD6:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001B4BF6; /* jne: not equal / not zero */

loc_001B4BDB:
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B4BE0:
    ecx = MEM32(esi + 0xBFC);
    POP32(esp, edi);
    MEM32(ecx + 0x134) = eax;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001B4BF6:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x148) = 0;
    eax = MEM32(esi + 0xBFC);
    MEM32(eax + 0x140) = ebx;
    ecx = MEM32(esi + 0xBFC);
    PUSH32(esp, 0);
    MEM32(ecx + 0x144) = 0;
    edx = MEM32(esi + 0xBFC);
    eax = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4C35:
    ecx = MEM32(esi + 0xBFC);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D118A(); /* call 0x001D118A */

loc_001B4C43:
    eax = MEM32(esi + 0xBFC);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4C57:
    eax = MEM32(esi + 0xBFC);
    edx = eax + 0x138;
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D10B4(); /* call 0x001D10B4 */

loc_001B4C77:
    edi = eax;
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4C7E:
    if (TEST_Z(edi, edi)) goto loc_001B4CA0; /* je: equal / zero */

loc_001B4C82:
    ecx = MEM32(esi + 0xBFC);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4C95:
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001B4CA0:
    if (CMP_EQ(eax, 0x3E5)) goto loc_001B4CD3; /* je: equal / zero */

loc_001B4CA7:
    if (TEST_Z(eax, eax)) goto loc_001B4CD3; /* je: equal / zero */

loc_001B4CAB:
    ecx = MEM32(esi + 0xBFC);
    eax = 0xD;
    MEM32(ecx + 0x134) = eax;
    edx = MEM32(esi + 0xBFC);
    POP32(esp, edi);
    MEM32(edx + 0x130) = eax;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001B4CD3:
    eax = MEM32(esi + 0xBFC);
    MEM32(eax + 0x130) = 8;

loc_001B4CE3:
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
