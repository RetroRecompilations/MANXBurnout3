#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D7040
 * Original: 0x001D7040 - 0x001D712A (234 bytes, 73 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7040:
    PUSH32(esp, ecx);
    eax = MEM32(0x75DB60);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001D7087; /* je: equal / zero */

loc_001D7050:
    edi = 0; /* xor self */

loc_001D7052:
    esi = MEM32(edi * 4 + 0x75DE20);
    eax = MEM32(esi * 4 + 0x75D4A0);
    if (CMP_EQ(eax, MEM32(esi * 4 + 0x35FB58))) goto loc_001D7070; /* je: equal / zero */

loc_001D7069:
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355390(); /* call 0x00355390 */

loc_001D7070:
    eax = MEM32(0x75DB60);
    edi++;
    /* cmp edi, eax - flags set for next jcc */
    MEM32(esi * 4 + 0x75DB80) = ebx;
    if (CMP_B(edi, eax)) goto loc_001D7052; /* jb: below (unsigned <) */

loc_001D7081:
    MEM32(0x75DB60) = ebx;

loc_001D7087:
    edi = 0; /* xor self */
    /* nop */

loc_001D7090:
    eax = MEM32(edi * 4 + 0x75D940);
    if (TEST_Z(eax, eax)) goto loc_001D70F8; /* je: equal / zero */

loc_001D709B:
    edx = edi;
    ebp = 0; /* xor self */
    edx = edx << 5;
    MEM32(esp + 0x10) = edx;
    ebx = edi * 4 + 0x75D2A0;
    goto loc_001D70B3;

loc_001D70AF:
    edx = MEM32(esp + 0x10);

loc_001D70B3:
    eax = MEM32(ebx);
    esi = edi + eax * 4;
    esi = esi << 2;
    ecx = MEM32(esi + 0x75D740);
    edx = edx + eax;
    if (CMP_EQ(ecx, MEM32(edx * 4 + 0x35D498))) goto loc_001D70D4; /* je: equal / zero */

loc_001D70CC:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355610(); /* call 0x00355610 */

loc_001D70D4:
    eax = MEM32(edi * 4 + 0x75D940);
    ebp++;
    ebx = ebx + 0x10;
    /* cmp ebp, eax - flags set for next jcc */
    MEM32(esi + 0x75D960) = 0;
    if (CMP_B(ebp, eax)) goto loc_001D70AF; /* jb: below (unsigned <) */

loc_001D70ED:
    MEM32(edi * 4 + 0x75D940) = 0;

loc_001D70F8:
    edi++;
    if (CMP_B(edi, 4)) goto loc_001D7090; /* jb: below (unsigned <) */

loc_001D70FE:
    esi = 0; /* xor self */

loc_001D7100:
    eax = MEM32(esi * 4 + 0x75DB70);
    if (CMP_EQ(MEM32(esi * 4 + 0x41AA34), eax)) goto loc_001D711E; /* je: equal / zero */

loc_001D7110:
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi * 4 + 0x41AA34) = eax;
    PUSH32(esp, 0); sub_0034DCA0(); /* call 0x0034DCA0 */

loc_001D711E:
    esi++;
    if (CMP_B(esi, 4)) goto loc_001D7100; /* jb: below (unsigned <) */

loc_001D7124:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
