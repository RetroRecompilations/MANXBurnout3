#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B2FF0
 * Original: 0x001B2FF0 - 0x001B312A (314 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2FF0:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x14;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_001B2F90(); /* call 0x001B2F90 */

loc_001B3004:
    if (CMP_A(eax, 4)) goto loc_001B311D; /* ja: above (unsigned >) */

loc_001B300D:
    /* nop */

loc_001B3010:
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1B3134)); return; /* indirect tail jmp */

    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001B311D; /* je: equal / zero */

loc_001B3023:
    SET_LO16(edx, MEM16(eax));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(edx);
    if (CMP_EQ(MEM16(eax), 0)) goto loc_001B30F1; /* je: equal / zero */

loc_001B3037:
    edx = ecx;
    edx = edx - eax;
    goto loc_001B3040;

    /* nop */

loc_001B3040:
    SET_LO16(esi, MEM16(eax + 2));
    eax = eax + 2;
    MEM16(edx + eax) = LO16(esi);
    if (CMP_NE(MEM16(eax), 0)) goto loc_001B3040; /* jne: not equal / not zero */

loc_001B3051:
    goto loc_001B30F1;

    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_001B311D; /* je: equal / zero */

loc_001B3062:
    SET_LO16(edx, MEM16(eax));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(edx);
    if (CMP_EQ(MEM16(eax), 0)) goto loc_001B30F1; /* je: equal / zero */

loc_001B3072:
    edx = ecx;
    edx = edx - eax;
    goto loc_001B3080;

    /* nop */
    /* nop */

loc_001B3080:
    SET_LO16(esi, MEM16(eax + 2));
    eax = eax + 2;
    MEM16(edx + eax) = LO16(esi);
    if (CMP_NE(MEM16(eax), 0)) goto loc_001B3080; /* jne: not equal / not zero */

loc_001B3091:
    goto loc_001B30F1;

    if (TEST_Z(ebp, ebp)) goto loc_001B311D; /* je: equal / zero */

loc_001B309B:
    SET_LO16(edx, MEM16(ebp));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(edx);
    /* cmp MEM16(ebp), 0 - flags set for next jcc */
    eax = ebp;
    if (CMP_EQ(MEM16(ebp), 0)) goto loc_001B30F1; /* je: equal / zero */

loc_001B30AF:
    edx = ecx;
    edx = edx - ebp;

loc_001B30B3:
    SET_LO16(esi, MEM16(eax + 2));
    eax = eax + 2;
    MEM16(edx + eax) = LO16(esi);
    if (CMP_NE(MEM16(eax), 0)) goto loc_001B30B3; /* jne: not equal / not zero */

loc_001B30C4:
    goto loc_001B30F1;

    if (TEST_Z(ebx, ebx)) goto loc_001B311D; /* je: equal / zero */

loc_001B30CA:
    SET_LO16(edx, MEM16(ebx));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(edx);
    /* cmp MEM16(ebx), 0 - flags set for next jcc */
    eax = ebx;
    if (CMP_EQ(MEM16(ebx), 0)) goto loc_001B30F1; /* je: equal / zero */

loc_001B30DC:
    edx = ecx;
    edx = edx - ebx;

loc_001B30E0:
    SET_LO16(esi, MEM16(eax + 2));
    eax = eax + 2;
    MEM16(edx + eax) = LO16(esi);
    if (CMP_NE(MEM16(eax), 0)) goto loc_001B30E0; /* jne: not equal / not zero */

loc_001B30F1:
    eax = 0; /* xor self */
    if (CMP_EQ(MEM16(ecx), LO16(eax))) goto loc_001B3100; /* je: equal / zero */

loc_001B30F8:
    eax++;
    if (CMP_NE(MEM16(ecx + eax * 2), 0)) goto loc_001B30F8; /* jne: not equal / not zero */

loc_001B3100:
    eax = ecx + eax * 2;
    esi = esp + 0x14;
    edi = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001B2F90(); /* call 0x001B2F90 */

loc_001B3114:
    if (CMP_BE(eax, 4)) goto loc_001B3010; /* jbe: below or equal (unsigned <=) */

loc_001B311D:
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
