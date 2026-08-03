#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00160690
 * Original: 0x00160690 - 0x00160707 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160690:
    ecx = MEM32(0x47A134);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ecx + 0x28D0;
    PUSH32(esp, esi);
    esi = ecx + 0x2A80;
    ecx = MEM32(eax + 0xA0);
    /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA4);
    if (CMP_NE(ecx, ebx)) goto loc_001606BF; /* jne: not equal / not zero */

loc_001606B9:
    if (CMP_EQ(edi, MEM32(esp + 0x14))) goto loc_00160703; /* je: equal / zero */

loc_001606BF:
    edx = MEM32(esi + 0xA0);
    /* cmp edx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0xA4);
    if (CMP_NE(edx, ebx)) goto loc_001606D6; /* jne: not equal / not zero */

loc_001606D0:
    if (CMP_EQ(ebp, MEM32(esp + 0x18))) goto loc_001606F9; /* je: equal / zero */

loc_001606D6:
    ecx = ecx | edi;
    if ((ecx != 0)) goto loc_001606DE; /* jne: not equal / not zero */

loc_001606DA:
    esi = eax;
    goto loc_001606E2;

loc_001606DE:
    edx = edx | ebp;
    if ((edx != 0)) goto loc_00160700; /* jne: not equal / not zero */

loc_001606E2:
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xA4) = eax;
    eax = esi;
    MEM32(esi + 0xA0) = ebx;
    PUSH32(esp, 0); sub_00160840(); /* call 0x00160840 */

loc_001606F9:
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00160700:
    eax = 0; /* xor self */
    POP32(esp, ebp);

loc_00160703:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
