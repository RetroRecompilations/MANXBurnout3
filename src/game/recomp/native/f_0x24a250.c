#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A250
 * Original: 0x0024A250 - 0x0024A3DB (395 bytes, 140 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024A250:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x41C;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* cmp MEM32(ebp + 0x10), edi - flags set for next jcc */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -20) = edi;
    if (CMP_NE(MEM32(ebp + 0x10), edi)) goto loc_0024A26E; /* jne: not equal / not zero */

loc_0024A267:
    eax = 0; /* xor self */
    goto loc_0024A3D8;

loc_0024A26E:
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = eax & 0x1F;
    ebx = (uint32_t)((int32_t)ebx >> 5);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    ebx = ebx * 4 + 0x76B820;
    eax = MEM32(ebx);
    esi = esi << 3;
    if (TEST_Z(MEM8(eax + esi + 4), 0x20)) goto loc_0024A2A1; /* je: equal / zero */

loc_0024A292:
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0024C05C(); /* call 0x0024C05C */

loc_0024A29E:
    esp = esp + 0x10;

loc_0024A2A1:
    eax = MEM32(ebx);
    eax = eax + esi;
    if (TEST_Z(MEM8(eax + 4), 0x80)) goto loc_0024A371; /* je: equal / zero */

loc_0024A2AF:
    /* cmp MEM32(ebp + 0x10), edi - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(MEM32(ebp + 0x10), edi)) goto loc_0024A3A7; /* jbe: below or equal (unsigned <=) */

loc_0024A2C1:
    ecx = MEM32(ebp + -12);
    ecx = ecx - MEM32(ebp + 0xC);
    eax = ebp + -1052;
    MEM32(ebp + -8) = edi;

loc_0024A2D0:
    if (CMP_AE(ecx, MEM32(ebp + 0x10))) goto loc_0024A2FC; /* jae: above or equal (unsigned >=) */

loc_0024A2D5:
    edx = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    SET_LO8(edx, MEM8(edx));
    ecx++;
    if (CMP_NE(LO8(edx), 0xA)) goto loc_0024A2ED; /* jne: not equal / not zero */

loc_0024A2E3:
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    MEM8(eax) = 0xD;
    eax++;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;

loc_0024A2ED:
    MEM8(eax) = LO8(edx);
    eax++;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    if (CMP_L(MEM32(ebp + -8), 0x400)) goto loc_0024A2D0; /* jl: less (signed <) */

loc_0024A2FC:
    edi = eax;
    eax = ebp + -1052;
    edi = edi - eax;
    PUSH32(esp, 0);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -1052;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax + esi));
    PUSH32(esp, 0); sub_001D10B4(); /* call 0x001D10B4 */

loc_0024A31E:
    if (TEST_Z(eax, eax)) goto loc_0024A33B; /* je: equal / zero */

loc_0024A322:
    eax = MEM32(ebp + -24);
    MEM32(ebp + -16) = MEM32(ebp + -16) + eax;
    if (CMP_L(eax, edi)) goto loc_0024A343; /* jl: less (signed <) */

loc_0024A32C:
    eax = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    if (CMP_B(eax, MEM32(ebp + 0x10))) goto loc_0024A2C1; /* jb: below (unsigned <) */

loc_0024A339:
    goto loc_0024A345;

loc_0024A33B:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_0024A340:
    MEM32(ebp + -4) = eax;

loc_0024A343:
    edi = 0; /* xor self */

loc_0024A345:
    eax = MEM32(ebp + -16);
    if (CMP_NE(eax, edi)) goto loc_0024A3D3; /* jne: not equal / not zero */

loc_0024A350:
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_0024A3A7; /* je: equal / zero */

loc_0024A355:
    PUSH32(esp, 5);
    POP32(esp, esi);
    if (CMP_NE(MEM32(ebp + -4), esi)) goto loc_0024A39C; /* jne: not equal / not zero */

loc_0024A35D:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A362:
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

loc_0024A36D:
    MEM32(eax) = esi;
    goto loc_0024A3CE;

loc_0024A371:
    PUSH32(esp, edi);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_001D10B4(); /* call 0x001D10B4 */

loc_0024A383:
    if (TEST_Z(eax, eax)) goto loc_0024A392; /* je: equal / zero */

loc_0024A387:
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -16) = eax;
    goto loc_0024A345;

loc_0024A392:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_0024A397:
    MEM32(ebp + -4) = eax;
    goto loc_0024A345;

loc_0024A39C:
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_0024A0C0(); /* call 0x0024A0C0 */

loc_0024A3A4:
    POP32(esp, ecx);
    goto loc_0024A3CE;

loc_0024A3A7:
    eax = MEM32(ebx);
    if (TEST_Z(MEM8(eax + esi + 4), 0x40)) goto loc_0024A3BC; /* je: equal / zero */

loc_0024A3B0:
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM8(eax), 0x1A)) goto loc_0024A3BC; /* jne: not equal / not zero */

loc_0024A3B8:
    eax = 0; /* xor self */
    goto loc_0024A3D6;

loc_0024A3BC:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024A3C1:
    MEM32(eax) = 0x1C;
    PUSH32(esp, 0); sub_0024A0B7(); /* call 0x0024A0B7 */

loc_0024A3CC:
    MEM32(eax) = edi;

loc_0024A3CE:
    eax = eax | 0xFFFFFFFFu;
    goto loc_0024A3D6;

loc_0024A3D3:
    eax = eax - MEM32(ebp + -20);

loc_0024A3D6:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0024A3D8:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
