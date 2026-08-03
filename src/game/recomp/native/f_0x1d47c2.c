#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D47C2
 * Original: 0x001D47C2 - 0x001D48BC (250 bytes, 87 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D47C2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D47C2:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 2));
    ecx = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + ecx * 4 + 0x60);
    MEM32(ebp + -8) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xF) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) + ecx;
    /* test ecx, ecx - flags set for next jcc */
    MEM8(ebp + -1) = LO8(edx);
    if (TEST_Z(ecx, ecx)) goto loc_001D48AB; /* je: equal / zero */

loc_001D47F8:
    goto loc_001D4800;

loc_001D47FA:
    SET_LO8(edx, MEM8(ebp + -1));
    ecx = MEM32(ebp + 0x10);

loc_001D4800:
    if (CMP_BE(ecx, 0xFF00)) goto loc_001D481E; /* jbe: below or equal (unsigned <=) */

loc_001D4808:
    /* cmp ecx, 0xFF01 - flags set for next jcc */
    ebx = 0xFF00;
    if (CMP_NE(ecx, 0xFF01)) goto loc_001D4818; /* jne: not equal / not zero */

loc_001D4815:
    ebx = ebx + 0xFFFFFFF0u;

loc_001D4818:
    MEM8(eax + 5) = 0;
    goto loc_001D4826;

loc_001D481E:
    ebx = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(eax + 5) = LO8(ecx);

loc_001D4826:
    MEM8(eax + 5) = MEM8(eax + 5) & 0xF8;
    /* cmp LO16(ebx), 0x80 - flags set for next jcc */
    MEM16(eax + 2) = LO16(esi);
    MEM8(eax + 4) = LO8(edx);
    MEM16(eax) = LO16(ebx);
    if (CMP_AE(LO16(ebx), 0x80)) goto loc_001D4866; /* jae: above or equal (unsigned >=) */

loc_001D483B:
    ecx = ZX16(LO16(ebx));
    esi = edi + ecx * 8 + 0x180;
    if (CMP_NE(MEM32(esi), esi)) goto loc_001D487C; /* jne: not equal / not zero */

loc_001D4849:
    edx = ecx;
    edx = edx >> 3;
    edx = edx + edi + 0x160;
    MEM32(ebp + 8) = edx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = MEM8(ecx) | LO8(edx);
    goto loc_001D487C;

loc_001D4866:
    ecx = edi + 0x180;
    esi = MEM32(ecx);
    goto loc_001D4878;

loc_001D4870:
    if (CMP_BE(LO16(ebx), MEM16(esi + -8))) goto loc_001D487C; /* jbe: below or equal (unsigned <=) */

loc_001D4876:
    esi = MEM32(esi);

loc_001D4878:
    if (CMP_NE(ecx, esi)) goto loc_001D4870; /* jne: not equal / not zero */

loc_001D487C:
    edx = MEM32(esi + 4);
    ecx = eax + 8;
    MEM32(ecx) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(esi + 4) = ecx;
    ecx = ZX16(LO16(ebx));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    ecx = ecx << 4;
    eax = eax + ecx;
    ecx = MEM32(ebp + -8);
    /* cmp eax, MEM32(ecx + 0x2C) - flags set for next jcc */
    esi = ebx;
    if (CMP_AE(eax, MEM32(ecx + 0x2C))) goto loc_001D48B5; /* jae: above or equal (unsigned >=) */

loc_001D48A1:
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_001D47FA; /* jne: not equal / not zero */

loc_001D48AB:
    if (TEST_NZ(MEM8(ebp + 0xF), 0x10)) goto loc_001D48B5; /* jne: not equal / not zero */

loc_001D48B1:
    MEM16(eax + 2) = LO16(esi);

loc_001D48B5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
