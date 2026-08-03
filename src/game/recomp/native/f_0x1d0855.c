#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0855
 * Original: 0x001D0855 - 0x001D0956 (257 bytes, 90 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0855(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0855:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(MEM32(esi), 0x10)) goto loc_001D0870; /* jne: not equal / not zero */

loc_001D0869:
    eax = 0; /* xor self */
    goto loc_001D0951;

loc_001D0870:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    eax = edi;
    ecx = eax + 1;

loc_001D087A:
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001D087A; /* jne: not equal / not zero */

loc_001D0881:
    eax = eax - ecx;
    ecx = MEM32(ebp + 0xC);
    edx = esi + 0x140;
    edx = edx - ecx;

loc_001D088E:
    SET_LO8(ebx, MEM8(ecx));
    MEM8(edx + ecx) = LO8(ebx);
    ecx++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001D088E; /* jne: not equal / not zero */

loc_001D0898:
    edx = MEM32(ebp + 0x10);
    ecx = esi + edx + 0x140;
    ecx = ecx - edi;

loc_001D08A4:
    SET_LO8(ebx, MEM8(edi));
    MEM8(ecx + edi) = LO8(ebx);
    edi++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001D08A4; /* jne: not equal / not zero */

loc_001D08AE:
    edi = eax + edx;
    if (CMP_AE(edi, 0x103)) goto loc_001D08CB; /* jae: above or equal (unsigned >=) */

loc_001D08B9:
    ecx = eax + esi;
    ecx = ecx + edx;
    MEM8(ecx + 0x140) = 0x5C;
    MEM8(ecx + 0x141) = LO8(ebx);

loc_001D08CB:
    if (CMP_GE(edi, 0xF7)) goto loc_001D094C; /* jge: greater or equal (signed >=) */

loc_001D08D3:
    eax = eax + esi;
    ebx = eax + edx;
    ecx = 0x36BC18;
    eax = ebx + 0x140;
    eax = eax - ecx;

loc_001D08E5:
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001D08E5; /* jne: not equal / not zero */

loc_001D08EF:
    PUSH32(esp, 0);
    edi = 0x80;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0E3C(); /* call 0x001D0E3C */

loc_001D090E:
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001D0945; /* je: equal / zero */

loc_001D0916:
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D068A(); /* call 0x001D068A */

loc_001D091E:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001D093D; /* je: equal / zero */

loc_001D0925:
    PUSH32(esp, edi);
    esi = esi + 0x244;
    PUSH32(esp, esi);
    PUSH32(esp, 0x36BC80);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D06D2(); /* call 0x001D06D2 */

loc_001D093A:
    MEM32(ebp + -4) = eax;

loc_001D093D:
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D0945:
    MEM8(ebx + 0x141) = 0;

loc_001D094C:
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001D0951:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
