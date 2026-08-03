#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0C95
 * Original: 0x001D0C95 - 0x001D0D9F (266 bytes, 98 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C95(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0C95:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x104;
    eax = MEM32(ebp + 8);
    edx = ebp + -260;
    edx = edx - eax;

loc_001D0CA9:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0CA9; /* jne: not equal / not zero */

loc_001D0CB3:
    eax = ebp + -260;
    edx = eax + 1;

loc_001D0CBC:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D0CBC; /* jne: not equal / not zero */

loc_001D0CC3:
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = 0x36BCA0;
    ecx = ebp + ebx + -260;
    PUSH32(esp, edi);
    ecx = ecx - eax;

loc_001D0CD8:
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001D0CD8; /* jne: not equal / not zero */

loc_001D0CE2:
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1F4E(); /* call 0x001D1F4E */

loc_001D0CF2:
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_001D0D96; /* je: equal / zero */

loc_001D0CFD:
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D0855(); /* call 0x001D0855 */

loc_001D0D07:
    if (TEST_NZ(eax, eax)) goto loc_001D0D4B; /* jne: not equal / not zero */

loc_001D0D0B:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D205B(); /* call 0x001D205B */

loc_001D0D12:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_001D0D3B; /* je: equal / zero */

loc_001D0D19:
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D0855(); /* call 0x001D0855 */

loc_001D0D23:
    if (TEST_NZ(eax, eax)) goto loc_001D0D35; /* jne: not equal / not zero */

loc_001D0D27:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D205B(); /* call 0x001D205B */

loc_001D0D2E:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001D0D19; /* jne: not equal / not zero */

loc_001D0D35:
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_001D0D4B; /* jne: not equal / not zero */

loc_001D0D3B:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0D41:
    PUSH32(esp, 0x12);
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D0D4B:
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_001D0D96; /* je: equal / zero */

loc_001D0D50:
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x110);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_001D0D5F:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001D0D86; /* je: equal / zero */

loc_001D0D65:
    PUSH32(esp, 0x104);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0xC;
    PUSH32(esp, eax);
    MEM32(esi) = 0x53425645;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0); sub_001D3C56(); /* call 0x001D3C56 */

loc_001D0D82:
    edi = esi;
    goto loc_001D0D96;

loc_001D0D86:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0D8C:
    PUSH32(esp, 8);
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D0D96:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
