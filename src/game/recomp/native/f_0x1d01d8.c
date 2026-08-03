#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D01D8
 * Original: 0x001D01D8 - 0x001D0256 (126 bytes, 46 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D01D8(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D01D8:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    if (CMP_AE(eax, MEM32(esi + 8))) goto loc_001D024F; /* jae: above or equal (unsigned >=) */

loc_001D01E8:
    PUSH32(esp, ebx);
    eax++;
    PUSH32(esp, ebx);
    eax = eax << 9;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001D01F7:
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    PUSH32(esp, 0x21371);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0); sub_001D0134(); /* call 0x001D0134 */

loc_001D020B:
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_001D024F; /* je: equal / zero */

loc_001D0211:
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x68);
    POP32(esp, ecx);
    edi = 0x3BFFD8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x20);
    eax = esi + 0xC;
    PUSH32(esp, 0x3C0138);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002449B6(); /* call 0x002449B6 */

loc_001D0234:
    eax = MEM32(0x3BFFDC);
    MEM32(esi) = eax;
    eax = MEM32(0x3BFFE0);
    MEM32(esi + 4) = eax;
    eax = MEM32(0x3C0134);
    esp = esp + 0xC;
    MEM32(esi + 8) = eax;
    POP32(esp, edi);

loc_001D024F:
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
