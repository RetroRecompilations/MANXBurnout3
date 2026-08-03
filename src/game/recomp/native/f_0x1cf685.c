#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF685
 * Original: 0x001CF685 - 0x001CF705 (128 bytes, 49 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF685(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CF685:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x10118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_001CF69A:
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001CF6A4; /* jne: not equal / not zero */

loc_001CF6A0:
    PUSH32(esp, 8);
    goto loc_001CF6D2;

loc_001CF6A4:
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    if (CMP_EQ(MEM32(esi + 8), ebx)) goto loc_001CF6E7; /* je: equal / zero */

loc_001CF6B3:
    eax = 0; /* xor self */
    ecx = esi + 0x5C;

loc_001CF6B8:
    edx = MEM32(ecx);
    if (TEST_Z(edx, edx)) goto loc_001CF6D0; /* je: equal / zero */

loc_001CF6BE:
    if (CMP_EQ(ebx, edx)) goto loc_001CF6CB; /* je: equal / zero */

loc_001CF6C2:
    eax++;
    ecx = ecx + 4;
    if (CMP_B(eax, 0x10)) goto loc_001CF6B8; /* jb: below (unsigned <) */

loc_001CF6CB:
    if (CMP_B(eax, 0x40)) goto loc_001CF6DC; /* jb: below (unsigned <) */

loc_001CF6D0:
    PUSH32(esp, 5);

loc_001CF6D2:
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CF6D7:
    eax = eax | 0xFFFFFFFFu;
    goto loc_001CF6FF;

loc_001CF6DC:
    eax = eax << 4;
    eax = eax + MEM32(0x36B7D4);
    goto loc_001CF6EC;

loc_001CF6E7:
    eax = MEM32(0x36B7D0);

loc_001CF6EC:
    MEM32(edi + 4) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0); sub_001CF537(); /* call 0x001CF537 */

loc_001CF6FD:
    eax = edi;

loc_001CF6FF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
