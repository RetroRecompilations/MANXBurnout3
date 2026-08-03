#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FD770
 * Original: 0x001FD770 - 0x001FD99D (557 bytes, 194 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FD770:
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    eax = MEM32(ebp + 0x4C);
    ecx = MEM32(eax + 4);
    ebx = eax + 4;
    /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_001FD7B4; /* je: equal / zero */

loc_001FD78F:
    /* nop */

loc_001FD790:
    edi = MEM32(esp + 0x24);
    edx = MEM32(ecx + -20);
    /* cmp edx, edi - flags set for next jcc */
    eax = ecx + -20;
    if (CMP_EQ(edx, edi)) goto loc_001FD7A6; /* je: equal / zero */

loc_001FD79E:
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_001FD790; /* jne: not equal / not zero */

loc_001FD7A4:
    goto loc_001FD7B8;

loc_001FD7A6:
    ecx = MEM32(eax + 0xC);
    POP32(esp, edi);
    ecx++;
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001FD7B4:
    edi = MEM32(esp + 0x24);

loc_001FD7B8:
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FD370(); /* call 0x001FD370 */

loc_001FD7C1:
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_001FD7CF; /* jne: not equal / not zero */

loc_001FD7C8:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001FD7CF:
    ecx = ZX16(MEM16(edi + 0x14));
    eax = ZX16(MEM16(edi + 0x16));
    eax = eax + ecx;
    ecx = MEM32(esp + 0x2C);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    eax = eax * 8 + 0x1C;
    if (TEST_Z(ecx, ecx)) goto loc_001FD973; /* je: equal / zero */

loc_001FD7ED:
    edx = MEM32(esp + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001FD7F5:
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001FD993; /* je: equal / zero */

loc_001FD802:
    MEM32(esi + 0x10) = 1;

loc_001FD809:
    eax = esi + 0x1C;
    MEM32(esi + 4) = eax;
    ecx = ZX16(MEM16(edi + 0x14));
    edx = eax + ecx * 8;
    ecx = 0; /* xor self */
    MEM32(esi + 8) = edx;
    MEM32(esi) = edi;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ebp + 0x4C);
    SET_LO16(eax, MEM16(edi + 0x14));
    /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    SET_LO16(edx, MEM16(edx + 0xC));
    MEM16(esp + 0x10) = LO16(edx);
    if (CMP_BE(LO16(eax), LO16(ecx))) goto loc_001FD8C0; /* jbe: below or equal (unsigned <=) */

loc_001FD839:
    eax = ZX16(LO16(eax));
    MEM32(esp + 0x18) = ecx;
    ebp = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;

loc_001FD846:
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(esp + 0x10), LO16(ebx))) goto loc_001FD89F; /* jbe: below or equal (unsigned <=) */

loc_001FD84F:
    edi = 0; /* xor self */

loc_001FD851:
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + edx);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FD870:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FD890; /* jne: not equal / not zero */

loc_001FD877:
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 0x14);
    MEM16(edx + ebp + 4) = LO16(ebx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esi + 4);
    eax = MEM32(edi + ecx + 0x14);
    MEM32(edx + ebp) = eax;

loc_001FD890:
    ebx++;
    edi = edi + 0x18;
    if (CMP_B(LO16(ebx), MEM16(esp + 0x10))) goto loc_001FD851; /* jb: below (unsigned <) */

loc_001FD89B:
    edi = MEM32(esp + 0x28);

loc_001FD89F:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = ecx + 0x14;
    ebp = ebp + 8;
    eax--;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_001FD846; /* jne: not equal / not zero */

loc_001FD8B8:
    ebp = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x20);

loc_001FD8C0:
    ecx = MEM32(ebp + 0x4C);
    SET_LO16(edi, MEM16(edi + 0x16));
    SET_LO16(edx, MEM16(ecx + 0xE));
    ebp = 0; /* xor self */
    /* cmp LO16(edi), LO16(ebp) - flags set for next jcc */
    MEM16(esp + 0x10) = LO16(edx);
    if (CMP_BE(LO16(edi), LO16(ebp))) goto loc_001FD958; /* jbe: below or equal (unsigned <=) */

loc_001FD8DB:
    eax = ZX16(LO16(edi));
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x1C) = eax;

loc_001FD8E6:
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(esp + 0x10), LO16(ebx))) goto loc_001FD93B; /* jbe: below or equal (unsigned <=) */

loc_001FD8EF:
    edi = 0; /* xor self */

loc_001FD8F1:
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + edx);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001FD910:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FD930; /* jne: not equal / not zero */

loc_001FD917:
    edx = MEM32(esi + 8);
    eax = MEM32(esp + 0x14);
    MEM16(edx + ebp + 4) = LO16(ebx);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esi + 8);
    eax = MEM32(edi + ecx + 0x14);
    MEM32(edx + ebp) = eax;

loc_001FD930:
    ebx++;
    edi = edi + 0x18;
    if (CMP_B(LO16(ebx), MEM16(esp + 0x10))) goto loc_001FD8F1; /* jb: below (unsigned <) */

loc_001FD93B:
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x1C);
    ecx = ecx + 0x14;
    ebp = ebp + 8;
    eax--;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_001FD8E6; /* jne: not equal / not zero */

loc_001FD954:
    ebx = MEM32(esp + 0x20);

loc_001FD958:
    ecx = MEM32(ebx);
    eax = esi + 0x14;
    MEM32(esi + 0x18) = ebx;
    MEM32(eax) = ecx;
    edx = MEM32(ebx);
    MEM32(edx + 4) = eax;
    MEM32(ebx) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001FD973:
    PUSH32(esp, 0x3080B);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FD97E:
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001FD993; /* je: equal / zero */

loc_001FD987:
    MEM32(esi + 0x10) = 0;
    goto loc_001FD809;

loc_001FD993:
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
